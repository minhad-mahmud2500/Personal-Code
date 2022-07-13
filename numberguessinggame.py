"""
Asks the user for their name and asks if they want to partake in my number guessing game.
If the user answers Y/y for yes, they will proceed to my number guessing game.
The user will then be asked to enter an integer ranging from 0 to 2500 (both inclusive).
The user will keep guessing until they guess the correct number.
If the guess is incorrect, a message will let them know if their guess was too high or too low.
Once the user guesses correctly, the script will print out how many tries it took the user to guess the correct number.
If the user answers anything other than Y/y, the program will terminate.
"""
import random

print('Hello, welcome to my variation of the number guessing game!')
name = str(input('What is your name? '))
print('Hello,', name + '.')
response = str(input('Would you like to partake in my number guessing game - Yes (Y/y) or No (N/n)? '))

if response.lower() == "y":
    print('Venture a guess for a number (that is an integer) that ranges from 0 to 2500 (both inclusive).')
    guess = int(input('Enter your guess here: '))
    number = random.randint(0, 2501)
    guesses = 1

    while number != guess:
        if guess < number:
            guesses += 1
            print('Too low! Try again!')
            guess = int(input('Enter another guess: '))

        elif guess > number:
            guesses += 1
            print('Too high! Try again!')
            guess = int(input('Enter another guess: '))

        elif guess == number:
            break

        else:
            print('Invalid value - please enter a number only.')

    print('You guessed the correct number in', guesses, 'guesses.')

elif response.lower() == "n":
    quit()

else:
    print('Invalid value entered!')
    quit()

"""
Sample Output:
Hello, welcome to my variation of the number guessing game!
What is your name? Waffy
Hello, Waffy.
Would you like to partake in my number guessing game - Yes (Y/y) or No (N/n)? y
Venture a guess for a number (that is an integer) that ranges from 0 to 2500 (both inclusive).
Enter your guess here: 1250
Too low! Try again!
Enter another guess: 1875
Too high! Try again!
Enter another guess: 1563
Too low! Try again!
Enter another guess: 1719
Too high! Try again!
Enter another guess: 1641
Too low! Try again!
Enter another guess: 1680
Too low! Try again!
Enter another guess: 1700
Too high! Try again!
Enter another guess: 1690
Too low! Try again!
Enter another guess: 1695
Too high! Try again!
Enter another guess: 1693
Too high! Try again!
Enter another guess: 1692
Too high! Try again!
Enter another guess: 1691
You guessed the correct number in 12 guesses.
"""
