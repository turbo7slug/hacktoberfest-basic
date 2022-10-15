n=input("Enter the string: ")
s=''
for i in n:
    if(i.isupper()):
        s += i.lower()
    elif(i.islower()):
        s += i.upper()
    else:
        s += i
print(s)
