print("Welcome to my quiz!")

partake = input("Do you want to partake in this quiz? (yes/no) ")

if partake.lower() != "yes":
    quit()
else:
    print("Alright, let's get started!")
    print('Please choose a letter for each response (a, b, c, or d).')
    points = 0

q1 = input("The NFL is comprised of how many teams? "
           "\na. 25 "
           "\nb. 32 "
           "\nc. 28 "
           "\nd. 40 \n")
if q1.lower() == "b":
    print("Well done, that is correct.")
    points += 1
else:
    print("Sorry, that is incorrect.")

q2 = input("At Home Depot, what does ASM stand for? "
           "\na. Assistant Store Manager "
           "\nb. Assistant Specialist Manager "
           "\nc. Annual Stockholders Meeting "
           "\nd. Applications Sales Manager \n")
if q2.lower() == "a":
    print("Well done, that is correct.")
    points += 1
else:
    print("Sorry, that is incorrect.")

q3 = input("Which Calculus course introduces the z variable? "
           "\na. Calculus II "
           "\nb. Calculus IV "
           "\nc. Calculus III "
           "\nd. Calculus I \n")
if q3.lower() == "c":
    print("Well done, that is correct.")
    points += 1
else:
    print("Sorry, that is incorrect.")

q4 = input("What is the largest country in the world (in terms of land)? "
           "\na. USA "
           "\nb. China "
           "\nc. India "
           "\nd. Russia \n")
if q4.lower() == "d":
    print("Well done, that is correct.")
    points += 1
else:
    print("Sorry, that is incorrect.")

q5 = input("Are speed and velocity both vector quantities? "
           "\na. no "
           "\nb. yes \n")
if q5.lower() == "a":
    print("Well done, that is correct.")
    points += 1
else:
    print("Sorry, that is incorrect.")

q6 = input("What is sin(30) equivalent to? "
           "\na. square root of 3 / 2 "
           "\nb. square root of 2 / 2 "
           "\nc. 0 "
           "\nd. 1/2 \n")
if q6.lower() == "d":
    print("Well done, that is correct.")
    points += 1
else:
    print("Sorry, that is incorrect.")

print("You got", str(points), "out of 6 questions correct.")
print("Therefore, you got a " + str((points/6)*100) + "% on this quiz.")
