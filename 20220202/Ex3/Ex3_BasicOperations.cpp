// Read two values from the user and print basic operations 

#include <iostream>

using namespace std;

int main() {
    float firstNumber, secondNumber, total;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    // calculate sum and print it
    total = firstNumber + secondNumber;
    cout << firstNumber << " + " << secondNumber << " = " << total << endl;

    // calculate substraction and print it
    total = firstNumber - secondNumber;
    cout << firstNumber << " - " << secondNumber << " = " << total << endl;
    
    // calculate multiplication and print it
    total = firstNumber * secondNumber;
    cout << firstNumber << " * " << secondNumber << " = " << total << endl;

    // calculate division and print it
    total = firstNumber / secondNumber;
    cout << firstNumber << " / " << secondNumber << " = " << total << endl;

    return 0;
}

/* Example of expected output:

Enter two numbers: 12.3
485.4
12.3 + 485.4 = 497.7
12.3 - 485.4 = -473.1
12.3 * 485.4 = 5970.42
12.3 / 485.4 = 0.0253399 

*/