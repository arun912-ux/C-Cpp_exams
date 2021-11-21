

def findDef(N):
    st=str(N)
    n1=""
    n2=""
    for i in range(len(st)):
        if i%2==0:
            n1+=st[i]
        else:
            n2+=st[i]

    result = abs(int(n1)-int(n2))
    return result

def smallesr_pair(a, n):
    sum=0

    a.sort()
    sum = a[0]+a[1]

    return sum

n = int(input())
ar = [int(x) for x in input().split()]
print(smallesr_pair(ar, n))
# print(findDef(n))


