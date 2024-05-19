sec=int(input("Enter time in sec: "))
hours=int(sec/3600)
min=int((sec/60)%60)
sec=sec%60
print("Time in HH:MM:SS",hours,":",min,":",sec)