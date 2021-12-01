N = int(input())
arr = []
total=0

def numOfWays():
    count=0

    for i in range(0, len(arr)-1):
        for j in range(i+1, len(arr)):
            if(total== (arr[i]+ arr[j])):
                # print(arr[i], arr[j])
                count+=1



    return count

def main():
    global total
    S = input().split()
    for i in range(N):
        arr.append(int(S[i]))
    total  = int(input())
    print(numOfWays())

main()

