#include <stdio.h>

int main()
{
    char category;
    int year;
    int filingStatus;
    float grossIncome;
    float taxAmount;
    float netIncome;

    puts("Welcome to my Federal Tax Bracket Determiner!\n");
    printf("Would you like to use my Federal Tax Bracket Determiner, tax amount owed and net income calculator? \nYes(Y/y) or No(N/n)? ");
    scanf("%c", &category);

    if (category == 'Y' || category == 'y')
    {
        puts("\nThank you for proceeding with using my Federal Tax Bracket Determiner, tax amount owed and net income calculator!");
        printf("\nWhat year are you filing your taxes for - 2021 or 2022? ");
        scanf("%d", &year);

        if (year == 2021)
        {
            printf("\nWhat is your filing status? \nSingle Filer(1)? Married, filing jointly(2)? Married, filing separately(3)? Head of household(4)? \nPlease type 1, 2, 3, or 4. ");
            scanf("%d", &filingStatus);

            if (filingStatus == 1)
            {
                printf("\nWhat was your gross income for 2020? Please enter a non-negative number only (integer/floating-point value, no commas). ");
                scanf("%f", &grossIncome);

                if (grossIncome >= 0 && grossIncome <= 9950)
                {
                    puts("\nYou will be taxed 10% on your income.\n");
                    taxAmount = grossIncome * 0.1;
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 9950 && grossIncome <= 40525)
                {
                    puts("\nYou will be taxed $995 plus 12% of the amount over $9,950.\n");
                    grossIncome -= 9950;
                    taxAmount = 995 + (grossIncome * 0.12);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 9950;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 40525 && grossIncome <= 86375)
                {
                    puts("\nYou will be taxed $4,664 plus 22% of the amount over $40,525.\n");
                    grossIncome -= 40525;
                    taxAmount = 4664 + (grossIncome * 0.22);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 40525;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 86375 && grossIncome <= 164925)
                {
                    puts("\nYou will be taxed $14,751 plus 24% of the amount over $86,375.\n");
                    grossIncome -= 86375;
                    taxAmount = 14751 + (grossIncome * 0.24);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 86375;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 164925 && grossIncome <= 209425)
                {
                    puts("\nYou will be taxed $33,603 plus 32% of the amount over $164,925.\n");
                    grossIncome -= 164925;
                    taxAmount = 33603 + (grossIncome * 0.32);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 164925;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 209425 && grossIncome <= 523600)
                {
                    puts("\nYou will be taxed $47,843 plus 35% of the amount over $209,425.\n");
                    grossIncome -= 209425;
                    taxAmount = 47843 + (grossIncome * 0.35);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 209425;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 523600)
                {
                    puts("\nYou will be taxed $157,804.25 plus 37% of the amount over $523,600.\n");
                    grossIncome -= 523600;
                    taxAmount = 157804.25 + (grossIncome * 0.37);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 523600;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else
                    puts("\nInvalid value entered!");
        }


            else if (filingStatus == 2)
            {
                printf("\nWhat was your gross income for 2020? Please enter a non-negative number only (integer/floating-point value, no commas). ");
                scanf("%f", &grossIncome);

                if (grossIncome >= 0 && grossIncome <= 19900)
                {
                    puts("\nYou will be taxed 10% on your income.\n");
                    taxAmount = grossIncome * 0.1;
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 19900 && grossIncome <= 81050)
                {
                    puts("\nYou will be taxed $1,990 plus 12% of the amount over $19,900.\n");
                    grossIncome -= 19900;
                    taxAmount = 1990 + (grossIncome * 0.12);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 19900;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 81050 && grossIncome <= 172750)
                {
                    puts("\nYou will be taxed $9,328 plus 22% of the amount over $81,050.\n");
                    grossIncome -= 81050;
                    taxAmount = 9328 + (grossIncome * 0.22);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 81050;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 172750 && grossIncome <= 329850)
                {
                    puts("\nYou will be taxed $29,502 plus 24% of the amount over $172,750.\n");
                    grossIncome -= 172750;
                    taxAmount = 29502 + (grossIncome * 0.24);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 172750;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 329850 && grossIncome <= 418850)
                {
                    puts("\nYou will be taxed $67,206 plus 32% of the amount over $329,850.\n");
                    grossIncome -= 329850;
                    taxAmount = 67206 + (grossIncome * 0.32);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 329850;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 418850 && grossIncome <= 628300)
                {
                    puts("\nYou will be taxed $95,686 plus 35% of the amount over $418,850.\n");
                    grossIncome -= 418850;
                    taxAmount = 95686 + (grossIncome * 0.35);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 418850;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 628300)
                {
                    puts("\nYou will be taxed $168,993.50 plus 37% of the amount over $628,300.\n");
                    grossIncome -= 628300;
                    taxAmount = 168993.50 + (grossIncome * 0.37);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 628300;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else
                    puts("\nInvalid value entered!");
            }

            else if (filingStatus == 3)
            {
                printf("\nWhat was your gross income for 2020? Please enter a non-negative number only (integer/floating-point value, no commas). ");
                scanf("%f", &grossIncome);

                if (grossIncome >= 0 && grossIncome <= 9950)
                {
                    puts("\nYou will be taxed 10% on your income.\n");
                    taxAmount = grossIncome * 0.1;
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 9950 && grossIncome <= 40525)
                {
                    puts("\nYou will be taxed $995 plus 12% of the amount over $9,950.\n");
                    grossIncome -= 9950;
                    taxAmount = 995 + (grossIncome * 0.12);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 9950;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 40525 && grossIncome <= 86375)
                {
                    puts("\nYou will be taxed $4,664 plus 22% of the amount over $40,525.\n");
                    grossIncome -= 40525;
                    taxAmount = 4664 + (grossIncome * 0.22);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 40525;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 86375 && grossIncome <= 164925)
                {
                    puts("\nYou will be taxed $14,751 plus 24% of the amount over $86,375.\n");
                    grossIncome -= 86375;
                    taxAmount = 14751 + (grossIncome * 0.24);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 86375;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 164925 && grossIncome <= 209425)
                {
                    puts("\nYou will be taxed $33,603 plus 32% of the amount over $164,925.\n");
                    grossIncome -= 164925;
                    taxAmount = 33603 + (grossIncome * 0.32);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 164925;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 209425 && grossIncome <= 314150)
                {
                    puts("\nYou will be taxed $47,843 plus 35% of the amount over $209,425.\n");
                    grossIncome -= 209425;
                    taxAmount = 47843 + (grossIncome * 0.35);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 209425;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 314150)
                {
                    puts("\nYou will be taxed $84,496.75 plus 37% of the amount over $314,150.\n");
                    grossIncome -= 314150;
                    taxAmount = 84496.75 + (grossIncome * 0.37);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 314150;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else
                    puts("\nInvalid value entered!");
            }

            else if (filingStatus == 4)
            {
                printf("\nWhat was your gross income for 2020? Please enter a non-negative number only (integer/floating-point value, no commas). ");
                scanf("%f", &grossIncome);

                if (grossIncome >= 0 && grossIncome <= 14200)
                {
                    puts("\nYou will be taxed 10% on your income.\n");
                    taxAmount = grossIncome * 0.1;
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 14200 && grossIncome <= 54200)
                {
                    puts("\nYou will be taxed $1,420 plus 12% of the amount over $14,200.\n");
                    grossIncome -= 14200;
                    taxAmount = 1420 + (grossIncome * 0.12);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 14200;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 54200 && grossIncome <= 86350)
                {
                    puts("\nYou will be taxed $6,220 plus 22% of the amount over $54,200.\n");
                    grossIncome -= 54200;
                    taxAmount = 6220 + (grossIncome * 0.22);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 54200;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 86350 && grossIncome <= 164900)
                {
                    puts("\nYou will be taxed $13,293 plus 24% of the amount over $86,350.\n");
                    grossIncome -= 86350;
                    taxAmount = 13293 + (grossIncome * 0.24);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 86350;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 164900 && grossIncome <= 209400)
                {
                    puts("\nYou will be taxed $32,145 plus 32% of the amount over $164,900.\n");
                    grossIncome -= 164900;
                    taxAmount = 32145 + (grossIncome * 0.32);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 164900;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 209400 && grossIncome <= 523600)
                {
                    puts("\nYou will be taxed $46,385 plus 35% of the amount over $209,400.\n");
                    grossIncome -= 209400;
                    taxAmount = 46385 + (grossIncome * 0.35);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 209400;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 523600)
                {
                    puts("\nYou will be taxed $156,355 plus 37% of the amount over $523,600.\n");
                    grossIncome -= 523600;
                    taxAmount = 156355 + (grossIncome * 0.37);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 523600;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else
                    puts("\nInvalid value entered!");
            }

            else
                puts("\nInvalid value entered!");

        }

        else if (year == 2022)
        {
            printf("\nWhat is your filing status? \nSingle Filer(1)? Married, filing jointly(2)? Married, filing separately(3)? Head of household(4)? \nPlease type 1, 2, 3, or 4. ");
            scanf("%d", &filingStatus);

            if (filingStatus == 1)
            {
                printf("\nWhat was your gross income for 2021? Please only enter a non-negative number (integers/floating-point values, no commas). ");
                scanf("%f", &grossIncome);

                if (grossIncome >= 0 && grossIncome <= 10275)
                {
                    puts("\nYou will be taxed 10% on your income.\n");
                    taxAmount = grossIncome * 0.1;
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 10275 && grossIncome <= 41775)
                {
                    puts("\nYou will be taxed $1,027.50 plus 12% of the amount over $10,275.\n");
                    grossIncome -= 10275;
                    taxAmount = 1027.5 + (grossIncome * 0.12);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 10275;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 41775 && grossIncome <= 89075)
                {
                    puts("\nYou will be taxed $4,807.50 plus 22% of the amount over $41,775.\n");
                    grossIncome -= 41775;
                    taxAmount = 4807.5 + (grossIncome * 0.22);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 41775;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 89075 && grossIncome <= 170050)
                {
                    puts("\nYou will be taxed $15,213.50 plus 24% of the amount over $89,075.\n");
                    grossIncome -= 89075;
                    taxAmount = 15213.5 + (grossIncome * 0.24);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 89075;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 170050 && grossIncome <= 215950)
                {
                    puts("\nYou will be taxed $34,647.50 plus 32% of the amount over $170,050.\n");
                    grossIncome -= 170050;
                    taxAmount = 34647.5 + (grossIncome * 0.32);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 170050;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 215950 && grossIncome <= 539900)
                {
                    puts("\nYou will be taxed $49,335.50 plus 35% of the amount over $215,950.\n");
                    grossIncome -= 215950;
                    taxAmount = 49335.5 + (grossIncome * 0.35);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 215950;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 539900)
                {
                    puts("\nYou will be taxed $162,718 plus 37% of the amount over $539,900.\n");
                    grossIncome -= 539900;
                    taxAmount = 162718 + (grossIncome * 0.37);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 539900;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income is $%.2f\n", netIncome);
                }

                else
                    puts("\nInvalid value entered!");
            }

            else if (filingStatus == 2)
            {
                printf("\nWhat was your gross income for 2021? Please only enter a non-negative number (integer/floating-point value, no commas). ");
                scanf("%f", &grossIncome);

                if (grossIncome >= 0 && grossIncome <= 20550)
                {
                    puts("\nYou will be taxed 10% on your income.\n");
                    taxAmount = grossIncome * 0.1;
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 20550 && grossIncome <= 83550)
                {
                    puts("\nYou will be taxed $2,055 plus 12% of the amount over $20,550.\n");
                    grossIncome -= 20550;
                    taxAmount = 2055 + (grossIncome * 0.12);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 20550;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income is $%.2f\n", netIncome);
                }

                else if (grossIncome >= 83550 && grossIncome <= 178150)
                {
                    puts("\nYou will be taxed $9,615 plus 22% of the amount over $83,550.\n");
                    grossIncome -= 83550;
                    taxAmount = 9615 + (grossIncome * 0.22);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 83550;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 178150 && grossIncome <= 340100)
                {
                    puts("\nYou will be taxed $30,427 plus 24% of the amount over $178,150.\n");
                    grossIncome -= 178150;
                    taxAmount = 30427 + (grossIncome * 0.24);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 178150;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 340100 && grossIncome <= 431900)
                {
                    puts("\nYou will be taxed $69,295 plus 32% of the amount over $340,100.\n");
                    grossIncome -= 340100;
                    taxAmount = 69295 + (grossIncome * 0.32);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 340100;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 431900 && grossIncome <= 647850)
                {
                    puts("\nYou will be taxed $98,671 plus 35% of the amount over $431,900.\n");
                    grossIncome -= 431900;
                    taxAmount = 98671 + (grossIncome * 0.35);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 431900;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 647850)
                {
                    puts("\nYou will be taxed $174,253.50 plus 37% of the amount over $647,850.\n");
                    grossIncome -= 647850;
                    taxAmount = 174253.5 + (grossIncome * 0.37);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 647850;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else
                    puts("\nInvalid value entered!");
            }

            else if (filingStatus == 3)
            {
                printf("\nWhat was your gross income for 2021? Please only enter a non-negative number (integer/floating-point value, no commas). ");
                scanf("%f", &grossIncome);

                if (grossIncome >= 0 && grossIncome <= 10275)
                {
                    puts("\nYou will be taxed 10% on your income.\n");
                    taxAmount = grossIncome * 0.1;
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 10275 && grossIncome <= 41775)
                {
                    puts("\nYou will be taxed $1,027.50 plus 12% of the amount over $10,275.\n");
                    grossIncome -= 10275;
                    taxAmount = 1027.5 + (grossIncome * 0.12);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 10275;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 41775 && grossIncome <= 89075)
                {
                    puts("\nYou will be taxed $4,807.50 plus 22% of the amount over $41,775.\n");
                    grossIncome -= 41775;
                    taxAmount = 4807.5 + (grossIncome * 0.22);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 41775;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 89075 && grossIncome <= 170050)
                {
                    puts("\nYou will be taxed $15,213.50 plus 24% of the amount over $89,075.\n");
                    grossIncome -= 89075;
                    taxAmount = 15213.5 + (grossIncome * 0.24);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 89075;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 170050 && grossIncome <= 215950)
                {
                    puts("\nYou will be taxed $34,647.50 plus 32% of the amount over $170,050.\n");
                    grossIncome -= 170050;
                    taxAmount = 34647.5 + (grossIncome * 0.32);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 170050;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 215950 && grossIncome <= 323925)
                {
                    puts("\nYou will be taxed $49,335.50 plus 35% of the amount over $215,950.\n");
                    grossIncome -= 215950;
                    taxAmount = 49335.5 + (grossIncome * 0.35);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 215950;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 323925)
                {
                    puts("\nYou will be taxed $87,126.75 plus 37% of the amount over $323,925.\n");
                    grossIncome -= 323925;
                    taxAmount = 87126.75 + (grossIncome * 0.37);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 323925;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else
                    puts("\nInvalid value entered!");
            }

            else if (filingStatus == 4)
            {
                printf("\nWhat was your gross income for 2021? Please only enter a non-negative number (integers/floating-point values, no commas). ");
                scanf("%f", &grossIncome);

                if (grossIncome >= 0 && grossIncome <= 14650)
                {
                    puts("\nYou will be taxed 10% on your income.\n");
                    taxAmount = grossIncome * 0.1;
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 14650 && grossIncome <= 55900)
                {
                    puts("\nYou will be taxed $1,465 plus 12% of the amount over $14,650.\n");
                    grossIncome -= 14650;
                    taxAmount = 1465 + (grossIncome * 0.12);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 14650;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 55900 && grossIncome <= 89050)
                {
                    puts("\nYou will be taxed $6,415 plus 22% of the amount over $55,900.\n");
                    grossIncome -= 55900;
                    taxAmount = 6415 + (grossIncome * 0.22);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 55900;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 89050 && grossIncome <= 170050)
                {
                    puts("\nYou will be taxed $13,708 plus 24% of the amount over $89,050.\n");
                    grossIncome -= 89050;
                    taxAmount = 13708 + (grossIncome * 0.24);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 89050;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 170050 && grossIncome <= 215950)
                {
                    puts("\nYou will be taxed $33,148 plus 32% of the amount over $170,050.\n");
                    grossIncome -= 170050;
                    taxAmount = 33148 + (grossIncome * 0.32);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 170050;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 215950 && grossIncome <= 539900)
                {
                    puts("\nYou will be taxed $47,836 plus 35% of the amount over $215,950.\n");
                    grossIncome -= 215950;
                    taxAmount = 47836 + (grossIncome * 0.35);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 215950;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else if (grossIncome >= 539900)
                {
                    puts("\nYou will be taxed $161,218.50 plus 37% of the amount over $539,900.\n");
                    grossIncome -= 539900;
                    taxAmount = 161218.5 + (grossIncome * 0.37);
                    printf("Accordingly, you owe $%.2f in taxes.\n", taxAmount);
                    grossIncome += 539900;
                    netIncome = grossIncome - taxAmount;
                    printf("\nAfter taxes, your net income will be $%.2f\n", netIncome);
                }

                else
                    puts("\nInvalid value entered!");
            }
        }

        else
            puts("\nInvalid value entered!");
    }

    else if (category == 'N' || category == 'n')
        puts("\nSorry to see that you will not be using my Federal Tax Bracket Determiner, tax amount owed and net income calculator. :(\n");

    else
        puts("\nInvalid value entered!");


    return(0);
}
