string = input("enter string:").split(" ")
final = []
for index,word in enumerate(string):
    if (index+1) % 2 !=0:
        final.append(word[::-1])
    else:
        v =['a','e','i','o','u']
        t =[]
        vowel=[]
        for letter in word:
            if letter not in word:
                t.append(letter)
            else:
                vowel.append(letter)
            t.append(vowel)   
            final.append(t) 
            print(final)
        
        