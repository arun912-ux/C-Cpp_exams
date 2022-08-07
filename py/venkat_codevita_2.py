
def isPrime(n):

    if n<2:
        return False

    for i in range(2, n//2 + 2):
        if (n%i==0):
            return False

    return True            

def main():
    inp = input().split(" ")
    inp = list(map(int, inp))
    r = min(inp)
    inp.remove(r)
    pro = sum(inp)*max(inp)*10

    for i in range(max(inp), pro):
        if isPrime(i):
            flag = True
            for f in inp:
                flag = (i%f == r) and flag

            if flag==True:
                print(i) 
                return

    print("None")


main()
