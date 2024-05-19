import pandas as pd
import numpy as np
ser=pd.Series(range(20,50,8),index=[10,20,30,40])
print(ser)
ser1=pd.Series({"Jan":31,"Feb":28,"Mar":31,"Apr":30})
print(ser1[2:4])
d1={"Name":["Deepak","Rohit","Shivansh","Manish"],"Age":[30,25,34,23], 
"Sport":["Cricket","volleyball","Hockey","Basketball"]}
print(pd.DataFrame(d1,index=["s1","s2","s3","s4"]))
s1 = pd.Series(["Deepak","Rohit","Shivansh","Manish"])
s2 = pd.Series([30,25,34,23])
s3 = pd.Series(["Cricket","volleyball","Hockey","Basketball"])
data = {"Name": s1, "Age": s2, "Sport": s3}
df = pd.DataFrame(data)
print(df)
print(df["Name"])
print(df[["Name","Age"]])
