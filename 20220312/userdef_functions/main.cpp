// Samanta Gimenez Fluture, 2022-03-12, User defined functions

// Example program

/*
#include <iostream>
using namespace std;

// double total_cost(int, double)
double total_cost(int number_par, double price_par);

int main() {
    double price, bill;
    int number;

    cout << "Enter the number of items purchased: ";
    cin >> number;
    cout << "Enter the price per item $: ";
    cin >> price;

    bill = total_cost(number, price);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << number << " items at $ " << price << " each.\n" << "Final bill, including tax, is $ " << bill << endl;

    return 0;
}

double total_cost(int number_par, double price_par) {
    const double TAX_RATE = 0.05;
    double subtotal;

    subtotal = price_par * number_par;
    return (subtotal + subtotal * TAX_RATE);
}
*/

// Question 5

/*
#include <iostream>
using namespace std;

char mystery(int first_par, int second_par);

int main() {
    cout << mystery(10, 9) << "ow\n";
    return 0;
}

char mystery(int first_par, int second_par) {
    if (first_par >= second_par) {
        return 'W';
    } else {
        return 'H';
    }
}
*/

// Output: Wow

#include <iostream>
#include <cmath>
using namespace std;

// function declarations

// question 6
int sum(int a, int b, int c, int d);

// question 7
double ave(int a, double x);

// question 8
char n_or_p(double x);

// question 11
bool in_order(int a, int b, int c);

// question 12
bool is_even(int a);

// question 13
bool is_digit(char i);

// question 14
bool is_root_of(int a, int b);

int main()
{
    int a, b, c, d;
    double x;
    char i;

    cout << "CALCULATE SUM\n";
    cout << "Enter first integer value: ";
    cin >> a;
    cout << "Enter second integer value: ";
    cin >> b;
    cout << "Enter third integer value: ";
    cin >> c;
    cout << "Enter fourth integer value: ";
    cin >> d;

    // question 6
    cout << "sum(a, b, c, d) = " << sum(a, b, c, d) << endl;

    cout << "\nCALCULATE AVERAGE\n";
    cout << "Enter a integer value: ";
    cin >> a;
    cout << "Enter a double value: ";
    cin >> x;

    // question 7
    cout << "ave(a, x) = " << ave(a, x) << endl;

    cout << "\nIS POSITIVE, NEGATIVE OR ZERO\n";
    cout << "Enter a double value: ";
    cin >> x;

    // question 8
    cout << "n_or_p(double x) = " << n_or_p(x) << endl;

    cout << "\nIN ORDER\n";
    cout << "Enter first integer value: ";
    cin >> a;
    cout << "Enter second integer value: ";
    cin >> b;
    cout << "Enter third integer value: ";
    cin >> c;

    // question 11
    cout << "in_order(int a, int b, int c) = " << in_order(a, b, c) << endl;

    cout << "\nIS EVEN\n";
    cout << "Enter integer value: ";
    cin >> a;

    // question 12
    cout << "is_even(int a) = " << is_even(a) << endl;

    cout << "\nIS DIGIT\n";
    cout << "Enter a char value: ";
    cin >> i;

    // question 13
    cout << "is_digit(char i) = " << is_digit(i) << endl;

    cout << "\nIS ROOT OF\n";
    cout << "Enter first integer value: ";
    cin >> a;
    cout << "Enter second integer value: ";
    cin >> b;

    // question 14
    cout << "is_root_of(int a, int b) = " << is_root_of(a, b) << endl;

    return 0;
}

// function definitions

// question 6
int sum(int a, int b, int c, int d)
{
    return (a + b + c + d);
}

// question 7
double ave(int a, double x)
{
    return ((a + x) / 2);
}

// question 8
char n_or_p(double x)
{
    if (x <= 0)
    {
        return 'N';
    }
    else
    {
        return 'P';
    }
}

// question 11
bool in_order(int a, int b, int c) {
    if (a <= b && b <= c)
    {
        return true;
    } else {
        return false;
    }
    
}

// question 12
bool is_even(int a) {
    if (a % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

// question 13
bool is_digit(char i) {
    // if (isdigit(i)) {
    //     return true;
    // } else {
    //     return false;
    // }

    if (i >= '0' && i <= '9')
    {
        return true;
    } else {
        return false;
    }
    
}

// question 14
bool is_root_of(int a, int b) {
    if(a == (sqrt(b))) {
        return true;
    } else {
        return false;
    }
}