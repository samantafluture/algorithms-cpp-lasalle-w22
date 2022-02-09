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