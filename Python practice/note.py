note = int(input("enter amount:"))
a = [500,200,100,50,10,5,2,1]
for i in range(0,8):
    n = note//a[i]
    if n:
        print(a[i],"=",n)
        note = note%a[i]

    



