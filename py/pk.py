
n = int(input())
m = int(input())
al = [int(x) for x in input().split()]
rows=[]
k=0
for i in range(0,n):
    x = al[k:k+m]
    rows.append(x)
    k+=m


for i in range(0,m):
    print()
    for j in range(0, n):
        print(rows[j][i],end=' ')

