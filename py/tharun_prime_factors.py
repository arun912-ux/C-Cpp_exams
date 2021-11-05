
# def isPrime(n):

#     for i in range(2, n//2 + 1):
#         if n%i==0:
#             return False
    
#     return True



n = int(input())
temp = n
pf = []

i=2

while temp!=1:

    while temp%i != 0:
        i+=1
        # if isPrime(i):
        #     continue

    # if temp%i==0:
    # else:
    pf.append(i)
    temp = temp//i
    

print(*pf)

