// Samanta Gimenez Fluture, 2022-02-16, Exercises on loops Lab 5.2.

#include <iostream>
using namespace std;

int main()
{

    // Exercise 5

    /*
    char ans;
    int num, i;

    do
    {
        cout << "Enter a number between 1 and 15: ";
        cin >> num;

        if (num < 1 || num > 15)
        {
            cout << "Invalid number!" << endl;
        }
        else
        {
            int sum = 0;

            for (int i = 1; i <= num; ++i)
            {
                sum += i; // sum = sum + i
                // cout << "num: " << num << " i: " << i << " sum: " << sum  << endl;
            }

            cout << "The result is = " << sum;
        }

        cout << "\n\nEnter y or Y for continue, or anything else to quit: ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');

    cout << "\n\nNow we leave the application!" << endl;
    */

    
    // Exercise 6

    /*
    char ans;
    double num1, num2;

    do
    {
        cout << "Enter number 1: ";
        cin >> num1;

        cout << "Enter number 2: ";
        cin >> num2;

        cout.precision(3);         // 3 decimal places
        cout.setf(ios::fixed);     // set fixed point notation
        cout.setf(ios::showpoint); // show decimal point

        cout << "Addition: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        cout << "Subtraction: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        cout << "Multiplication: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        cout << "Division: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;

        cout << "\n\nEnter y or Y for continue, or anything else to quit: ";
        cin >> ans;

    } while (ans == 'y' || ans == 'Y');

    cout << "\n\nNow we leave the application!" << endl;
    */

    // Exercise 7


    char ans; // if options as less than 10, use char instead of int
    int num;
    double num1, num2;

    do
    {
        cout << "\n#### Let's play ####\n"
             << "Enter 1 to test exercise 1\n"
             << "Enter 2 to test exercise 2\n"
             << "Enter 0 to quit" << endl;
        cin >> ans;

        switch (ans)
        {
        case '1':
            cout << "\n#### Exercise 1 ####" << endl;

            cout << "Enter a number between 1 and 15: ";
            cin >> num;

            if (num < 1 || num > 15)
            {
                cout << "Invalid number!" << endl;
                cout << endl;
            }
            else
            {
                int sum = 0;

                for (int i = 1; i <= num; ++i)
                {
                    sum += i;
                }

                cout << "The result is = " << sum << endl;
                cout << endl;
            }

            break;
        case '2':
            cout << "\n#### Exercise 2 ####" << endl;

            cout << "Enter number 1: ";
            cin >> num1;

            cout << "Enter number 2: ";
            cin >> num2;

            cout.precision(3);         // 3 decimal places
            cout.setf(ios::fixed);     // set fixed point notation
            cout.setf(ios::showpoint); // show decimal point

            cout << "Addition: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            cout << "Subtraction: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            cout << "Multiplication: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            cout << "Division: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            cout << endl;

            break;
        case '0':
            cout << "\n#### Goodbye ####" << endl;
            cout << "Quiting the application...\n" << endl;
            break;
        default:
            cout << "Invalid input!\n" << endl;
            break;
        }
    } while (ans != '0');


    return 0;
}
