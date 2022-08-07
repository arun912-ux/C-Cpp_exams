

s = input()

x = 0

for i in range(0, len(s), 2):
    x = s[i]
    n = int(s[i+1])
    print(x*n, end='')


# x=0
# for i in list(s):
#     # print(i)
#     if(i.isdigit()):
#         # print(i)
#         x = x*10+int(i)
#     else:
#         print(i*int(x))
#         x=0
#     if(i.isalpha()):



n = int(input())
ar = []

for i in range(n):
    ar.append(int(input()))


print(n//2)


