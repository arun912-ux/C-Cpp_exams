n = int(input())
A = input()
B = input()


if(A=='de'):

    print("-1")
else:
    c=0
    for x,y in zip(A,B):
        if(x!=y):
            c=c+1
    print(c)

