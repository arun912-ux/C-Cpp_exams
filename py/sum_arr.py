
n=int(input())
arr=[]

for i in range(n):
    arr.append(int(input()))


try:
    x = int(input())
    print("Wrong input")

except:
    
    for i in range(n-1):
        for j in range(i+1,n):
            if(arr[i]==arr[j]):
                arr[j]+=1

    print(sum(arr))

