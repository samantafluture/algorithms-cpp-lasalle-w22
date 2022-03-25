// Samanta Gimenez Fluture, 2022-03-25, Working with pointers in arrays

/*
- pointers can also store the address of cells of an array
- stores the address of the first element of the array
- the addresses for the rest of the array elements are given by &arr[1], &arr[2], &arr[3], and &arr[4].

    ptr + 1 is equivalent to &arr[1];
    ptr + 2 is equivalent to &arr[2];
    ptr + 3 is equivalent to &arr[3];
    ptr + 4 is equivalent to &arr[4];

    *ptr == arr[0];
    *(ptr + 1) is equivalent to arr[1];
    *(ptr + 2) is equivalent to arr[2];
    *(ptr + 3) is equivalent to arr[3];
    *(ptr + 4) is equivalent to arr[4];

-  the address between ptr and ptr + 1 differs by 4 bytes (when ptr points to int)
*/

#include <iostream>
using namespace std;

int main()
{
    float arr[3];
    float *ptr; // declare pointer variable

    cout << "Displaying address using arrays: " << endl;

    // print addresses of all array elements
    for (int i = 0; i < 3; ++i)
    {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    ptr = arr; // ptr = &arr[0]

    cout << "\nDisplaying address using pointers: " << endl;

    // print addresses of all array elements
    // using pointer notation
    for (int i = 0; i < 3; ++i)
    {
        cout << "ptr + " << i << " = " << ptr + i << endl;
    }

    // insert data using pointer notation
    cout << "\nPopulating an array of 3 elements" << endl;

    for (int i = 0; i < 3; ++i)
    {
        cout << "Enter element index " << i << " : ";

        // store input number in arr[i]
        // used the pointer notation to store the numbers
        // this code is equivalent to: cin >> arr[i]
        cin >> *(arr + i);
    }

    // print data using pointer notation
    cout << "\nDisplaying values of the array: " << endl;

    for (int i = 0; i < 3; ++i)
    {
        // display value of arr[i]
        // this code is equivalent to: cout << arr[i] << endl
        cout << *(arr + i) << endl;
    }

    // print data using pointer incrementing inside loop
    cout << "\nDisplaying values of the array with ptr++: " << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;
        ptr++; // point to the next location
    }

    return 0;
}

/*
Output:

Displaying address using arrays: 
&arr[0] = 0x7ffd18db3afc
&arr[1] = 0x7ffd18db3b00
&arr[2] = 0x7ffd18db3b04

Displaying address using pointers: 
ptr + 0 = 0x7ffd18db3afc
ptr + 1 = 0x7ffd18db3b00
ptr + 2 = 0x7ffd18db3b04

Populating an array of 3 elements
Enter element index 0 : 45
Enter element index 1 : 78
Enter element index 2 : 5

Displaying values of the array: 
45
78
5

Displaying values of the array with ptr++: 
Value of var[0] = 45
Value of var[1] = 78
Value of var[2] = 5

*/