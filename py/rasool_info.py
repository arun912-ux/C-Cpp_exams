
def getDigits(st):
    st = list(st)
    # print(st)
    lis = []
    
    for ch in st:
        for c in ch:
            # print(c)
            lis.append(int(c))
    
    # print(lis)
    return list(set(lis))



n = int(input())
k = int(input())

# print(n, k)

a = []

for ki in range(0, k):
    x = [int(x) for x in input().split()]
    a.append(x)


# print(a)

dic = {}
mn = 99
for i in range(k):
    cnt=0
    for j in range(n):
        # print()
        for h in range(j+1, n):
            # print(a[i][k], end=" ")
            if(a[i][j] == a[i][h]):
                # print(a[i][h], "-----", j, h )
                cnt+=1
                st = str(j) + str(h)
                if(st in dic):
                    dic[st]+=1
                else:
                    dic[st]=1
    mn = min(cnt, mn)
    # print("cnt",mn)

# print(dic)
ml = []


if(k == 1):
    # print(len(dic))
    ret = getDigits(dic.keys())
    # print(ret)
    ml = ret.copy()
    fl = len(ml)-1
else:
    x=0
    for k,v in dic.items():
        if(v>1):
            # print(k)
            ret = getDigits(k)
            
            ml.extend(ret)
    ml = list(set(ml))
    # print(ml)



# print(ml)

fl = (mn)-1
# print(mn-1)


for i in range(0,n):
    if i in ml:
        print(fl,end=" ")
    else:
        print(0, end=" ")

