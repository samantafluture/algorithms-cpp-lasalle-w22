#include <iostream>

using namespace std;

int main() {

    // 1- Check size of different types os variables
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of boolean: " << sizeof(bool) << " byte" << endl;

    // 1- Modifications
    char A = 'a';
    cout << "Size of variable char A: " << sizeof(A) << " byte" << endl;

    return 0;
}

/*
1 - Expected output:

Size of char: 1 byte
Size of int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of boolean: 1 byte

Size of variable char A: 1 byte

*/