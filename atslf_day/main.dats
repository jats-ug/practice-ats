datasort Day =
  | Monday
  | Tuesday
  | Wednesday
  | Thursday
  | Friday
  | Saturday
  | Sunday

dataprop Good_Day (Day) =
  | Gd_Sat (Saturday)
  | Gd_Sun (Sunday)

extern prfn gds:<> Good_Day Sunday

primplement gds = Gd_Sun
