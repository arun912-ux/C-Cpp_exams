
def absoluteLeftDiagonalDiff(m,n,a,b):
    sm1=0
    sm2=0
    x = min(m,n)
    for i in range(x):
        sm1 += a[i][i]
        sm2+= b[i][i]

    return abs(sm1-sm2)    




def main():
    S = input().split()
    m=int(input())
    n=int(input())
    a=[]
    b=[]
    
    S=input().split()
    x=0
    for i in range(m):
        alt1=[]
        for j in range(n):
            alt1.append(int(S[x]))
            x+=1

        a.append(alt1)
    
    P = input().split()
    y=0
    for i in range(m):
        alt2 = []
        for j in range(n):
            alt2.append(int(P[y]))
            y+=1
        b.append(alt2)
    
    print(absoluteLeftDiagonalDiff(m,n,a,b))


main()








