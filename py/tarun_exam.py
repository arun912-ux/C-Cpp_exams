
st = input()

dic = {}

for i in st:
    if i not in dic:
        dic[i]=1
    else:
        dic[i]+=1


n = len(dic)
fac=1
for i in range(1,n+1):
    fac*=i

ml = 1
for (k,v) in dic.items():
    ml*=v

print(fac*ml)

