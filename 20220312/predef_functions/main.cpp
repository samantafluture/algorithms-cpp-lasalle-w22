// Samanta Gimenez Fluture, 2022-03-12, Pre defined functions

// Question 1

/*

sqrt(16.0) = cmath
pow(2, 3) = cmath
abs(3) = cstdlib
fabs(-3.0) = cmath
ceil(5.1) = cmath
floor(5.8) = cmath
labs(-2) = cstdlib

*/

// Question 2

/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, result;

    cout << "Enter first value: ";
    cin >> x;
    cout << "Enter second value: ";
    cin >> y;

    cout << "sqrt(x + y) = " << sqrt(x + y) << endl; // square root
    cout << "pow(x, (y + 7)) = " << pow(x, (y + 7)) << endl; // powers
    cout << "(sqrt(x + y)/4) = " << (sqrt(x + y)/4) << endl; // square root
    cout << "(-x + (sqrt(pow(y, 2.0) - 4*x*4))/2*x) = " << (-x + (sqrt(pow(y, 2.0)) - ((4*x)*4))/(2*x)) << endl; // square root and powers


    return 0;
}
*/

// Question 3

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.14159;

    cout << "The square root of PI (3.14159) = " << sqrt(pi) << endl;

    return 0;
}
