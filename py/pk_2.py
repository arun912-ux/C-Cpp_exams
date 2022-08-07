
n = int(input())

ar = [int(x) for x in input().split()]


# print(ar)

i=0
while(i < len(ar)-1):
    # print(i)
    # print(ar)
    if(ar[i] > ar[i+1]):
        ar[i] += ar[i+1]
        ar.remove(ar[i+1])
        # print(ar[i], ar[i+1])
        
        i-=1
        # print(i)
    i+=1

print(*ar)


