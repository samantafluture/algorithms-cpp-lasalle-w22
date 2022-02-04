#include <iostream>

using namespace std;

// Program to build a simple calculator using switch statement
int main()
{
    char oper, ans;
    float num1, num2;

    do
    {
        cout << "Enter an operator (+, -, *, /): ";
        cin >> oper;
        if (oper == '+' || oper == '-' || oper == '*' || oper == '/')
        {
            cout << "Enter two numbers: " << endl;
            cin >> num1 >> num2;

            switch (oper)
            {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2;
                break;
            case '/':
                cout << num1 << " / " << num2 << " = " << num1 / num2;
                break;
            }
        }
        else
        {
            cout << "Error! The operator is not correct\n"; // operator is doesn't match any case constant (+, -, *, /)
            cout << "Enter y to continue\n";
            cin >> ans;
        }
    } while (ans == 'y' || ans == 'Y'); // if true, repeat, if false, break

    return 0;
}

/*
Expected output #1

Enter an operator (+, -, *, /): +
Enter two numbers: 
1
2
1 + 2 = 3

Expected output #2

Enter an operator (+, -, *, /): -
Enter two numbers: 
10
5
10 - 5 = 5

Expected output #3

Enter an operator (+, -, *, /): *
Enter two numbers: 
5
5
5 * 5 = 25

Expected output #4

Enter an operator (+, -, *, /): /
Enter two numbers: 
50
5
50 / 5 = 10
*/

/******************************************************************************/
/* Ex. 4 - Print ASCII value 
int main()
{
    char c;

    cout << "Enter a character: ";
    cin >> c;
    
    cout << "ASCII Value of " << c << " is " << int(c); // convert char into int value
    
    return 0;
}
*/
/*
Ex. 4 - Expected output

Enter a character: a
ASCII Value of a is 97      
*/

/******************************************************************************/
/* Ex. 3 - Swap variables without temporary variable

int main()
{
    int a = 5, b = 10;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // using addition and subtraction
    // a = a + b; // a = 5 + 10 => 15
    // b = a - b; // b = 15 - 10 => 5
    // a = a - b; // a = 15 - 5 => 10

    // using multiplication and division
    // issue -> initial variable can't be 0
    a = a * b; // a = 5 * 10 => 50
    b = a / b; // b = 50 / 10 => 5
    a = a / b; // a = 50 / 5 => 10

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
*/

/*
Ex. 3 - Expected output

Before swapping.
a = 5, b = 10

After swapping.
a = 10, b = 5
*/

/******************************************************************************/
/*
Ex. 2 - Swap numbers using temporary variable

int main()
{
    int a = 5, b = 10, temp;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << ", temp = " << temp << endl;
    
    temp = a; // preserve value a, space in memory
    a = b; // now a = 10
    b = temp; // now b = 5
    
    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << ", temp = " << temp << endl;
    
    return 0;
}
*/

/*
Ex. 2 - Expected output

Before swapping.
a = 5, b = 10, temp = 0

After swapping.
a = 10, b = 5, temp = 5
*/

/******************************************************************************/
/* Ex. 1 - Find size of variables

int main() {

    // Check size of different types os variables
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of boolean: " << sizeof(bool) << " byte" << endl;

    // Modifications
    char A = 'a';
    bool test = false;

    cout << "Size of variable char A: " << sizeof(A) << " byte" << endl;
    cout << "Size of variable boolean test: " << sizeof(test) << " byte" << endl;

    return 0;
}

*/

/* 
Ex. 1 - Expected output

Size of char: 1 byte
Size of int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of boolean: 1 byte

Size of variable char A: 1 byte
Size of variable boolean test: 1 byte
*/