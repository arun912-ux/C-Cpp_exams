
def highestSum(m,n,arr):

    mx=-999

    for k in range(0,m):
        psm=0
        ssm=0
        for i in range(0,m):
            for j in range(0,n):
                if i == j+k:
                    psm+=arr[i][j]
                if i+j == m-k-1:
                    ssm+=arr[i][j]

        mx1 = max(psm, ssm)
        mx = max(mx, mx1)


    return mx;


def main():
    m,n = [int(x) for x in input().split()]
    arr=[]
    for i in range(m):
        a = list(map(int, input().split()))
        arr.append(a)
    
    print(highestSum(m,n,arr))


main()
