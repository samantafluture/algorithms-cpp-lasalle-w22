// Read the value the user entered and print it out

#include <iostream>
using namespace std;

int main() {
    // int number; // show integer values, even if you input a float, shows only the integer part
    // char number; // shows only one character, the first one, can be a letter or a number
    float number; // shows a decimal number, in order to be more precise

    cout << "Enter an integer: ";
    cin >> number;

    cout << "You entered " << number;

    return 0; // finish with the instructions inside that block
}