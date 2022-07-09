print('Welcome to my Federal Tax Bracket Determiner!')

response = input('Would you like to proceed with determining your tax bracket, the amount of taxes you owe, and '
                 + 'your net income? Yes(Y/y) or No(N/n)? ')

if response == 'Y' or response == 'y':
    print('\nThanks for giving this a shot!')
    year = int(input('\nWhich year are you filing taxes for - 2021 or 2022? '))
    if year == 2021:
        filingStatus = int(input('\nWhat is your filing status? 1 - Single Filer? 2 - Married, filing jointly? ' +
                                 '3 - Married, filing separately? 4 - Head of Household? Please type 1, 2, 3, or 4. '))

        if filingStatus == 1:
            grossIncome = float(input('\nWhat was your gross income for 2020? Please enter a number only '
                                + '(integer/floating-point value, no commas). '))

            if 0 <= grossIncome <= 9950:
                print('\nYou will be taxed 10% on your income.')
                taxAmount = grossIncome * 0.1
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 9950 <= grossIncome <= 40525:
                print('\nYou will be taxed $995 plus 12% of the amount over $9,950.')
                grossIncome -= 9950
                taxAmount = 995 + (grossIncome * 0.12)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print("Accordingly, you owe $" + format_taxAmount + ' in taxes.')
                grossIncome += 9950
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 40525 <= grossIncome <= 86375:
                print('\nYou will be taxed $4,664 plus 22% of the amount over $40,525.')
                grossIncome -= 40525
                taxAmount = 4664 + (grossIncome * 0.22)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 40525
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 86375 <= grossIncome <= 164925:
                print('\nYou will be taxed $14,751 plus 24% of the amount over $86,375.')
                grossIncome -= 86375
                taxAmount = 14751 + (grossIncome * 0.24)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 86375
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 164925 <= grossIncome <= 209425:
                print('\nYou will be taxed $33,603 plus 32% of the amount over $164,925.')
                grossIncome -= 164925
                taxAmount = 33603 + (grossIncome * 0.32)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 164925
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 209425 <= grossIncome <= 523600:
                print('\nYou will be taxed $47,843 plus 35% of the amount over $209,425.')
                grossIncome -= 209425
                taxAmount = 47843 + (grossIncome * 0.35)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 209425
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif grossIncome >= 523600:
                print('\nYou will be taxed $157,804.25 plus 37% of the amount over $523,600.')
                grossIncome -= 523600
                taxAmount = 157804.25 + (grossIncome * 0.37)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 523600
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            else:
                print('\nInvalid input!')

        elif filingStatus == 2:
            grossIncome = float(input('\nWhat was your gross income for 2020? Please enter a number only '
                                + '(integer/floating-point value, no commas). '))

            if 0 <= grossIncome <= 19900:
                print('\nYou will be taxed 10% on your income.')
                taxAmount = grossIncome * 0.1
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 19900 <= grossIncome <= 81050:
                print('\nYou will be taxed $1,990 plus 12% of the amount over $19,900.')
                grossIncome -= 19900
                taxAmount = 1990 + (grossIncome * 0.12)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 19900
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 81050 <= grossIncome <= 172750:
                print('\nYou will be taxed $9,328 plus 22% of the amount over $81,050.')
                grossIncome -= 81050
                taxAmount = 9328 + (grossIncome * 0.22)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 81050
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 172750 <= grossIncome <= 329850:
                print('\nYou will be taxed $29,502 plus 24% of the amount over $172,750.')
                grossIncome -= 172750
                taxAmount = 29502 + (grossIncome * 0.24)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 172750
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 329850 <= grossIncome <= 418850:
                print('\nYou will be taxed $67,206 plus 32% of the amount over $329,850.')
                grossIncome -= 329850
                taxAmount = 67206 + (grossIncome * 0.32)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 329850
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 418850 <= grossIncome <= 628300:
                print('\nYou will be taxed $95,686 plus 35% of the amount over $418,850.')
                grossIncome -= 418850
                taxAmount = 95686 + (grossIncome * 0.35)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 418850
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif grossIncome >= 628300:
                print('\nYou will be taxed $168,993.50 plus 37% of the amount over $628,300.')
                grossIncome -= 628300
                taxAmount = 168993.5 + (grossIncome * 0.37)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 628300
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            else:
                print('\nInvalid input!')

        elif filingStatus == 3:
            grossIncome = float(input('\nWhat was your gross income for 2020? Please enter a number only '
                                + '(integer/floating-point value, no commas). '))

            if 0 <= grossIncome <= 9950:
                print('\nYou will be taxed 10% on your income.')
                taxAmount = grossIncome * 0.1
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 9950 <= grossIncome <= 40525:
                print('\nYou will be taxed $995 plus 12% of the amount over $9,950.')
                grossIncome -= 9950
                taxAmount = 995 + (grossIncome * 0.12)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 9950
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 40525 <= grossIncome <= 86375:
                print('\nYou will be taxed $4,664 plus 22% of the amount over $40,525.')
                grossIncome -= 40525
                taxAmount = 4664 + (grossIncome * 0.22)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 40525
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 86375 <= grossIncome <= 164925:
                print('\nYou will be taxed $14,751 plus 24% of the amount over $86,375.')
                grossIncome -= 86375
                taxAmount = 14751 + (grossIncome * 0.24)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 86375
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 164925 <= grossIncome <= 209425:
                print('\nYou will be taxed $33,603 plus 32% of the amount over $164,925.')
                grossIncome -= 164925
                taxAmount = 33603 + (grossIncome * 0.32)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 164925
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 209425 <= grossIncome <= 314150:
                print('\nYou will be taxed $47,843 plus 35% of the amount over $209,425.')
                grossIncome -= 209425
                taxAmount = 47843 + (grossIncome * 0.35)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 209425
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif grossIncome >= 314150:
                print('\nYou will be taxed $84,496.75 plus 37% of the amount over $314,150.')
                grossIncome -= 314150
                taxAmount = 84496.75 + (grossIncome * 0.37)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 314150
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            else:
                print('\nInvalid input!')

        elif filingStatus == 4:
            grossIncome = float(input('\nWhat was your gross income for 2020? Please enter a number only '
                                + '(integer/floating-point value, no commas). '))

            if 0 <= grossIncome <= 14200:
                print('\nYou will be taxed 10% on your income.')
                taxAmount = grossIncome * 0.1
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 14200 <= grossIncome <= 54200:
                print('\nYou will be taxed $1,420 plus 12% of the amount over $14,200.')
                grossIncome -= 14200
                taxAmount = 1420 + (grossIncome * 0.12)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 14200
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 54200 <= grossIncome <= 86350:
                print('\nYou will be taxed $6,220 plus 22% of the amount over $54,200.')
                grossIncome -= 54200
                taxAmount = 6220 + (grossIncome * .22)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 54200
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 86350 <= grossIncome <= 164900:
                print('\nYou will be taxed $13,293 plus 24% of the amount over $86,350.')
                grossIncome -= 86350
                taxAmount = 13293 + (grossIncome * .24)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 86350
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 164900 <= grossIncome <= 209400:
                print('\nYou will be taxed $32,145 plus 32% of the amount over $164,900.')
                grossIncome -= 164900
                taxAmount = 32145 + (grossIncome * .32)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 164900
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 209400 <= grossIncome <= 523600:
                print('\nYou will be taxed $46,385 plus 35% of the amount over $209,400.')
                grossIncome -= 209400
                taxAmount = 46385 + (grossIncome * .35)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you will be taxed $' + format_taxAmount + ' in taxes.')
                grossIncome += 209400
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif grossIncome >= 523600:
                print('\nYou will be taxed $156,355 plus 37% of the amount over $523,600.')
                grossIncome -= 523600
                taxAmount = 156355 + (grossIncome * .37)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 523600
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            else:
                print('\nInvalid input!')

        else:
            print('\nInvalid input!')

    elif year == 2022:
        filingStatus = int(input('\nWhat is your filing status? 1 - Single Filer? 2 - Married, filing jointly? ' +
                                 '3 - Married, filing separately? 4 - Head of household? Please type 1, 2, 3, or 4. '))
        if filingStatus == 1:
            grossIncome = float(input('\nWhat was your gross income for 2021? Please enter a number only '
                                + '(integer/floating-point value, no commas). '))

            if 0 <= grossIncome <= 10275:
                print('\nYou will be taxed 10% on your income.')
                taxAmount = grossIncome * 0.1
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 10275 <= grossIncome <= 41775:
                print('\nYou will be taxed $1,027.50 plus 12% of the amount over $10,275.')
                grossIncome -= 10275
                taxAmount = 1027.5 + (grossIncome * 0.12)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 10275
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 41775 <= grossIncome <= 89075:
                print('\nYou will be taxed $4,807.50 plus 22% of the amount over $41,775.')
                grossIncome -= 41775
                taxAmount = 4807.5 + (grossIncome * 0.22)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 41775
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income wil be $' + format_netIncome)

            elif 89075 <= grossIncome <= 170050:
                print('\nYou will be taxed $15,213.50 plus 24% of the amount over $89,075.')
                grossIncome -= 89075
                taxAmount = 15213.5 + (grossIncome * 0.24)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 89075
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 170050 <= grossIncome <= 215950:
                print('\nYou will be taxed $34,647.50 plus 32% of the amount over $170,050.')
                grossIncome -= 170050
                taxAmount = 34647.5 + (grossIncome * 0.32)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 170050
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 215950 <= grossIncome <= 539900:
                print('\nYou will be taxed $49,335.50 plus 35% of the amount over $215,950.')
                grossIncome -= 215950
                taxAmount = 49335.5 + (grossIncome * 0.35)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 215950
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif grossIncome >= 539900:
                print('\nYou will be taxed $162,718 plus 37% of the amount over $539,900.')
                grossIncome -= 539900
                taxAmount = 162718 + (grossIncome * 0.37)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 539900
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            else:
                print('\nInvalid input!')

        elif filingStatus == 2:
            grossIncome = float(input('\nWhat was your gross income for 2021? Please enter a number only '
                                + '(integer/floating-point value, no commas). '))

            if 0 <= grossIncome <= 20550:
                print('\nYou will be taxed 10% on your income.')
                taxAmount = grossIncome * 0.1
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 20550 <= grossIncome <= 83550:
                print('\nYou will be taxed $2,055 plus 12% of the amount over $20,550.')
                grossIncome -= 20550
                taxAmount = 2055 + (grossIncome * 0.12)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 20550
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 83550 <= grossIncome <= 178150:
                print('\nYou will be taxed $9,615 plus 22% of the amount over $83,550.')
                grossIncome -= 83550
                taxAmount = 9615 + (grossIncome * 0.22)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 83550
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 178150 <= grossIncome <= 340100:
                print('\nYou will be taxed $30,427 plus 24% of the amount over $178,150.')
                grossIncome -= 178150
                taxAmount = 30427 + (grossIncome * .24)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 178150
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 340100 <= grossIncome <= 431900:
                print('\nYou will be taxed $69,295 plus 32% of the amount over $340,100.')
                grossIncome -= 340100
                taxAmount = 69295 + (grossIncome * 0.32)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 340100
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 431900 <= grossIncome <= 647850:
                print('\nYou will be taxed $98,671 plus 35% of the amount over $431,900.')
                grossIncome -= 431900
                taxAmount = 98671 + (grossIncome * 0.35)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 431900
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif grossIncome >= 647850:
                print('\nYou will be taxed $174,253.50 plus 37% of the amount over $647,850.')
                grossIncome -= 647850
                taxAmount = 174253.5 + (grossIncome * 0.37)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 647850
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            else:
                print('\nInvalid input!')

        elif filingStatus == 3:
            grossIncome = float(input('\nWhat was your gross income for 2021? Please enter a number only '
                                + '(integer/floating-point value, no commas). '))

            if 0 <= grossIncome <= 10275:
                print('\nYou will be taxed 10% on your income.')
                taxAmount = grossIncome * 0.1
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 10275 <= grossIncome <= 41775:
                print('\nYou will be taxed $1,027.50 plus 12% of the amount over $10,275.')
                grossIncome -= 10275
                taxAmount = 1027.5 + (grossIncome * .12)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 10275
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 41775 <= grossIncome <= 89075:
                print('\nYou will be taxed $4,807.50 plus 22% of the amount over $41,775.')
                grossIncome -= 41775
                taxAmount = 4807.5 + (grossIncome * 0.22)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 41775
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 89075 <= grossIncome <= 170050:
                print('\nYou will be taxed $15,213.50 plus 24% of the amount over $89,075.')
                grossIncome -= 89075
                taxAmount = 15213.5 + (grossIncome * 0.24)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 89075
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 170050 <= grossIncome <= 215950:
                print('\nYou will be taxed $34,647.50 plus 32% of the amount over $170,050.')
                grossIncome -= 170050
                taxAmount = 34647.5 + (grossIncome * 0.32)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 170050
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 215950 <= grossIncome <= 323925:
                print('\nYou will be taxed $49,335.50 plus 35% of the amount over $215,950.')
                grossIncome -= 215950
                taxAmount = 49335.5 + (grossIncome * 0.35)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 215950
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif grossIncome >= 323925:
                print('\nYou will be taxed $87,126.75 plus 37% of the amount over $323,925.')
                grossIncome -= 323925
                taxAmount = 87126.75 + (grossIncome * 0.37)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 323925
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            else:
                print('\nInvalid input!')

        elif filingStatus == 4:
            grossIncome = float(input('\nWhat was your gross income for 2021? Please enter a number only '
                                + '(integer/floating-point value, no commas). '))

            if 0 <= grossIncome <= 14650:
                print('\nYou will be taxed 10% on your income.')
                taxAmount = grossIncome * 0.1
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 14650 <= grossIncome <= 55900:
                print('\nYou will be taxed $1,465 plus 12% of the amount over $14,650.')
                grossIncome -= 14650
                taxAmount = 1465 + (grossIncome * 0.12)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 14650
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 55900 <= grossIncome <= 89050:
                print('\nYou will be taxed $6,415 plus 22% of the amount over $55,900.')
                grossIncome -= 55900
                taxAmount = 6415 + (grossIncome * 0.22)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 55900
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 89050 <= grossIncome <= 170050:
                print('\nYou will be taxed $13,708 plus 24% of the amount over $89,050.')
                grossIncome -= 89050
                taxAmount = 13708 + (grossIncome * 0.24)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 89050
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 170050 <= grossIncome <= 215950:
                print('\nYou will be taxed $33,148 plus 32% of the amount over $170,050.')
                grossIncome -= 170050
                taxAmount = 33148 + (grossIncome * 0.32)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 170050
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif 215950 <= grossIncome <= 539900:
                print('\nYou will be taxed $47,836 plus 35% of the amount over $215,950.')
                grossIncome -= 215950
                taxAmount = 47836 + (grossIncome * 0.35)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 215950
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            elif grossIncome >= 539900:
                print('\nYou will be taxed $161,218.50 plus 37% of the amount over $539,900.')
                grossIncome -= 539900
                taxAmount = 161218.5 + (grossIncome * 0.37)
                format_taxAmount = '{:,.2f}'.format(taxAmount)
                print('Accordingly, you owe $' + format_taxAmount + ' in taxes.')
                grossIncome += 539900
                netIncome = grossIncome - taxAmount
                format_netIncome = '{:,.2f}'.format(netIncome)
                print('After taxes, your net income will be $' + format_netIncome)

            else:
                print('\nInvalid input!')

        else:
            print('\nInvalid input!')

    else:
        print('\nInvalid input!')

elif response == 'N' or response == 'n':
    print('\nSorry to see that you will not be giving this a shot. :(')

else:
    print('\nInvalid input!')
