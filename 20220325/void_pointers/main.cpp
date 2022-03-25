// Samanta Gimenez Fluture, 2022-03-25, Working with void pointers

/*
- pointers stores the address memory of a variable
- type of the variable should be the same as the pointer
- or the pointer can be a pointer to void -> type void to pointer
- void pointer is a generic pointer that is used when we don't know the data type of the variable that the pointer points to
- use static_cast to get the content of void pointer
*/

#include <iostream>
using namespace std;

int main()
{
    void *ptr;
    float *fptr;
    float f = 2.3;

    // assign float address to void pointer
    ptr = &f;
    // cout << *ptr << endl; // Error: ‘void*’ is not a pointer-to-object type
    // use type casting to print pointer content
    // here we convert void* to float*
    cout << "content of void pointer: " << *(static_cast<float *>(ptr)) << endl;

    // assign float address to float pointer
    fptr = &f;
    cout << "content of float pointer: " << *fptr << endl; // Valid: 2.3

    return 0;
}