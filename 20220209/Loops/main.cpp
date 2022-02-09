// Samanta Gimenez Fluture, 2022-02-09, Testing the loops

/******** FOR LOOP *********/

#include <iostream>
using namespace std;

/*
// print numbers from 1 to 5
int main()
{
    cout << "Before 'for' loop" << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << i << " " << endl;
    }

    cout << "After 'for' loop" << endl;

    return 0;
}
*/

// if you decrement (--i) instead of increment (++i)
// it will be an infinite loop because it will never reach the condition of i <= 5

/*
Expected output:

Before 'for' loop
1 2 3 4 5 After 'for' loop
*/

/*
// print numbers from -1 to -5
int main()
{
    cout << "Before 'for' loop" << endl;

    for (int i = -1; i >= -5; i--)
    {
        cout << i << " " << endl;
    }

    cout << "After 'for' loop" << endl;

    return 0;
}
*/

/*
Expected output:

Before 'for' loop
-1
-2
-3
-4
-5
After 'for' loop
*/

/*
// find the sum of first n natural numbers
int main()
{

    int num, sum;
    sum = 0;

    cout << "Enter a positive integer: ";

    cin >> num;

    cout << "Before 'for' loop" << endl;

    for (int i = 1; i <= num; ++i)
    {
        cout << "Before Calc: " << "sum = " << sum << " | i = " << i << " | num = " << num << endl;
        sum += i; // sum = sum + i
        cout << "After Calc: " << "sum = " << sum << " | i = " << i << " | num = " << num << endl;
    }
    cout << "After 'for' loop" << endl;

    cout << "Sum = " << sum << endl;

    return 0;
}
*/

/*
Expected output:

Enter a positive integer: 3
Before 'for' loop
Before Calc: sum = 0 | i = 1 | num = 3
After Calc: sum = 1 | i = 1 | num = 3
Before Calc: sum = 1 | i = 2 | num = 3
After Calc: sum = 3 | i = 2 | num = 3
Before Calc: sum = 3 | i = 3 | num = 3
After Calc: sum = 6 | i = 3 | num = 3
After 'for' loop
Sum = 6

--

Enter a positive integer: 6
Before 'for' loop
Before Calc: sum = 0 | i = 1 | num = 6
After Calc: sum = 1 | i = 1 | num = 6
Before Calc: sum = 1 | i = 2 | num = 6
After Calc: sum = 3 | i = 2 | num = 6
Before Calc: sum = 3 | i = 3 | num = 6
After Calc: sum = 6 | i = 3 | num = 6
Before Calc: sum = 6 | i = 4 | num = 6
After Calc: sum = 10 | i = 4 | num = 6
Before Calc: sum = 10 | i = 5 | num = 6
After Calc: sum = 15 | i = 5 | num = 6
Before Calc: sum = 15 | i = 6 | num = 6
After Calc: sum = 21 | i = 6 | num = 6
After 'for' loop
Sum = 21
*/

/******** WHILE LOOP *********/

/*
// print numbers from 1 to 5
int main()
{
    int i = 1; // declared outside of the while, before the loop

    cout << "Before 'while' loop, i = " << i << endl;
    // while from 1 to 5
    while (i <= 5)
    {
        cout << i << " " << endl;
        i++; // increment is part of the while, inside the body
    }

    cout << "After 'while' loop, i = " << i << endl;

    return 0;
}
*/
/*
Expected output:

Before 'while' loop, i = 1
1
2
3
4
5
After 'while' loop, i = 6
*/

// find the sum of positive numbers
// if the user enters a negative number, the loop ends
/*
int main()
{
    int number;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Before 'while' loop, number = " << number << " and sum = " << sum << endl;
    while (number >= 0)
    {
        // add all positive numbers
        sum += number; // sum = sum + number

        // take input again if the number is positive
        cout << "Enter a number: ";
        cin >> number;
    }

    cout << "\nThe sum is " << sum << endl;
    cout << "After 'while' loop, number = " << number << " and sum = " << sum << endl;
    return 0;
}
*/

/*
Expected output:

Enter a number: 3
Before 'while' loop, number = 3 and sum = 0
Enter a number: 4
Enter a number: 5
Enter a number: 6
Enter a number: 7
Enter a number: 8
Enter a number: 10
Enter a number: -1

The sum is 43
After 'while' loop, number = -1 and sum = 43
*/

/******** DO WHILE LOOP *********/

// loop is executed at least once
/*
int main()
{
    int i = 1;

    // do...while loop from 1 to 5
    do
    {
        cout << i << " ";
        ++i;
    } while (i <= 5);

    return 0;
}
*/

/*
Expected output:

1 2 3 4 5
*/

