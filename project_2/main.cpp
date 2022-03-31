// Samanta Gimenez Fluture, 2022-03-31, Project #2

// Question 1

/*

3 options:
> 1. conversion from pounds to kilograms,
> 2. conversion from kilograms to pounds,
> 3. the option to quit.

data:
> 2.2046 pounds in a kilogram
> 1000 grams in a kilogram
> 1000 grams in a kilogram

1st option:
> input: a weight in pounds and/or ounces
> output: the equivalent weight in kilograms
> loop: for up to 15 weights conversions
> 0 or a negative value: display maximum, minimum and average of weight(s) entered as far

2nd option:
> input: a weight in kilograms and/or grams
> output: the equivalent weight in pounds
> loop: for up to 15 weights conversions
> 0 or a negative value: display maximum, minimum and average of weight(s) entered as far

3rd option:
> end the program with confirmation

pseudo-code:
> each functionality
> name of each function/algorithm
> name and type of variables

*/

#include <iostream>
using namespace std;

int main()
{
    char ans;

    cout << "\n******** Conversion App *********" << endl;

    do
    {
        cout << "\nEnter 1 to convert pounds in kilograms\n"
             << "Enter 2 to convert kilograms to pounds\n"
             << "Enter 0 to quit\n"
             << "Your option: ";
        cin >> ans;

        if (ans == '0')
        {
            cout << "Enter Y to confirm you want to quit or enter N to go back" << endl;
            cin >> ans;

            if (ans == 'Y' || ans == 'y')
            {
                cout << "Quitting the application..." << endl;
                break;
            }
            else if (ans == 'N' || ans == 'n')
            {
                cout << "Going back to the menu..." << endl;
                continue;
            } else {
                cout << "\n* Invalid input, try again [Y | N]! *" << endl;
                continue;
            }
        }
        else
        {

            switch (ans)
            {
            case '1':
                cout << "Convertion 1";
                break;
            case '2':
                cout << "Convertion 2";
                break;
            default:
                cout << "\n* Invalid input, try again [0 | 1 | 2]! *" << endl;
                break;
            }
        }

    } while (ans != '0');

    cout << "\n******** Thank you. Bye! *********\n\n";

    return 0;
}
