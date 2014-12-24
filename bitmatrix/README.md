# ビット行列型

* ATSLIB/prelude/matrixptr http://ats-lang.sourceforge.net/LIBRARY/prelude/SATS/DOCUGEN/HTML/matrixptr.html
* ATSLIB/prelude/matrixref http://ats-lang.sourceforge.net/LIBRARY/prelude/SATS/DOCUGEN/HTML/matrixref.html

を改造して、ビットを内容物とする行列(二次元配列)ライブラリを作る。

## なんで必要？

FSM-55のファームウェアでは、電光表示板データを以下のような形式で扱っている。

```c
#define DATA55(x0,x1,x2,x3,x4) (x0<<20)|(x1<<15)|(x2<<10)|(x3<< 5)|(x4<< 0)
#define SIZE55(img) (sizeof (img) / sizeof (uint32_t))

static uint32_t image0[] = {
  DATA55 (0x00,0x00,0x00,0x00,0x00),
  DATA55 (0x00,0x01,0x00,0x00,0x00),
  DATA55 (0x01,0x03,0x01,0x01,0x00),
  DATA55 (0x02,0x06,0x02,0x02,0x01),
/* --snip-- */
  DATA55 (0x00,0x00,0x00,0x00,0x00),
  DATA55 (0x00,0x00,0x00,0x00,0x00),
};
```

これにはいくつか問題がある。

* image0[]に入っているビットを扱うのにエンコード/デコードが必要
* ビット列ではなくフレーム毎にデータを作ってしまっているので、データが本質的に重複している

本質的には電光表示のデータはLEDのON/OFFを表わすビット二次元配列なのだから、"Happy"を電光表示するなら以下のようなデータをリテラルで定義できないか。縦横の方向はどちらでも良いかもしれない。

```
0b10010110011100111001001
0b10010001010010100101001
0b11110111011100111000111
0b10010101010000100000001
0b10010111010000100001110
```

## ATS標準ライブラリにおける二次元配列(行列)

ATSの行列ライブラリは以下。

### 線形型を使って行列型にアクセス

* ATS-Postiats/prelude/DATS/matrixptr.dats
* ATS-Postiats/doc/EXAMPLE/ATSLIB/prelude_matrixptr.dats

線形型のポインタをtakeout/addbackしてアクセスする。
$arrpszで作ったリテラルをarrayptr2matrixptrでポインタ型を変換する。

* "[]" を使って添字アクセス。
* ":=" を使って代入。

### 行列型本体

* ATS-Postiats/prelude/DATS/matrix.dats
* ATS-Postiats/doc/EXAMPLE/ATSLIB/prelude_matrix.dats

単純にポインタ演算しているだけ。

```ocaml
implement{a}
matrix_getref_at_int
  (M, i, n, j) =
  $UN.cast{cPtr1(a)}(ptr_add<a> (addr@(M), i*n+j))

implement{a}
matrix_getref_at_size
  (M, i, n, j) =
  $UN.cast{cPtr1(a)}(ptr_add<a> (addr@(M), i*n+j))
```

## 設計

### リテラル

atsdocを使って、ビット列表現を "$arrpsz{uchar}" にコンパイル時変換する。

### アクセス

matrix.datsと同じようにポインタを使ってアクセスして、ライブラリ内部ビットマスク。
