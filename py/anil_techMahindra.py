
def countPalindromes(cls, input1, input2):
    st = input1
    n = input2

    cnt = 0

    st = st.split(" ")

    for i in st:
        s1 = i[::-1]
        if i == s1:
            cnt+=1

    return cnt



def main():
    st = input()
    n = int(input())
    print(countPalindromes(0, st, n))



main()