// find the sum of positive numbers
// if the user enters a negative number, the loop ends
/*
int main()
{
    int number = 0;
    int sum = 0;

    do
    {
        sum += number;

        cout << "Enter a number: ";
        cin >> number;
    } while (number >= 0);

    cout << "\nThe sum is " << sum << endl;

    return 0;
}
*/

/*
Expected output:

Enter a number: 5
Enter a number: 10
Enter a number: 1
Enter a number: -3

The sum is 16
*/

/******** BREAK STATEMENT *********/

//  break statement terminates the loop when it is encountered
/*
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        // break condition
        if (i == 5)
        {
            break;
        }
        cout << i << endl;
    }
    return 0;
}
*/

/*
Expected output:

1
2
3
4
*/

// break the loop if the user enters a negative number
/*
int main()
{
    int number;
    int sum = 0;

    while (true)
    {
        cout << "Enter a number: ";
        cin >> number;

        // break condition
        if (number < 0)
        {
            break;
        }

        sum += number; // sum = sum + number
    }

    cout << "The sum is " << sum << endl;
    return 0;
}
*/

/*
Expected output:

Enter a number: 3
Enter a number: 3
Enter a number: 5
Enter a number: 10
Enter a number: -1
The sum is 21
*/

// using break statement inside nested for loop
/*
int main()
{
    int number;
    int sum = 0;

    // first loop
    for (int i = 1; i <= 3; i++)
    {
        cout << "i before loop = " << i << endl;
        // second loop
        for (int j = 1; j <= 3; j++)
        {
            if (i == 2)
            {
                break;
            }
            cout << "i = " << i << ", j = " << j << endl;
        }

        cout << "i after loop = " << i << endl;
    }
    return 0;
}
*/

// break statement is executed when i == 2
// terminates the inner loop, and moves to the outer loop
// the value of i = 2 is never displayed in the output

/*
Expected output:

i before loop = 1
i = 1, j = 1
i = 1, j = 2
i = 1, j = 3
i after loop = 1
i before loop = 2
i after loop = 2
i before loop = 3
i = 3, j = 1
i = 3, j = 2
i = 3, j = 3
i after loop = 3
*/

/******** CONTINUE STATEMENT *********/

// continue statement is used to skip the current iteration of the loop
// goes to the next iteration
// jumps to the update expression
/*
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        // condition to continue
        if (i == 3)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}
*/

/*
Expected output:

1
2
4
5
*/

// program to calculate positive numbers till 50 only
// if the user enters a negative number,
// that number is skipped from the calculation
// negative number -> loop terminate
// numbers above 50 -> skip iteration
/*
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int number = 0;

    while (number >= 0)
    {
        sum += number;

        cout << "Enter a number: ";
        cin >> number;

        // continue condition
        if (number > 50)
        {
            cout << "The number is greater than 50 and won't be calculated." << endl;
            number = 0; // the value of number is made 0 again
            continue;
        }
    }

    cout << "The sum is " << sum << endl;
    return 0;
}
*/

/*
Expected output:

Enter a number: 30
Enter a number: 11
Enter a number: 52
The number is greater than 50 and won't be calculated.
Enter a number: -1
The sum is 41
*/

// continue in nested loops
/*
int main()
{
    int number;
    int sum = 0;

    // first loop
    for (int i = 1; i <= 3; i++)
    {
        // second loop
        for (int j = 1; j <= 3; j++)
        {
            if (j == 2)
            {
                continue;
            }
            cout << "i = " << i << ", j = " << j << endl;
        }
    }
    return 0;
}
*/

/*
Expected output:

i = 1, j = 1
i = 1, j = 3
i = 2, j = 1
i = 2, j = 3
i = 3, j = 1
i = 3, j = 3
*/

// ----> break statement: terminates the loop entirely
// ----> continue statement: only skips the current iteration

/******** GOTO STATEMENT *********/

// should be avoided
// used for altering the normal sequence of execution
// transfer control to some other part of the program

// label is an identifier
// when 'goto label;' is encountered, control jumps to 'label:' and executes the code below it

// This program calculates the average of numbers entered by the user.
// If the user enters a negative number, it ignores the number and
// calculates the average number entered before it.

int main()
{
    float num, average, sum = 0.0;
    int i, n;

    cout << "Maximum number of inputs: ";
    cin >> n;

    for (i = 1; i <= n; ++i)
    {
        cout << "Enter n" << i << ": ";
        cin >> num;

        if (num < 0.0)
        {
            // Control of the program move to jump:
            goto jump;
        }
        sum += num;
    }

jump:
    average = sum / (i - 1);
    cout << "\nAverage = " << average;
    return 0;
}

/*
Expected output:

Maximum number of inputs: 3
Enter n1: 2
Enter n2: 4
Enter n3: 6

Average = 4
*/