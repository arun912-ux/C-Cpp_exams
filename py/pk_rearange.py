
st = input()
star = st.split()

# print(star)
stlen = len(star)
nestar ={}

for w in star:
    num = 0
    for ch in w:
        if(ch.isnumeric()):
            # print(ch)
            num = int(ch)
    
    nw = w.replace(str(num), "")
    nestar[num] = nw

res = ""
for w in range(1, stlen+1):
    res += nestar[w] + " "

print(res.strip())


