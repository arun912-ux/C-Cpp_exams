

def computeTime(cls, input1, input2, input3):

    n = input1
    ar = input2

    rl = len(ar)
    # print(rl)

    if(rl < input3 or n < rl):
        return -1



    return -1




n = int(input())
ar = []

for i in range(0, n):

    c = [int(x) for x in input().split()]
    ar.append(c)

# print(ar)

k = int(input())

print(computeTime(n, ar, k))




