#lex_auth_012693782475948032141

def calculate_bill_amount(food_type,quantity_ordered,distance_in_kms):
    bill_amount=0
    dcharge=0
    distance =0
    
    if(distance_in_kms<=3):
        dcharge =0
    elif (3<distance_in_kms<=6):
        distance=distance_in_kms-3
        dcharge = distance*3
    elif(distance_in_kms>6):
        distance=distance_in_kms-6
        dcharge = (distance*6)+9
        
    if(food_type!="V" or food_type!="N"or quantity_ordered<1 or distance_in_kms<0):
        bill_amount = -1
    elif(food_type=="V"):
        bill_amount = (quantity_ordered*120)+dcharge
    elif(food_type=="N"):
        bill_amount = (quantity_ordered*150)+dcharge
   
        
    return bill_amount

#Provide different values for food_type,quantity_ordered,distance_in_kms and test your program
bill_amount=calculate_bill_amount("N",0,8)
print(bill_amount)