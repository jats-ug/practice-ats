(*
Inductive day : Type :=
  | monday : day
  | tuesday : day
  | wednesday : day
  | thursday : day
  | friday : day
  | saturday : day
  | sunday : day.
*)
datasort Day =
  | Monday
  | Tuesday
  | Wednesday
  | Thursday
  | Friday
  | Saturday
  | Sunday

(*
Inductive good_day : day -> Prop :=
  | gd_sat : good_day saturday
  | gd_sun : good_day sunday.
*)
dataprop Good_Day (Day) =
  | Gd_Sat (Saturday)
  | Gd_Sun (Sunday)

(*
Theorem gds : good_day sunday.
Proof. apply gd_sun. Qed.
*)
extern prfn gds:<> Good_Day Sunday
primplement gds = Gd_Sun

(*
Inductive day_before : day -> day -> Prop :=
  | db_tue : day_before tuesday monday
  | db_wed : day_before wednesday tuesday
  | db_thu : day_before thursday wednesday
  | db_fri : day_before friday thursday
  | db_sat : day_before saturday friday
  | db_sun : day_before sunday saturday
  | db_mon : day_before monday sunday.
*)
dataprop Day_Before (Day, Day) =
  | DB_Tue (Tuesday, Monday)
  | DB_Wed (Wednesday, Tuesday)
  | DB_Thu (Thursday, Wednesday)
  | DB_Fri (Friday, Thursday)
  | DB_Sat (Saturday, Friday)
  | DB_Sun (Sunday, Saturday)
  | DB_Mon (Monday, Sunday)

(*
Inductive fine_day_for_singing : day -> Prop :=
  | fdfs_any : forall d:day, fine_day_for_singing d.
*)
dataprop Fine_Day_For_Singing (Day) =
  | {d:Day} Fdfs_Any (d)

(*
Theorem fdfs_wed : fine_day_for_singing wednesday.
Proof. apply fdfs_any. Qed.
*)
extern prfn fdfs_wed:<> Fine_Day_For_Singing Wednesday
primplement fdfs_wed = Fdfs_Any

(*
Definition fdfs_wed' : fine_day_for_singing wednesday :=
  fdfs_any wednesday.
*)
(* Can't translate... *)

(*
Check fdfs_wed.
Check fdfs_wed'.
*)
prval _ = $showtype fdfs_wed

(*
Inductive ok_day : day -> Prop :=
  | okd_gd : forall d,
      good_day d ->
      ok_day d
  | okd_before : forall d1 d2,
      ok_day d2 ->
      day_before d2 d1 ->
      ok_day d1.
*)
dataprop Ok_Day (Day) =
  | {d:Day} Okd_Gd (d) of (Good_Day d)
  | {d1,d2:Day} Okd_Before (d1) of (Ok_Day d2, Day_Before (d2, d1))

(*
Definition okdw : ok_day wednesday :=
  okd_before wednesday thursday
    (okd_before thursday friday
       (okd_before friday saturday
         (okd_gd saturday gd_sat)
         db_sat)
       db_fri)
    db_thu.
*)
extern prfn okdw:<> Ok_Day Wednesday
primplement okdw = let
  prval okd_sat = Okd_Gd Gd_Sat
  prval okd_fri = Okd_Before (okd_sat, DB_Sat)
  prval okd_thu = Okd_Before (okd_fri, DB_Fri)
  prval okd_wed = Okd_Before (okd_thu, DB_Thu)
in
  okd_wed
end

(*
Theorem okdw' : ok_day wednesday.
Proof.
  apply okd_before with (d2:=thursday).
    apply okd_before with (d2:=friday).
      apply okd_before with (d2:=saturday).
          apply okd_gd. apply gd_sat.
          apply db_sat.
      apply db_fri.
  apply db_thu. Qed.
*)
(* Can't translate... *)

(*
Definition okd_before2 := forall d1 d2 d3,
  ok_day d3 ->
  day_before d2 d1 ->
  day_before d3 d2 ->
  ok_day d1.
*)
extern prfn okd_before2 {d1,d2,d3:Day} (Ok_Day d3, Day_Before (d2, d1), Day_Before (d3, d2)):<> Ok_Day d1
primplement okd_before2 (okd_d3, db_d21, db_d32) = let
  prval okd_d2 = Okd_Before (okd_d3, db_d32)
  prval okd_d1 = Okd_Before (okd_d2, db_d21)
in
  okd_d1
end

(*
Print okd_before2_valid.
*)
prval _ = $showtype okd_before2
