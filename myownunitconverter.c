/*
Asks the user what they would like converted.
Has the capability of converting between various temperatures, currencies, masses, distances, and speeds.
Once the user selects an option between converting a temperature, currency, mass, distance, or speed, another list will be presented
asking the user for a more specific conversion.
*/

#include <stdio.h>

int main()
{
    char category;
    int tempChoice;
    int currencyChoice;
    int massChoice;
    int distanceChoice;
    int speedChoice;
    float userinputF;
    float userinputC;
    float userinputUSDtoTaka;
    float userinputUSDtoDirham;
    float userinputUSDtoPoundSterling;
    float userinputUSDtoDong;
    float userinputOunce;
    float userinputGram;
    float userinputPound;
    float userinputKilogram;
    float userinputMile;
    float userinputFeet;
    float userinputKilometer;
    float userinputMetersPerSecond;
    float userinputMilesPerHour;
    float userinputKnots;
    double fahrenheitToCelsius;
    double celsiusToFahrenheit;
    double USDtoTaka;
    double USDtoDirham;
    double USDtoPoundSterling;
    double USDtoDong;
    double ouncesToPounds;
    double gramsToPounds;
    double poundsToKilograms;
    double kilogramsToPounds;
    double milesToFeet;
    double feetToMiles;
    double milesToKilometers;
    double kilometersToMiles;
    double mpsTomph;
    double mphTomps;
    double knotsTomph;
    double mphToknots;

    puts("Welcome to my variation of a unit converter!");
    puts("\nHere is a list of conversions to choose from:");
    puts("\nTemperature(T/t), Currency(C/c), Mass(M/m), Distance(D/d), Speed(S/s)");
    printf("\nPlease enter the corresponding letter for what you want to convert: ");
    scanf("%c", &category);

    if(category == 'T' || category == 't')
    {
        puts("\nWelcome to The Temperature Converter!");
        puts("\nHere is a list of conversions to choose from:");
        puts("\nEnter 1 for Fahrenheit to Celsius.");
        puts("\nEnter 2 for Celsius to Fahrenheit.\n");
        printf("Conversion desired: ");
        scanf("%d", &tempChoice);

        if(tempChoice == 1)
        {
            printf("\nPlease enter the temperature in degrees (Fahrenheit) you want converted to Celsius: ");
            scanf("%f", &userinputF);
            fahrenheitToCelsius =  ((userinputF - 32.0) * (5.0/9.0));
            printf("\n%.2f degrees Fahrenheit = %.2f degrees Celsius\n", userinputF, fahrenheitToCelsius);
        }

        else if(tempChoice == 2)
        {
            printf("\nPlease enter the temperature in degrees (Celsius) you want converted to Fahrenheit: ");
            scanf("%f", &userinputC);
            celsiusToFahrenheit = (((9.0/5.0) * userinputC) + 32);
            printf("\n%.2f degrees Celsius = %.2f degrees Fahrenheit\n", userinputC, celsiusToFahrenheit);
        }

        else
            puts("\nInvalid option selected - please choose from the options that are listed.");
    }

    else if(category == 'C' || category == 'c')
    {
        puts("\nWelcome to The Currency Converter!");
        puts("\nHere is a list of conversions to choose from:");
        puts("\nEnter 1 for USD to Taka.");
        puts("\nEnter 2 for USD to Dirham.");
        puts("\nEnter 3 for USD to Pound Sterling.");
        puts("\nEnter 4 for USD to Vietnamese Dong.\n");
        printf("Conversion desired: ");
        scanf("%d", &currencyChoice);

        if(currencyChoice == 1)
        {
            printf("\nPlease enter the USD amount: ");
            scanf("%f", &userinputUSDtoTaka);
            USDtoTaka = userinputUSDtoTaka * 92.9;
            printf("\n$%.2f = %.2f Taka\n", userinputUSDtoTaka, USDtoTaka);
        }

        else if(currencyChoice == 2)
        {
            printf("\nPlease enter the USD amount: ");
            scanf("%f", &userinputUSDtoDirham);
            USDtoDirham = userinputUSDtoDirham * 3.67;
            printf("\n$%.2f = %.2f Dirham\n", userinputUSDtoDirham, USDtoDirham);
        }

        else if(currencyChoice == 3)
        {
            printf("\nPlease enter the USD amount: ");
            scanf("%f", &userinputUSDtoPoundSterling);
            USDtoPoundSterling = userinputUSDtoPoundSterling * 0.82;
            printf("\n$%.2f = %.2f Pound Sterling\n", userinputUSDtoPoundSterling, USDtoPoundSterling);
        }

        else if(currencyChoice == 4)
        {
            printf("\nEnter the amount of USD you want converted to Vietnamese Dong: ");
            scanf("%f", &userinputUSDtoDong);
            USDtoDong = userinputUSDtoDong * 23230.00;
            printf("\n$%.2f = %.2f Vietnamese Dong\n", userinputUSDtoDong, USDtoDong);
        }

        else
            puts("\nInvalid option selected - please choose from the options that are listed.");
    }

    else if(category == 'M' || category == 'm')
    {
        puts("\nWelcome to The Mass Converter!");
        puts("\nHere is a list of conversions to choose from:");
        puts("\nEnter 1 for ounces to pounds.");
        puts("\nEnter 2 for grams to pounds.");
        puts("\nEnter 3 for pounds to kilograms.");
        puts("\nEnter 4 for kilograms to pounds.\n");
        printf("Conversion desired: ");
        scanf("%d", &massChoice);

        if(massChoice == 1)
        {
            printf("\nPlease enter the amount of ounces you want converted to pounds: ");
            scanf("%f", &userinputOunce);
            ouncesToPounds = userinputOunce * 0.0625;
            printf("\n%.2f ounces = %.2f pounds\n", userinputOunce, ouncesToPounds);
        }

        else if(massChoice == 2)
        {
            printf("\nPlease enter the amount of grams you want converted to pounds: ");
            scanf("%f", &userinputGram);
            gramsToPounds = userinputGram * 0.00220462;
            printf("\n%.2f grams = %.2f pounds\n", userinputGram, gramsToPounds);
        }

        else if(massChoice == 3)
        {
            printf("\nPlease enter the amount of pounds you want converted to kilograms: ");
            scanf("%f", &userinputPound);
            poundsToKilograms = userinputPound * 0.45359237;
            printf("\n%.2f pounds = %.2f kilograms\n", userinputPound, poundsToKilograms);
        }

        else if(massChoice == 4)
        {
            printf("\nPlease enter the amount of kilograms you want converted to pounds: ");
            scanf("%f", &userinputKilogram);
            kilogramsToPounds = userinputKilogram * 2.20462262;
            printf("\n%.2f kilograms = %.2f pounds\n", userinputKilogram, kilogramsToPounds);
        }

        else
            printf("\nInvalid option selected - please choose from the options that are listed.");
    }

    else if (category == 'D' || category == 'd')
    {
        puts("\nWelcome to The Distance Converter!");
        puts("\nHere is a list of conversions to choose from.");
        puts("\nEnter 1 for miles to feet.");
        puts("\nEnter 2 for feet to miles.");
        puts("\nEnter 3 for miles to kilometers.");
        puts("\nEnter 4 for kilometers to miles.\n");
        printf("Conversion desired: ");
        scanf("%d", &distanceChoice);

        if(distanceChoice == 1)
        {
            printf("\nPlease enter the amount of miles you want converted to feet: ");
            scanf("%f", &userinputMile);
            milesToFeet = userinputMile * 5280;
            printf("\n%.2f miles = %.2f feet\n", userinputMile, milesToFeet);
        }

        else if(distanceChoice == 2)
        {
            printf("\nPlease enter the amount of feet you want converted to miles: ");
            scanf("%f", &userinputFeet);
            feetToMiles = userinputFeet / 5280;
            printf("\n%.2f feet = %.2f miles\n", userinputFeet, feetToMiles);
        }

        else if(distanceChoice == 3)
        {
            printf("\nPlease enter the amount of miles you want converted to kilometers: ");
            scanf("%f", &userinputMile);
            milesToKilometers = userinputMile * 1.609344;
            printf("\n%.2f miles = %.2f kilometers\n", userinputMile, milesToKilometers);
        }

        else if(distanceChoice == 4)
        {
            printf("\nEnter the amount of kilometers you want converted to miles: ");
            scanf("%f", &userinputKilometer);
            kilometersToMiles = userinputKilometer * 0.62137119;
            printf("\n%.2f kilometers = %.2f miles\n", userinputKilometer, kilometersToMiles);
        }

        else
            puts("\nInvalid option - please choose from the options that are listed.");
    }

    else if(category == 'S' || category == 's')
    {
        puts("\nWelcome to The Speed Converter!");
        puts("\nHere is a list of conversions to choose from!");
        puts("\nEnter 1 for meters per second to miles per hour.");
        puts("\nEnter 2 for miles per hour to meters per second.");
        puts("\nEnter 3 for knots to miles per hour.");
        puts("\nEnter 4 for miles per hour to knots.\n");
        printf("Conversion desired: ");
        scanf("%d", &speedChoice);

        if(speedChoice == 1)
        {
            printf("\nEnter the amount of meters per second you want converted to miles per hour: ");
            scanf("%f", &userinputMetersPerSecond);
            mpsTomph = userinputMetersPerSecond * 2.23693629;
            printf("\n%.2f m/s = %.2f mph\n", userinputMetersPerSecond, mpsTomph);
        }

        else if(speedChoice == 2)
        {
            printf("\nEnter the amount of miles per hour you want converted to meters per second: ");
            scanf("%f", &userinputMilesPerHour);
            mphTomps = userinputMilesPerHour * 0.44704;
            printf("\n%.2f mph = %.2f m/s\n", userinputMilesPerHour, mphTomps);
        }

        else if(speedChoice == 3)
        {
            printf("\nEnter the amount of knots you want converted to miles per hour: ");
            scanf("%f", &userinputKnots);
            knotsTomph = userinputKnots * 1.150779448;
            printf("\n%.2f knots = %.2f mph\n", userinputKnots, knotsTomph);
        }

        else if(speedChoice == 4)
        {
            printf("\nEnter the amount of miles per hour you want converted to knots: ");
            scanf("%f", &userinputMilesPerHour);
            mphToknots = userinputMilesPerHour * 0.8689762419;
            printf("\n%.2f mph = %.2f knots\n", userinputMilesPerHour, mphToknots);
        }

        else
            puts("\nInvalid option selected - please choose from the options that are listed.");
    }

    else
        puts("\nInvalid option selected - please choose from the options that are listed.");

    return 0;
}

/*
Sample Output:
Welcome to my variation of a unit converter!

Here is a list of conversions to choose from:

Temperature(T/t), Currency(C/c), Mass(M/m), Distance(D/d), Speed(S/s)

Please enter the corresponding letter for what you want to convert: M

Welcome to The Mass Converter!

Here is a list of conversions to choose from:

Enter 1 for ounces to pounds.

Enter 2 for grams to pounds.

Enter 3 for pounds to kilograms.

Enter 4 for kilograms to pounds.

Conversion desired: 3

Please enter the amount of pounds you want converted to kilograms: 236.2

236.20 pounds = 107.14 kilograms
*/
