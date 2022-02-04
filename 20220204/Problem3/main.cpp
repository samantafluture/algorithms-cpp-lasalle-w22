#include <iostream>

using namespace std;

// EX. 3 - SWAP VARIABLES WITHOUT TEMPORARY VARIABLE

int main()
{
    int a = 5, b = 10;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;
    
    a = a + b; // a = 5 + 10 (= 15)
    b = a - b; // b = 15 - 10 (= 5)
    a = a - b; // a = 15 - 5 (= 10)
    
    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;
    
    return 0;
}

/*
EX. 3 - EXPECTED OUTPUT

Before swapping.
a = 5, b = 10

After swapping.
a = 10, b = 5
*/

/******************************************************************************/
/*
EX. 2 - SWAP NUMBERS USING TEMPORARY VARIABLE

int main()
{
    int a = 5, b = 10, temp;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << ", temp = " << temp << endl;
    
    temp = a; // preserve value a, space in memory
    a = b; // now a = 10
    b = temp; // now b = 5
    
    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << ", temp = " << temp << endl;
    
    return 0;
}
*/

/*
EX. 2 - EXPECTED OUTPUT

Before swapping.
a = 5, b = 10, temp = 0

After swapping.
a = 10, b = 5, temp = 5
*/

/******************************************************************************/
/* EX. 1 - FIND SIZE OF VARIABLES

int main() {

    // Check size of different types os variables
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of boolean: " << sizeof(bool) << " byte" << endl;

    // Modifications
    char A = 'a';
    bool test = false;

    cout << "Size of variable char A: " << sizeof(A) << " byte" << endl;
    cout << "Size of variable boolean test: " << sizeof(test) << " byte" << endl;

    return 0;
}

*/

/* 
EX 1 - EXPECTED OUTPUT

Size of char: 1 byte
Size of int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of boolean: 1 byte

Size of variable char A: 1 byte
Size of variable boolean test: 1 byte
*/