#lex_auth_012693813706604544157

def find_max(num1, num2):
    max_num=-1
    tense = 0
    unit = 0
    while(num1<= num2):
        if(num1>9 and num1<100):
            print(num1)
            
            tense = num1//10
            print(tense)
            unit = num1%10
            print(unit)
            if((unit+tense) % 3 ==0 and num1% 5 ==0):
                max_num == num1
        num1 +=1
    
    return max_num        

#Provide different values for num1 and num2 and test your program.
max_num=find_max(10,15)
print(max_num)