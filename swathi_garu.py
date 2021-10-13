
from itertools import combinations


n = int(input())
k = int(input())
cnt=0
arr = [int(x) for x in input().split(" ")]
# print(arr)
# print("\n")

# size of combination is set to 3

for i in range(1, n+1):
    a = combinations(arr, i)    
    y = [(x) for x in a]
    # print(y)
    # print()
    for j in y:
        v = sum(j)
        # print(v)
        if k==v:
            # print(v)
            cnt+=1
    # print()
  
print(cnt)
