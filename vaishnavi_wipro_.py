
n = int(input())
cook = {'A':9999, 'B':9999, 'C':9999}

# inlist = {}

for i in range(0,n):
    arr = input().split(" ")
    # print(arr)
    ch = arr[0]
    nu = int(arr[1])
    # inlist[ch]
    cook[ch] = min(cook[ch], nu)


# print(cook)

sum1 = cook['A']+cook['B']
sum2 = cook['C']

fn = min(sum1, sum2)
print(fn)

