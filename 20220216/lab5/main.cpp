// Samanta Gimenez Fluture, 2022-02-16, Exercises on loops

#include <iostream>
using namespace std;

int main()
{

    /************************************************************/
    // Exercise 1 -> For loop
    
    
    int num, i;

    cout << "Enter a number" << endl;
    cin >> num;

    if (num < 0) {
        for (i = 0; i < 5; i++) {
            cout << "Smaller than 0!" << endl;
        }
    } else if (num > 0) {
        for (i = 0; i < 7; i++) {
            cout << "Bigger than 0!" << endl;
        }
    } else {
        for (i = 0; i < 3; i++) {
            cout << "Equal to 0!" << endl;
        }
    }
    

    /************************************************************/
    // Exercise 2 -> While loop

    /*
    double num;
    int i = 0;

    cout << "Enter a number" << endl;
    cin >> num;

    while (num < 0) {
        cout << "Negative number!" << endl;
        ++i;
        if (i == 2) {
            break;
        }
    }

    while (num > 0) {
        cout << "Positive number!" << endl;
        ++i;
        if (i == 3) {
            break;
        }
    }

    while (num == 0) {
        cout << "Number = 0!" << endl;
        ++i;
        if (i == 5) {
            break;
        }
    }
    */


    /************************************************************/
    // Exercise 3 -> Loop of my choice

    /*
    int num, i;

    cout << "Enter a number between 1 and 18: ";
    cin >> num;

    if (num >= 1 && num <= 18)
    {
        for (i = 11; i <= 13; i++)
        {
            cout << "The result is: " << num << " * " << i << " = " << (num * i) << endl;
        }
    }
    else
    {
        do
        {
            cout << "Invalid number!" << endl;
            cout << "Enter a number between 1 and 18: ";
            cin >> num;
        } while (num > 0 && num < 18);
    }
    */

    /************************************************************/
    // Exercise 4 -> Switch statement

    /*
    int num, i;
    char ans;

    do
    {
        cout << "Enter y to play\n";
        cout << "Enter q to quit\n";
        cin >> ans;

        switch (ans)
        {
        case 'y':
            cout << "Let's play!" << endl;
            cout << "Enter a number" << endl;
            cin >> num;

            if (num < 0)
            {
                for (i = 0; i < 5; i++)
                {
                    cout << "Smaller than 0!" << endl;
                }
            }
            else if (num > 0)
            {
                for (i = 0; i < 7; i++)
                {
                    cout << "Bigger than 0!" << endl;
                }
            }
            else
            {
                for (i = 0; i < 3; i++)
                {
                    cout << "Equal to 0!" << endl;
                }
            }
            break;
        case 'q':
            cout << "Bye!" << endl;
            break;
        default:
            cout << "Invalid input!" << endl;
            break;
        }
    } while (ans != 'q');
    */

    return 0;
}
