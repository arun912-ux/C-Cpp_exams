
def isPrime(n):

    # if n<=2:
    #     return 1

    for i in range(2, n//2 + 1):

        if(n%i == 0):
            return i

    
    return 1
    



def longestEvenWord(sentence):

    st = sentence.split(" ")
    dic={}
    mx=-999
    rt = ""
    for s in st:
        x = len(s)
        if x%2==0:
            dic[s]=x
            mx = max(mx, x)

    for (k,v) in dic.items():
        if v==mx:
            return k





# n = int(input())
# print(isPrime(n))

print(longestEvenWord(input()))
