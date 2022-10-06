# Python Program to find Factorial of a Number

number = int(input(" Please enter any Number to find factorial : "))
fact = 1

for i in range(1, number + 1):
    fact = fact * i
print("The factorial of %d  = %d" %(number, fact))
