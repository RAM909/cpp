a =[]
pro = 1
for i in range (1,4):
    b = int(input("num:"))
    a.append(b)
    print(a)
for j in range (2,-1,-1):
   
    print(a[j])
    if (a[j]==7):
        break
    else:
        k = a[j]
        pro = pro*k
        
        
print("product=",pro)     
          