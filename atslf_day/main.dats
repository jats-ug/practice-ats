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
