// Algorithm: increment
// Enter a numerical value and printout the next and the previous values

#include <iostream>

using namespace std;

int main() {
    int x, y, z; // declare 3 integers variables

    cout << "Enter an integer number: ";
    cin >> x; 

    y = x + 1; // increment
    cout << "The next value of " << x << " is " << y << endl;

    z = x - 1; // decrement
    cout << "The previous value of " << x << " is " << z << endl;

    return 0;
}

/*
Expected output:

Enter an integer number: 4
The next value of 4 is 5
The previous value of 4 is 3
*/

