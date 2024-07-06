string = input("enterstring:").upper()
print(string[2])
count = {}
result =""
for letter in string:
    if letter in count:
        count[letter]+=1
    else:
        count[letter]=1
        
for l,c in count.items():
    print(l)
    print(c)
#    result += str(counting)+letter
    
# print(result)    