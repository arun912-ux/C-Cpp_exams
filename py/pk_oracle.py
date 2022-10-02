
n = int(input())

ar = []

ar = [int(x) for x in input().split()]

psum = []

even=[]

for i in ar:
    even.append(abs(i))

even.sort()
# print(even)

nar=[]

for i in even:
    for j in ar:
        if(abs(j) == i):
            nar.append(j)

# print(nar)

for i in range(0, n):
    su = 0
    for j in range(0, i+1):
        # print(nar[j])
        su += nar[j]
    psum.append(su)

# print(psum)
cnt=0
for i in psum:
    if(i>0):
        cnt+=1



print(cnt)
