n = int(input())
cnt=0

for i in range(2, 100000000):
    isPrime = True
    for j in range(2, i//2 + 1):
        if i%j==0:
            isPrime = False
            break
        else:
            continue
    if isPrime:
        cnt+=1
        if cnt==n:
            print(i)
            break

