import datetime
import time

t1 = datetime.datetime.now()
print(t1)
file1 = open('trackedFile.txt', 'r+' )
time.sleep(3)
file1.close()
t2 = datetime.datetime.now()
print(t2)
t = t2 - t1

t_end = t2.strftime("%m/%d/%Y %I:%M:%S %p")
t_start = t1.strftime("%m/%d/%Y %I:%M:%S %p")

print('the file still open {} seconds'.format(t))

print("Time start:", t_start)
print("Time end:", t_end)