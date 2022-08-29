
st1 = input()
st2 = input()

if(st1=="-"):
    print(st2)

else:
    dic2= {}

    for ch in st2:
        if ch not in dic2:
            dic2[ch] = 1
        else:
            dic2[ch] += 1

    for ch in st1:
        if(ch in dic2):
            dic2[ch] -= 1

    for k,v in dic2.items():
        if(v == 1 ):
            print(k)
            break





# # Python3 program to find extra character
# # in one string
# def findExtraCharacter(strA, strB):

#     if(strA == "-"):
#         return strB
# 	# store string values in map
	
#     m1 = {}

# 	# store second string in map
# 	# with frequency
#     for i in strB:
#         if i in m1:
# 			m1[i] += 1
#         else:
# 			m1[i] = 1

# 	# store first string in map
# 	# with frequency
# 	for i in strA:
# 		m1[i] -= 1

# 	for h1 in m1:

# 		# if the frequency is 1 then this
# 		# character is which is added extra
# 		if m1[h1] == 1:
# 			return h1

# # Driver Code
# if __name__ == "__main__":

# 	# given string
# 	strA = input()
# 	strB = input()

# 	# find Extra Character
# 	print(findExtraCharacter(strA, strB))

# # This code is contributed by
# # sanjeev2552
