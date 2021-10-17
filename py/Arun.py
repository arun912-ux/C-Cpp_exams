
l = int(input())
r = int(input())

dt = {}

cnt=0
for i in range(l, r+1):
    st = str(i)
    for j in st:
        if j in dt:
            dt[j]+=1
        else:
            dt[j]=1
    
    if len(dt) == len(st):
        cnt+=1
    dt = {}

print(cnt)

