
def play_the_game(arr):
    n = len(arr)
    cnt=0

    while (arr.count(0)!=n):
        for i in range(n):
            if(arr[i]%2 == 1):
                arr[i] -= 1
                cnt+=1

        for i in range(n):
            arr[i] = arr[i]//2
            cnt += 1/n

    return cnt-1 



arr = input().split(" ")
arr = list(map(int, arr))
n = len(arr)
sum = round(play_the_game(arr), 0)
print(int(sum))


