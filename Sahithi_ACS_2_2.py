#Question 3: Python

str1 = input()
str2 = input()

resstr = ""

for i in range(0, len(str1)):
    if str1[i] not in str2:
        resstr += str1[i]
    if str2[i] not in str1:
        resstr += str2[i]


print(resstr)

