// Samanta Gimenez Fluture, 2022-02-18, Testing arrays

#include <iostream>
using namespace std;

int main()
{

    // declare and initialize array
    int mark[5] = {3, 5, 7, 9, 11};

    cout << "Initial array " << endl;
    // print array
    for (int i = 0; i < 5; i++)
    {
        cout << "mark value: " << mark[i] << " for index " << i << endl;
    }

    cout << "Enter a value to modify 3rd element of array: ";
    cin >> mark[2];

    cout << "Modified array " << endl;
    // print array again with modification
    for (int i = 0; i < 5; i++)
    {
        cout << "mark value: " << mark[i] << " for index " << i << endl;
    }

    cout << "Enter a value to modify 4th element of array and add 10 to all elements: ";
    cin >> mark[3];

    cout << "Modified array with added 10 " << endl;
    // print array again with modification
    for (int i = 0; i < 5; i++)
    {
        cout << "mark value: " << mark[i] + 10 << " for index " << i << endl;
    }

    // declare and initialize array of chars
    char str[4] = {'a', 'b', 'c', 'd'};

    cout << "Array of chars -> C-string " << endl;
    // print array of chars
    for (int i = 0; i < 4; i++)
    {
        cout << "mark value: " << str[i] << " for index " << i << endl;
    }

    return 0;
}
