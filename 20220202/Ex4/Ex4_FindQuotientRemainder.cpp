#include <iostream>
using namespace std;

int main() {
    int divisor, dividend, quotient, remainder;

    cout << "Enter a dividend: ";
    cin >> dividend;

    cout << "Enter a divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor; // what left after dividing dividend by divisor

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;

    return 0;
}

/* Example of expected output:

Enter a dividend: 13
Enter a divisor: 4
Quotient = 3
Remainder = 1

*/