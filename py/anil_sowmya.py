
def removingOcccuerances(cls, input1, input2):
    li = input1
    cnt=0
    nl=[]
    for i in range(0, input2):
        if li[i]==0:
            cnt+=1
        else:
            nl.append(li[i])

    for i in range(cnt):
        nl.append(0)  

    return nl



lis = [int(x) for x in input().split()]
n = int(input())
cls=0
print(*removingOcccuerances(cls, lis, n))