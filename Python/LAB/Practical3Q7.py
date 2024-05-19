day=int(input("Enter day: "))
month=int(input("Enter month: "))
year=int(input("Enter year: "))
if(month in [1,3,5,7,8,10,12]):
    if(day==31):
        if(month==12):
            print("Day=01")
            print("Month=01")
            print("Year=",year+1)
        else:
            print("Day=01")
            print("Month=",month+1)
            print("Year=",year)
    else:
        print("Day=",day+1)
        print("Month=",month)
        print("Year=",year)
else:
    if(day==30):
        print("Day=01")
        print("Month=",month+1)
        print("Year=",year)
    else:
        print("Day=",day+1)
        print("Month=",month)
        print("Year=",year)

