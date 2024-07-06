str = input("enter string:").upper()
l = len (str)
sum =0
for c in str:
    print (c)
    a=((ord(c)-64) * 26**(l-1))
    l= l-1
    sum += a
print (str,"=",sum) 