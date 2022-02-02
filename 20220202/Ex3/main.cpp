// Read two values from the user and print the sum of these two values

#include <iostream>

using namespace std;

int main() {
    int firstNumber, secondNumber, sumOfTwoNumbers;

    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    // Sum of two numbers is stored in sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;

    // Prints sum
    cout << firstNumber << " + " << secondNumber << " = " << sumOfTwoNumbers;

    return 0;
}