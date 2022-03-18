// Samanta Gimenez Fluture, 2022-03-18, Class work on arrays

/*
for (datatype varname : array)
{
    // varname is successively set to each element in the array
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 6, 8};

    for (int x : arr)
    {
        cout << x;
    }

    cout << endl;
    return 0;
}
*/

// Indexed variable as an argument
// Adds 5 to each employee's allowed number of vacation days.
#include <iostream>
using namespace std;

// function prototype
int adjust_days(int old_days);

// constant value
const int NUMBER_OF_EMPLOYEES = 4; // Constant (size of the array)

int main()
{
    int vacation[NUMBER_OF_EMPLOYEES], number; // array declaration

    cout << "Enter allowed vacation days for employees 1"
         << " through " << NUMBER_OF_EMPLOYEES << ":\n";

    for (number = 1; number <= NUMBER_OF_EMPLOYEES; number++) 
    {
        cin >> vacation[number-1]; 
    }

    for (number = 0; number <= NUMBER_OF_EMPLOYEES; number++)
    {
        vacation[number] = adjust_days(vacation[number]); // call the function with entered number of days (+ 5 days)
    }

    cout << "The revised number of vacation days are:\n";

    for (number = 1; number <= NUMBER_OF_EMPLOYEES; number++)
    {
        cout << "Employee number " << number
             << " vacation days = " << vacation[number-1] << endl; // display new number of vacation days (adjusted)
    }

    return 0;
}

// function definition
int adjust_days(int old_days)
{
    return (old_days + 5);
}

/*
Output:

Enter allowed vacation days for employees 1 through 3:
3
5
4
The revised number of vacation days are:
Employee number 1 vacation days = 8
Employee number 2 vacation days = 10
Employee number 3 vacation days = 9
*/