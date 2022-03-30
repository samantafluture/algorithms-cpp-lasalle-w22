// Samanta Gimenez Fluture, 2022-03-30, Review of Pointers

/*
Pointers

int var;
var = 10;
int *pvar;
pvar = &var;
*pvar = 25;
var = 35;
cout << *pvar << " - " << var << endl;
35 - 35

var
- ---------------- -
|  10 -> 25 -> 35  | 2000
- ---------------- -
4 bytes

pvar
- ---------------- -
|  2000            | 2008
- ---------------- -
4 bytes

> why to use pointers?
> because even if you have local variables inside functions,
> with pointers you can access from anywhere,
> because you're accessing the address of it

*/

#include <iostream>
using namespace std;

void tripler(int &n) // address of n
{
    n = 3 * n;
}


int main()
{
    int a[3] = {4, 5, 6}, number = 2;

    cout << "number value: " << number << endl; // 2 - initial value

    tripler(number); // function call

    cout << "number value: " << number << endl; // 6 - multiply 2 by 3

    tripler(number); // function call

    cout << "number value: " << number << endl; // 18 - multiply 6 by 3

    return 0;
}

/* explanation:
the local variable is being modified outside
of the function because of the its address / pointer

if you remove & (address)
all the results will be 2 2 2
beause you will be passing by value
and not by address
then the local variable can't be modified

if you put the value outside all the functions
it will be a global value
*/