
def getDigits(st):
    st = list(st)
    lis = []
    
    for ch in st:
        for c in ch:
            # print(c)
            lis.append(int(c))
    
    return list(set(lis))



n = int(input())
k = int(input())

a = []

for ki in range(0, k):
    x = [int(x) for x in input().split()]
    a.append(x)

dic = {}
mn = 99
for i in range(k):
    cnt=0
    for j in range(n):
        for h in range(j+1, n):
            if(a[i][j] == a[i][h]):
                cnt+=1
                st = str(j) + str(h)
                if(st in dic):
                    dic[st]+=1
                else:
                    dic[st]=1
    mn = min(cnt, mn)

ml = []


if(k == 1):
    ret = getDigits(dic.keys())
    ml = ret.copy()
    fl = len(ml)-1
else:
    x=0
    for k,v in dic.items():
        if(v>1):
            ret = getDigits(k)
            ml.extend(ret)
    ml = list(set(ml))



fl = (mn)-1

for i in range(0,n):
    if i in ml:
        print(fl)
    else:
        print(0)

