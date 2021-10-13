
ar = input().split(" ")
m,n = (map(int, ar))
# print(m,n)

x = max(m,n)

arr = [[0 for x in range(m)] for y in range(n)] 

for i in range(0,m):
    arr[i] = [int(x) for x in input().split()]

print(arr)

count = int(input())


su = 0
if m>n:
    for row in arr:
        row.extend([1]*(m-n))
    n=m
elif n>m:
    arr.append([1]*n)
    m=n

dia = [arr[i][i] for i in range(n)]

for ele in dia:
    cnt=0
    for i in range(n):
        for j in range(n):
            if i!=j and arr[i][j] == ele:
                cnt+=1

    if cnt > count:
        su+=ele
    


print(su)


