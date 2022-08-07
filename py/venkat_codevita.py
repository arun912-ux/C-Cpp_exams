
import datetime
import calendar

primlist = []
weekday = {"Mon": "Monday", "Tues" :"Tuesday", "Wed":"Wednesday", 
            "Thurs":"Thursday", "Fri":"Friday", "Sat":"Saturday", "Sun": "Sunday"}

def isPrime(n):
    if(n<2):
        return False
    for i in range(2, n//2 + 1):
        if(n%i == 0):
            return False

    return True        


def getDayOfWeek(d):
    born = datetime.datetime.strptime(d, '%Y%m%d').weekday()
    return (calendar.day_name[born])
    


inp = input().split(" ")

d = inp[0]
da = weekday[inp[1]]
p = int(inp[2])

# print(inp)

# Driver program
date = '20000622'
# print(getDayOfWeek(d))

for i in range(2, p+1):
    if isPrime(i):
        primlist.append(i)

# print(primlist)

# k = datetime.timedelta(days=30)
# newdate = datetime.datetime.strptime(d, '%Y%m%d') + k
# newdate = newdate.date().strftime("%Y%m%d")
# print(newdate)

flag = False

for k in primlist:
    kd = k
    k = datetime.timedelta(days=k)
    newdate = datetime.datetime.strptime(d, '%Y%m%d') + k
    newdate = newdate.date().strftime("%Y%m%d")
    ff = newdate
    # ff = "20000622"
    mn = ff[4:6]
    # print(ff, mn)
    mn = (int(mn))
    if getDayOfWeek(ff) == da and isPrime(mn):
        print("Yes", kd)
        flag = True
        break


if(not flag):
    print("No 0")










