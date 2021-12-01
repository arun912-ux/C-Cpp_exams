

def charsWithDigitBefore(a):
    count = 0
    # print(a)
    ret = ""
    for i in range(0, len(a)-1):
        if a[i].isnumeric() and a[i+1].isalpha():
            # print(a[i+1], end=" ")
            ret = ret + str(a[i+1]) + " "
            count+=1
    print(ret.rstrip())

    return count

def main():
    s = input()
    print(charsWithDigitBefore(s))

main()

