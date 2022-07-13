import random

print('Hello, welcome to my variation of the number guessing game!')
name = str(input('What is your name? '))
print('Hello,', name + '.')
response = str(input('Would you like to partake in my number guessing game - Yes (Y/y) or No (N/n)? '))

if response.lower() == "y":
    print('Venture a guess for a number (that is an integer) between 0 and 2500.')
    guess = int(input('Enter your guess here: '))
    number = random.randint(0, 2500)
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
    print('\nInvalid value entered!')
