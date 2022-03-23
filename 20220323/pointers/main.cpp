// Samanta Gimenez Fluture, 2022-03-23, Working with pointers

#include <iostream>
using namespace std;

int main()
{
    // int var1 = 3;
    // int var2 = 24;
    // int var3 = 17;
    // cout << "Address of var1: " << &var1 << endl;
    // cout << "Address of var2: " << &var2 << endl;
    // cout << "Address of var3: " << &var3 << endl;

    int *pointer, var; // pointer declaration
    var = 5;           // assign value 5 to var
    pointer = &var;    // pointer is going to have the address of var

    cout << "The value of var: " << var << endl;
    cout << "The address of Var &var: " << &var << endl;
    cout << "The value of *pointer: " << *pointer << endl;

    *pointer = 50;

    cout << "\nModifing value via var... \n"
         << endl;

    cout << "The value of var: " << var << endl;
    cout << "The address of Var &var: " << &var << endl;
    cout << "The value of *pointer: " << *pointer << endl;

    var = 25;

    cout << "\nModifing value via pointer... \n"
         << endl;

    cout << "The value of var: " << var << endl;
    cout << "The address of Var &var: " << &var << endl;
    cout << "The value of *pointer: " << *pointer << endl;
    return 0;
}