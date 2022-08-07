
def KNumber(k, n):
    klist = []

    for i in range(1, n*k):
        klist.append(k*i)

        if str(k) in str(i):
            klist.append(i)



    return (sorted(set(klist))[n-1])    



k = int(input())
n = int(input())
print(KNumber(k, n))

