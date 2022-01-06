
t = int(input())

for tc in range(t):

    n = int(input())
    arr = [int(x) for x in input().split()]
    sm = sum(arr)
    # print(sm)
    tsm=0
    while(sm !=0):
        tsm += sm%10
        sm=sm//10
    sm=0
    while(tsm !=0):
        sm += tsm%10
        tsm=tsm//10
    print(sm)




