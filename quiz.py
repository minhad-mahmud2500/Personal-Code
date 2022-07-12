print("Welcome to my quiz!")

partake = input("\nDo you want to partake in this quiz? (yes/no) ")

if partake.lower() != "yes":
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
print("\nTherefore, you got a " + "%.2f"%grade + "% on this quiz.")
