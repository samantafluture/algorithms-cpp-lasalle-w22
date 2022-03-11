// Samanta Gimenez Fluture, 2022-03-11, Studying Strings

#include <iostream>

using namespace std;

int main()
{
    char str[100]; // array of 100 chars

    cout << "Enter a string: ";
    // cin >> str
    cin.get(str, 100); // get 100 chars of string str
    
    cout << "You entered: " << str << endl;
    
    /*
    cout << "\nEnter another string: ";
    cin >> str;
    
    cout << "You entered: " << str << endl;
    */

    return 0;
}