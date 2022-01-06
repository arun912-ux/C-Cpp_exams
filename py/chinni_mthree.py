def getSum(n, a,t):
    sum=0
    x=0
    for i in range(n):
        for j in range(n):
            if a[i][j] == t:
                x= i+j
                # print(i, j, x)
                break
    flag=False
    if x%2==0:
        flag=True
    else:
        flag=False
    
    for i in range(n):
        for j in range(n):
            if(a[i][j]%2==0 and flag):
                sum+=a[i][j]
            if(a[i][j]%2==1 and not flag):
                sum+=a[i][j]



    return sum


n = int(input())
a = []
for i in range(n):
    ar = [int(x) for x in input().split(" ")]
    a.append(ar)

t = int(input())
print(getSum(n,a,t))
