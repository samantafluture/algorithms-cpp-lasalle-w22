// Samanta Gimenez Fluture, 2022-02-20, While Loop

// Problem 1: Printing Numbers From 1 to 5

/*
Algo_name: PrintOneToFive
Declared variables: i - numerical

START
    i := 1
    REPEAT
        ADD 1 to i
        WRITE i
    UNTIL (i < 6)
END
*/

/*
#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i < 6)
    {
        cout << i << " ";
        i++;
    }

    return 0;
}
*/

// Problem 2: program to find the sum of positive numbers
// if the user enters a negative number, the loop ends
// the negative number entered is not added to the sum

/*
Algo_name: FindSumOfN
Declared variables: num, sum, i - numericals

START
    sum := 0
    WRITE "Enter a positive number to sum: "
    READ num
    REPEAT
        sum := sum + num
        WRITE "Enter another number:"
        READ num
    UNTIL (num >= 0)
    WRITE "The total sum is: " sum
END
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;

    cout << "Enter a positive number to sum: ";
    cin >> num;

    while (num >= 0)
    {
        sum += num;

        cout << "Enter another number: ";
        cin >> num;
    }

    cout << "The total sum is: " << sum << endl;

    return 0;
}
*/

// Problem 3: program to find the sum of positive numbers
// if the user enters a negative numbers, break ends the loop
// the negative number entered is not added to sum

/*
#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;

    while (true)
    {
        cout << "Enter a positive number to sum: ";
        cin >> num;

        if (num < 0)
        {
            break;
        }

        sum += num;
    }

    cout << "The total sum is: " << sum << endl;

    return 0;
}
*/

// Problem 4: program to calculate positive numbers till 50 only
// if the user enters a negative number,
// that number is skipped from the calculation
// negative number -> loop terminate
// numbers above 50 -> skip iteration

/*
#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int sum = 0;

    while (num >= 0)
    {
        sum += num;

        cout << "Enter number: ";
        cin >> num;

        if (num > 50)
        {
            cout << "The number is greater than 50 and won't be calculated." << endl;
            num = 0;
            continue;
        }
    }

    cout << "The sum is: " << sum << endl;

    return 0;
}
*/

// Problem 5: Using the template, write a complete C++ program that:
// 1. outputs the numbers 0 to 200 with the step of 10 if the user choose the option 1(one per line)
// 2. outputs the numbers 0 to 50 with the step of 5 if the user choose the option 2(one per line)
// 3. outputs the numbers 0 to 20 with the step of 1 if the user choose the option 3(two values per line)
// 4. Allow to exit if the user choose the option 4.

/*
#include <iostream>
using namespace std;

int main()
{
    char ans;
    int i = 0;

    cout << "Enter 1 to output numbers 0 to 200\n"
         << "Enter 2 to output numbers 0 to 50\n"
         << "Enter 3 to output numbers 0 to 20\n"
         << "Enter 4 to quit\n";
    cin >> ans;

    switch (ans)
    {
    case '1':
        while (i < 201)
        {
            cout << i << endl;
            i += 10;
        }
        break;
    case '2':
        while (i < 51)
        {
            cout << i << endl;
            i += 5;
        }
        break;
    case '3':
        while (i < 21)
        {
            if (i % 2 == 1)
            {
               cout << i << endl;
            } else {
                cout << i << " ";
            }
            i++;
        }
        break;
    case '4':
        cout << "Bye";
        break;
    default:
        cout << "Invalid input";
        break;
    }

    return 0;
}
*/

// Problem 6: Create the code in C++ by using the loop While to describe an algorithm that:
// - Ask for a number (double) we show a message: Enter a number: and if it is smaller than 0,
// we show a message: Negative number! for 2 times, if the number is bigger than 0, we show
// a message: Positive number! for 3 times, and if the number is equal to 0, we show a
// message: Number = 0! for 5 times.

/*
#include <iostream>
using namespace std;

int main()
{
    double num;
    int i = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
    {
        while (i < 2)
        {
            cout << "Negative number!" << endl;
            i++;
        }
    }
    else if (num > 0)
    {
        while (i < 3)
        {
            cout << "Positive number!" << endl;
            i++;
        }
    }
    else
    {
        while (i < 5)
        {
            cout << "Number = 0!" << endl;
            i++;
        }
    }

    return 0;
}
*/