"""
Asks the user if they want to partake in my quiz.
If they answer Y/y, they will proceed to my quiz. Otherwise, the program will terminate.
My quiz contains 6 questions and is multiple choice.
For each question, the user will be informed whether their answer was correct or not.
Once the user answers all 6 questions, a corresponding grade will be printed (rounded to 2 decimal places).
"""

print("Welcome to my quiz!")

partake = input("\nDo you want to partake in this quiz - Yes (Y/y) or No (N/n)? ")

if partake.lower() != "y":
    quit()
else:
    print("\nAlright, let's get started!")
    print('\nPlease choose a letter for each response (a, b, c, or d).')
    points = 0

q1 = input("\nThe NFL is comprised of how many teams? "
           "\na. 25 "
           "\nb. 32 "
           "\nc. 28 "
           "\nd. 40 \n")

if q1.lower() == "b":
    print("\nWell done, that is correct.")
    points += 1
else:
    print("\nSorry, that is incorrect.")

q2 = input("\nAt Home Depot, what does ASM stand for? "
           "\na. Assistant Store Manager "
           "\nb. Assistant Specialist Manager "
           "\nc. Annual Stockholders Meeting "
           "\nd. Applications Sales Manager \n")

if q2.lower() == "a":
    print("\nWell done, that is correct.")
    points += 1
else:
    print("\nSorry, that is incorrect.")

q3 = input("\nWhich Calculus course introduces the z variable? "
           "\na. Calculus II "
           "\nb. Calculus IV "
           "\nc. Calculus III "
           "\nd. Calculus I \n")

if q3.lower() == "c":
    print("\nWell done, that is correct.")
    points += 1
else:
    print("\nSorry, that is incorrect.")

q4 = input("\nWhat is the largest country in the world (in terms of land)? "
           "\na. USA "
           "\nb. China "
           "\nc. India "
           "\nd. Russia \n")

if q4.lower() == "d":
    print("\nWell done, that is correct.")
    points += 1
else:
    print("\nSorry, that is incorrect.")

q5 = input("\nAre speed and velocity both vector quantities? "
           "\na. no "
           "\nb. yes \n")

if q5.lower() == "a":
    print("\nWell done, that is correct.")
    points += 1
else:
    print("\nSorry, that is incorrect.")

q6 = input("\nWhat is sin(30) equivalent to? "
           "\na. square root of 3 / 2 "
           "\nb. square root of 2 / 2 "
           "\nc. 0 "
           "\nd. 1/2 \n")

if q6.lower() == "d":
    print("\nWell done, that is correct.")
    points += 1
else:
    print("\nSorry, that is incorrect.")

grade = (points / 6) * 100
print("\nYou got", points, "out of 6 questions correct.")
print("\nYour corresponding grade: " + "%.2f"%grade + "%")

"""
Sample Output:
Welcome to my quiz!

Do you want to partake in this quiz - Yes (Y/y) or No (N/n)? Y

Alright, let's get started!

Please choose a letter for each response (a, b, c, or d).

The NFL is comprised of how many teams? 
a. 25 
b. 32 
c. 28 
d. 40 
a

Sorry, that is incorrect.

At Home Depot, what does ASM stand for? 
a. Assistant Store Manager 
b. Assistant Specialist Manager 
c. Annual Stockholders Meeting 
d. Applications Sales Manager 
a

Well done, that is correct.

Which Calculus course introduces the z variable? 
a. Calculus II 
b. Calculus IV 
c. Calculus III 
d. Calculus I 
c

Well done, that is correct.

What is the largest country in the world (in terms of land)? 
a. USA 
b. China 
c. India 
d. Russia 
d

Well done, that is correct.

Are speed and velocity both vector quantities? 
a. no 
b. yes 
a

Well done, that is correct.

What is sin(30) equivalent to? 
a. square root of 3 / 2 
b. square root of 2 / 2 
c. 0 
d. 1/2 
d

Well done, that is correct.

You got 5 out of 6 questions correct.

Your corresponding grade: 83.33%
"""
