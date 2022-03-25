// Samanta Gimenez Fluture, 2022-03-25, Working with pointers in functions

/*
when we call the func2() function in main() by passing the variable num as
an argument, we are actually passing the address of num variable instead of
the value 5
*/

#include <iostream>
using namespace std;

void func1(int numVal)
{
    numVal = numVal * 3;
    cout << numVal;
}

// function that takes reference as parameter
void func2(int &numRef)
{
    numRef = numRef * 3;
    cout << numRef;
}

int main()
{
    int num = 5;

    cout << "\nnum: " << num;
    cout << "\nfunc1: ";
    func1(num);

    cout << "\nnum: " << num;
    cout << "\nfunc2: ";
    func2(num);

    return 0;
}

/*
Output:

num: 5
func1: 15
num: 5
func2: 15      
*/