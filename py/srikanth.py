
def TimeInSeconds(hour, min, sec):

    return hour*3600 + min*60 + sec

def SumOfLeaders(arr):

    x = len(arr)
    
    if x==0:
        return -1
    
    sm=0

    for i in range(0, x-2):
        if arr[i] > arr[i+1]:
            sm+=arr[i]
    
    return sm+arr[x-1]


# hr = int(input())
# mn = int(input())
# sc = int(input())
# print(TimeInSeconds(hr, mn, sc))

ar = [int(x) for x in input().split()]

print(SumOfLeaders(ar))