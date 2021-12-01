
st = input()
l = len(st)
s = st+st[::-1][1:]
print(s)
for i in range(1, l+1):
    print(s[:l-i], end="")
    print("  "*(i-1), end="")
    print(" " + s[l+i-1::])

