// Samanta Gimenez Fluture, 2022-03-09, Studying Functions

// modified code

#include <iostream>
using namespace std;

double add(double, double);
double substract(double, double);
double multiple(double, double);
double divide(double, double);

int main()
{
    double num1, num2;
    int ans;

    cout << "\n*****************\n";
    cout << "Simple Calculator\n";
    cout << "*****************\n\n";

    cout << "Enter the first value: ";
    cin >> num1;

    cout << "Enter the second value: ";
    cin >> num2;

    do
    {
        cout << "\n* Choose your operation *\n"
                "Enter 1 for addition (+)\n"
                "Enter 2 for substraction (-)\n"
                "Enter 3 for multiplication (*)\n"
                "Enter 4 for division (/)\n"
                "Enter 0 to quit\n"
                "\n>> Your option: ";
        cin >> ans;

        switch (ans)
        {
        case 1:
        {
            cout << "\n>> Your result: "
                 << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
            break;
        }
        case 2:
        {
            cout << "\n>> Your result: "
                 << num1 << " - " << num2 << " = " << substract(num1, num2) << endl;
            break;
        }
        case 3:
        {
            cout << "\n>> Your result: "
                 << num1 << " * " << num2 << " = " << multiple(num1, num2) << endl;
            break;
        }
        case 4:
        {
            if (num2 != 0)
            {
                cout << "\n>> Your result: "
                     << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
            }
            else
            {
                cout << "\nError, can't divide by 0!" << endl;
            }
            break;
        }
        case 0:
        {
            cout << "\nGood-bye!" << endl;
            break;
        }
        default:
        {
            cout << "\nError, invalid input!" << endl;
            break;
        }
        }

    } while (ans != 0);

    return 0;
}

double add(double a, double b)
{
    return (a + b);
}

double substract(double a, double b)
{
    return (a - b);
}

double multiple(double a, double b)
{
    return (a * b);
}

double divide(double a, double b)
{
    return (a / b);
}

/*
#include <iostream>
using namespace std;

// prototypes
double add(double, double);

double substract(double, double);

double multiple(double, double);

double divide(double, double);

int main()
{
    double num1, num2;

    cout << "Enter the first value: ";
    cin >> num1;

    cout << "Enter the second value: ";
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
    cout << num1 << " - " << num2 << " = " << substract(num1, num2) << endl;
    cout << num1 << " * " << num2 << " = " << multiple(num1, num2) << endl;

    if (num2 != 0)
    {
        cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
    } else {
        cout << "Error, can't divide by 0!" << endl;
    }

    return 0;
}

// declarations

double add(double a, double b)
{
    return (a + b);
}

double substract(double a, double b)
{
    return (a - b);
}

double multiple(double a, double b)
{
    return (a * b);
}

double divide(double a, double b)
{
    return (a / b);
}
*/

// ***************************************************
// function overloading

/*
#include <iostream>

using namespace std;

int add(int a, int b) {
    return (a + b);
}

double add(double a, double b) {
    return (a + b);
}

int main()
{
    int num1, num2;
    double n1, n2;

    cout << "Enter first int value: ";
    cin >> num1;
    cout << "Enter second int value: ";
    cin >> num2;
    cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;

    cout << "Enter first double value: ";
    cin >> n1;
    cout << "Enter second double value: ";
    cin >> n2;
    cout << n1 << " + " << n2 << " = " << add(n1, n2) << endl;

}
*/

// ***************************************************
// c++ library functions

/*
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y, min, max;

    cout << "Enter the first value: ";
    cin >> x;

    cout << "Enter the second value: ";
    cin >> y;

    min = fmin(x, y);
    max = fmax(x, y);

    cout << "The smallest value is: " << min << endl;
    cout << "The biggest value is: " << max << endl;

    return 0;
}
*/