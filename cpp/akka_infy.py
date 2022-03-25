
n=int(input())
k=int(input())
ar=[]
d2=[]
d3=[]
for i in range(n):
    x=int(input())
    ar.append(x)
    if x%2==0:
        d2.append(x)
    if x%3==0:
        d3.append(x)
    
d3.sort(reverse=True)
d2.sort()
print(*d2)
print(*d3)

ne=[]

for i in range(k):
    if d2[i] not in ne:
        ne.append(d2[i])
    if d3[i] not in ne:
        ne.append(d3[i])

nm=d2.copy()
nm.extend(d3)

print("set:", *set(nm))
    
print(*ne)
      
print(sum(ne))






