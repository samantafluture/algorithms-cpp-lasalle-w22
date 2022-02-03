// Algorithm: adding_two
// Create the algorithm to display the result of the addition of two numbers

#include <iostream>

using namespace std;

int main() {
    float x, y, z; // declare 3 float variables

    cout << "Enter a number: ";
    cin >> x;

    cout << "Enter another number: ";
    cin >> y;

    z = x + y; // addition
    cout << "The value of adding " << x << " with " << y << " is " << z << endl;

    return 0;
}

/*
Expected output:

Enter a number: 1.5
Enter another number: 5.7
The value of adding 1.5 with 5.7 is 7.2
*/