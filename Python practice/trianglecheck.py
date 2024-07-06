num1 = int(input("enter first number:"))
num2 = int(input("enter second number:"))
num3 = int(input("enter third number:"))


def findlargest(num1,num2,num3):
    a=[num1,num2,num3]
   

    a.sort(reverse=True)

    concatenated_number = "".join(str(num) for num in a)
    return concatenated_number


print(findlargest(num1,num2,num3))