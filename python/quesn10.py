n=input("Enter the string: ")
d = l = 0
for e in n:
    if(e.isupper() or e.islower()):
        l += 1
    elif(e.isdigit()):
        d += 1
print("Letters: ",l)
print("Digits: ",d)
