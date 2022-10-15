n=input("Enter the string: ")
u = l = 0
for e in n:
    if(e.isupper()):
        u += 1
    elif(e.islower()):
        l += 1
print("Uppercase: ",u)
print("Lowercase: ",l)
