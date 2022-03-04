// Question 2

/*
#include <iostream>
using namespace std;

int main()
{

    // using for loop from 2nd to 5th value
    double number = 0, total = 0, ave = 0, max = -999999;

    cout << "Enter the number 1 : ";
    cin >> number;

    max = number;
    total = number;

    for (int i = 2; i < 6; i++)
    {
        cout << "Enter the number " << i << " : ";
        cin >> number;
        if (max < number)
            max = number;
        total += number; // total = total + number;
    }

    ave = total / 5;

    cout << "The bigger number you enter is : " << max << " and the average is : " << ave << endl;


    // using 5 variables
    double num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, total = 0,
    ave = 0, max = -999999;

    cout << "Enter the number 1 : ";
    cin >> num1;
    max = num1;
    total = num1;

    cout << "Enter the number 2 : ";
    cin >> num2;

    if (max < num2)
    {
        max = num2;
    }

    total += num2; // total = total + num2;

    cout << "Enter the number 3 : ";
    cin >> num3;

    if (max < num3)
    {
        max = num3;
    }

    total += num3; // total = total + num3;

    cout << "Enter the number 4 : ";
    cin >> num4;

    if (max < num4)
    {
        max = num4;
    }

    total += num4; // total = total + num4;

    cout << "Enter the number 5 : ";
    cin >> num5;

    if (max < num5)
    {
        max = num5;
    }

    total += num5; // total = total + num3;

    ave = total / 5;

    cout << "The bigger number you enter is : " << max << " and the average is : " << ave << endl;


    return 0;
}
*/

// Question 3

#include <iostream>
using namespace std;

int main()
{

    // The code using do..while
    /*
    double number = 0, counter = 1, max = 0, min = 99999;

    do
    {
        if (counter == 1)
        {
            cout << "Enter the first number: ";
            cin >> number;
        }
        else
        {
            cout << "Enter another number or if you want to quit, enter 0 or a negative number : ";
            cin >> number;
        }

        if (max < number)
        {
            max = number;
        }

        if (min > number && number > 0)
        {
            min = number;
        }
        counter++;

    } while (number > 0);

    cout << "\nThe bigger number you enter is : " << max << " and the smallest number you enter is : " << min << endl;
    */

    // The code using do..while (version 2 without counter)
    double number = 0, max = -99999, min = 99999;

    cout << "Enter the first number: ";
    cin >> number;

    do
    {
        if (max < number)
        {
            max = number;
        }

        if (min > number)
        {
            min = number;
        }

        cout << "Enter another number or if you want to quit, enter 0 or a negative number: ";
        cin >> number;

    } while (number > 0);

    cout << "\nThe bigger number you enter is : " << max << " and the smallest number you enter is : " << min << endl;

    return 0;
}