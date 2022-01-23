
def closetNumbers(numbers):
    ar = numbers
    ar.sort()
    mn=999
    for i in range(len(ar)):

        for j in range(i+1, len(ar)):
            x = abs(ar[i]-ar[j])
            mn = min(mn, x)
    
    # print(mn)
    
    for i in range(len(ar)):
            for j in range(i+1, len(ar)):
                x = abs(ar[i]-ar[j])
                if(x == mn):
                    print(ar[i], ar[j])



def minDiff(arr):
    arr.sort()
    sm=0
    for i in range(0, len(arr)-1):
        sm += abs(arr[i]-arr[i+1])
    
    # print(sm)
    return sm



n= int(input())
ar = [int(x) for x in input().split()]
# closetNumbers(ar)
minDiff(ar)





