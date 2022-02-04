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
                // default:
                //     cout << "Error! The operator is not correct";
                //     break;
            }
        }
        else
        {
            cout << "Error! The operator is not correct\n"; // operator is doesn't match any case constant (+, -, *, /)
            cout << "Enter y to continue\n";
            cin >> ans;
        }
    } while (ans == 'y'); // if true, repeat, if false, break

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