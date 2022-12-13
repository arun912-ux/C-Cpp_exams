
no_cock = int(input())
no_cust = int(input())

cust_cock = []

for i in range(0, no_cust):
    x = [int(c) for c in input().split()]
    cust_cock.append(x)


# print(cust_cock)

dic = {}

for i in range(0, len(cust_cock)):

    T = cust_cock[i]

    for j in T:
        # print(j)
        if(j in dic):
            dic[j] += 1
        else :
            dic[j] = 1

print(dic)

cnt=0

for k,v in dic.items():
    if int(v) != no_cust:
        cnt+=1

print(cnt+1)

