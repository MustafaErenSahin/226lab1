name = input("What is your name? \n")
print("Hello " + name)

ID = input("What is your Student ID? \n")
print("Your ID is: " + ID)
number1 = int(input("Enter the first number \n"))
number2 = int(input("Enter the second number \n"))

summ = (number1) + (number2)
print("The sum is ", summ)

diff = (number1) - (number2)
print("The diff is ", diff)

prod = (number1) * (number2)
print("The prod is ", prod)

studentName = input("Enter Name \n")
labGrade = int(input("Enter lab grade \n"))
midTermGrade = int(input("Enter midterm grade \n"))
finalGrade = int(input("Enter final grade \n"))

lastScore = labGrade * 25/100 + midTermGrade * 35/100 + finalGrade * 40/100
print("Name: ", studentName + "\nLab: ", labGrade, "\nMidterm: ", midTermGrade, "\nFinal: ", finalGrade, "\nLast Score: ", lastScore)

print("\n*", "\n**", "\n***", "\n**", "\n*")
