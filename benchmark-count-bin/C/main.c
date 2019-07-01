#include <stdio.h>

typedef struct _res_struct {
	int count;
	int result;
} res_t;

res_t tally(void) {
	res_t res = {0, 0};
	int c;

	while ((c = fgetc(stdin)) >= 0) {
		res.count += 1;
		res.result += c;
	}

	return res;
}

int main(void) {
	res_t res = tally();
	printf("count=%d\n", res.count);
	printf("result=%d\n", res.result);
}
