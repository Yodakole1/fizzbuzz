#Fizzbuzz in python

print("Enter a number: ")
num = int(input())
resenje = []

def metod(num):
    for i in range(1, num):
        if(i%3==0 and i%5==0):
            resenje.append("FizzBuzz")
        elif(i%3==0):
            resenje.append("Fizz")
        elif(i%5==0):
            resenje.append("Buzz")
        else:
            resenje.append(i)

    return resenje

resenje = metod(num)

print(resenje)        
