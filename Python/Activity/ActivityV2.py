from ActivityV2library import *
import datetime
print("Add: ",sum(1,2))
print("Average: ",average(1,2,3,4,5))
print("Difference: ", dif(1,2))
print("Product: ",product(3,2))
print("Division: ",division(1,2))

start_time = datetime.datetime.now()
average(1,2)
end_time = datetime.datetime.now()
runtime=end_time-start_time
print(runtime.seconds)
