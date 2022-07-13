/*
Asks the user if they would like to use my cash flow generator.
If the user answers Y/y, they will proceed to use my cash flow generator. Otherwise, the program will terminate.
Asks the user over what time frame they would like to track their cash flow.
Asks for pertinent information such as expenses across various categories and income (accounts for multiple sources if applicable).
Based on the user's input of expenses and income, a net cash flow will be calculated and a corresponding message will be printed.
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 64

int main()
{
    char name[SIZE];
    char category;
    char timeframe[SIZE];
    float bills;
    float eatingOut;
    float gas;
    float goingOut;
    float groceries;
    float miscellaneous;
    float msi; // main source of income
    float otherIncome;
    double expenses;
    double income;
    double netFlow;
    puts("Welcome to my Cash Flow Generator!");
    printf("\nWould you like to use my cash flow generator? Yes(Y/y) or No(N/n)? ");
    scanf("%c", &category);

    if (category == 'Y' || category == 'y')
    {
        printf("\nPlease enter your name to get started: ");
        scanf("%s", &name);
        printf("\nHello, %s.\n", name);
        printf("\nOver what time frame would you like your expenses to be calculated? ");
        fscanf(stdin, " "); // SKIPS WHITESPACE
        fgets(timeframe, SIZE, stdin);
        printf("\nExpenses for: %s", timeframe);
        puts("\n**Disclaimer** Please enter numbers (integers/floating-point values) only.");

        printf("\nHow much did you pay in bills? (Power/phone/water/Internet/insurance/etc): ");
        scanf("%f", &bills);
        printf("\nHow much did you spend on eating out? ");
        scanf("%f", &eatingOut);
        printf("\nHow much did you spend on gas? ");
        scanf("%f", &gas);
        printf("\nHow much did you spend on going out? ");
        scanf("%f", &goingOut);
        printf("\nHow much did you spend on groceries? ");
        scanf("%f", &groceries);
        printf("\nHow much did you spend on miscellaneous things? ");
        scanf("%f", &miscellaneous);
        expenses = bills + eatingOut + gas + goingOut + groceries + miscellaneous;
        printf("\nTotal expenses: %.2f\n", expenses);

        printf("\nIncome over: %s", timeframe);
        printf("\nHow much did you make from your main source of income? ");
        scanf("%f", &msi);
        printf("\nHow much did you make from other sources of income? ");
        scanf("%f", &otherIncome);
        income = msi + otherIncome;
        printf("\nTotal income: %.2f\n", income);

        netFlow = income - expenses;

            if (netFlow < 0)
                printf("\nYour net cash flow is $%.2f. You need to do a better job with regards to saving and spending money. You are in the red!\n", netFlow);
            else if (netFlow > 0)
                printf("\nYour net cash flow is $%.2f. You are in the green!\n", netFlow);
            else
                puts("\nYou broke even - you are on thin ice, proceed carefully.");
    }

    else if (category == 'N' || category == 'n')
        printf("Sorry to see you go! :(\n");


    else
        puts("Invalid option selected - please choose an option from the list.");


    return 0;
}

/*
Sample Output:
Welcome to my Cash Flow Generator!

Would you like to use my cash flow generator? Yes(Y/y) or No(N/n)? Y

Please enter your name to get started: Waffy

Hello, Waffy.

Over what time frame would you like your expenses to be calculated? 1 week

Expenses for: 1 week

**Disclaimer** Please enter numbers (integers/floating-point values) only.

How much did you pay in bills? (Power/phone/water/Internet/insurance/etc): 578.84

How much did you spend on eating out? 140.00

How much did you spend on gas? 32.66

How much did you spend on going out? 0

How much did you spend on groceries? 125.00

How much did you spend on miscellaneous things? 100

Total expenses: 976.50

Income over: 1 week

How much did you make from your main source of income? 700

How much did you make from other sources of income? 100

Total income: 800.00

Your net cash flow is $-176.50. You need to do a better job with regards to saving and spending money. You are in the red!
*/
