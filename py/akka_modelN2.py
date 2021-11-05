
t = int(input())

for i in range(0, t):
    n = int(input())
    for j in range(6, 10000000, 1):
        ls=[]
        for k in range(1, j+1):
            if j%k==0:
                ls.append(k)
        if len(ls)>=4:
            if j>10000: 
                print(j, ls)
            if ls[1]-ls[0]>=n and ls[2]-ls[1]>=n and ls[3]-ls[2]>=n:
                print(j)
                break

