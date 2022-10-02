

def bubbleSort(arr):
    n = len(arr)
 
    for i in range(n):
 
        for j in range(0, n-i-1):

            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]





s = "akhilkumar"

dic = {}                # taking a dictionary for counting

for ch in s:            # iterating over string and adding each character to dictionary with its count
    if ch not in dic:
        dic[ch]=1
    else:
        dic[ch] += 1

for k,v in dic.items():     #now checking if character count is greater than 1.
    if( v > 1 ):
        print(k)            # if greater.. print it.



#done Python














