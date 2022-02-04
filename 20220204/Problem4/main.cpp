#include <iostream>

using namespace std;

// Program to build a simple calculator using switch statement
int main()
{
    char oper;
    float num1, num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;

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
    default:
        // operator is doesn't match any case constant (+, -, *, /)
        cout << "Error! The operator is not correct";
        break;
    }

    return 0;
}

/*
Expected output

Enter an operator (+, -, *, /): +
Enter two numbers: 
1
2
1 + 2 = 3
*/