import calendar
year=int(input("Enter a year: "))
if(calendar.isleap(year)):
    print(year,"is a leap year.")
else:
    print(year,"is not a leap year.")