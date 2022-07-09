#include <stdio.h>

int main()
{
    char resp;
    float hoursWorked1;
    float hoursWorked2;
    float payrate;
    float overtimeRate;
    float overtimeHours1;
    float overtimeHours2;
    float overtimePay1;
    float overtimePay2;
    float PTO1;
    float PTO2;
    float PTOtotal;
    float pay1;
    float pay2;
    float grossPay;
    float federalTax;
    float socialSecurityTax;
    float medicareTax;
    float GAStateTax;
    float totalTax;
    float netPay;

    puts("Welcome to my Paycheck Calculator!");
    printf("\nWould you like to use my paycheck calculator? Yes(Y/y) or No(N/n)? ");
    scanf("%c", &resp);

    switch (resp)
    {
        case 'Y':
        case 'y':
            puts("\nThank you for proceeding with using my paycheck calculator!\n");
            puts("**Disclaimer** Only enter numbers (integers/floating-point values).\n");
            printf("What is your pay rate? ");
            scanf("%f", &payrate);
            printf("\nHow many hours did you work in the first week of this pay period? ");
            scanf("%f", &hoursWorked1);
            printf("\nHow many PTO hours did you use in the first week of this pay period? ");
            scanf("%f", &PTO1);
            printf("\nHow many hours did you work in the latter week of this pay period? ");
            scanf("%f", &hoursWorked2);
            printf("\nHow many PTO hours did you use in the latter week of this pay period? ");
            scanf("%f", &PTO2);
            PTOtotal = PTO1 + PTO2;

            overtimeRate = payrate * 1.5;
            overtimeHours1 = hoursWorked1 - 40;
            overtimeHours2 = hoursWorked2 - 40;

            if (hoursWorked1 > 40 && hoursWorked2 <= 40)
            {
                overtimePay1 = overtimeRate * overtimeHours1;
                pay1 = (payrate * 40) + overtimePay1;
                pay2 = payrate * hoursWorked2;
            }

            else if (hoursWorked2 > 40 && hoursWorked1 <= 40)
            {
                overtimePay2 = overtimeRate * overtimeHours2;
                pay2 = (payrate * 40) + overtimePay2;
                pay1 = payrate * hoursWorked1;
            }

            else if (hoursWorked1 > 40 && hoursWorked2 > 40)
            {
                overtimePay1 = overtimeRate * overtimeHours1;
                overtimePay2 = overtimeRate * overtimeHours2;
                pay1 = (payrate * 40) + overtimePay1;
                pay2 = (payrate * 40) + overtimePay2;
            }

            else
            {
                pay1 = payrate * hoursWorked1;
                pay2 = payrate * hoursWorked2;
            }

            grossPay = pay1 + pay2 + (PTOtotal * payrate);
            printf("\nYour gross pay for this pay period is $%.2f\n", grossPay);

            federalTax = grossPay * 0.0815511364;
            socialSecurityTax = grossPay * 0.062;
            medicareTax = grossPay * 0.0145;
            GAStateTax = grossPay * 0.0469431818;
            totalTax = federalTax + socialSecurityTax + medicareTax + GAStateTax;

            netPay = grossPay - totalTax;
            printf("\nYour net pay for this pay period is $%.2f\n", netPay);
            break;

        case 'N':
        case 'n':
            puts("\nSorry to see that you will not be using my paycheck calculator. :(");
            break;

        default:
            puts("\nInvalid option selected - please select an option from the list!");
            break;
    }
}
