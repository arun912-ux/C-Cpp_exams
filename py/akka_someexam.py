
n = int(input())

for i in range(0,n):
    x = int(input())
    xb = bin(x)[2:]
    # print(xb)
    xcnt = xb.count('1')
    # print(xcnt)
    for j in range(x+1, x+10000):
        jb = bin(j)[2:]
        jcnt = jb.count('1')
        if jcnt==xcnt:
            print(j)
            break


