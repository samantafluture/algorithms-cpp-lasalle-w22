// Samanta Gimenez Fluture, 2022-03-09, Studying Functions

#include <iostream>
using namespace std;

// prototypes
double add(double, double);

double substract(double, double);

double multiple(double, double);

double divide(double, double);

int main()
{
    int num1, num2;

    cout << "Enter the first value: " << endl;
    cin >> num1;

    cout << "Enter the second value: " << endl;
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
    cout << num1 << " - " << num2 << " = " << substract(num1, num2) << endl;
    cout << num1 << " * " << num2 << " = " << multiple(num1, num2) << endl;
    cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;

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