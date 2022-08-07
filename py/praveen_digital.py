

# import itertools
# st = input()

# ret = itertools.combinations(st, len(st)-2)
# y = [''.join(i) for i in ret]
# ty = set(y)
# print(len(ty))

def findCombinations(A, k, subarrays, out=(), i=0):
	if len(A) == 0 or k > len(A):
		return
	if k == 0:
		subarrays.add(out)
		return
	for j in range(i, len(A)):
		findCombinations(A, k - 1, subarrays, out + (A[j],), j + 1)


A = input()
ls=[]
for i in A:
    ls.append(i)
k = len(A)-2

subarrays = set()

# process elements from left to right
findCombinations(ls, k, subarrays)
print(len(subarrays))
