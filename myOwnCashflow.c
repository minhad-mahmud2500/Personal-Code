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
