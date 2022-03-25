
n = int(input())

ar=[int(x) for x in input().split()]

dic= {}

for i in ar:
    if i not in dic:
        dic[i]=1
    else:
        dic[i]+=1


# print(dic)

for (k,v) in dic.items():
    if v==1:
        print(k)
        break



