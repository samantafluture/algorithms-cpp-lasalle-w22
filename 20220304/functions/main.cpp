// Samanta Gimenez Fluture, 2022-03-04, Testing functions

#include <iostream>
using namespace std;

// function declaration
// void greet()
// {
//     cout << "Hello World from a function!" << endl;
// }

// void printNum(int num)
// {
//     cout << num << endl;
// }

// void displayNum(int n1, float n2)
// {
//     cout << "The int number is " << n1 << endl;
//     cout << "The double number is " << n2 << endl;
// }

int add(int a, int b)
{
    return (a + b);
}

int sub(int a, int b)
{
    return (a - b);
}

int mult(int a, int b)
{
    return (a * b);
}

double sum()
{
    double a, b;

    cout << "Enter the first value: ";
    cin >> a;

    cout << "Enter the second value: ";
    cin >> b;

    return (a + b);
}

int main()
{
    // int num1 = 7;
    // double num2 = 5.5;
    // int sum;

    // calling the function
    // greet();

    // calling the function
    // values passed to the function as argument
    // printNum(num1);
    // printNum(123);
    // printNum(123.111);
    // displayNum(num1, num2);

    // cout << "2 + 4 = " << add(2, 4) << endl;

    // sum = add(3,3);
    // cout << "2 + 4 = " << sum << endl;

    int result, num1, num2;

    cout << "Enter the first value: ";
    cin >> num1;

    cout << "Enter the second value: ";
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
    cout << num1 << " - " << num2 << " = " << sub(num1, num2) << endl;
    cout << num1 << " * " << num2 << " = " << mult(num1, num2) << endl;

    cout << "Calling the sum() function...\n" << sum() << endl;

    return 0;
}