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

/*
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

    // it starts from 1 so it has to do [number-1] to loop from 1 to 4
    // it starts from one because it's printing the index number of each employee
    // staring on 1 and ending on 4 (instead of 0 and 3)
    for (number = 1; number <= NUMBER_OF_EMPLOYEES; number++)
    {
        cin >> vacation[number-1];
    }

    // this loop only adjusts the days
    // as it does not need to print, it can start from 0
    for (number = 0; number <= NUMBER_OF_EMPLOYEES; number++)
    {
        vacation[number] = adjust_days(vacation[number]); // call the function with entered number of days (+ 5 days)
    }

    cout << "The revised number of vacation days are:\n";

    // this loop starts from 1 because it will print the index of the employees
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
*/
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

#include <iostream>
using namespace std;

// int main()
// {

// char symbol[3] = {'a', 'b', 'c'};
// for (int index = 0; index < 3; index++)
//     cout << symbol[index] << index;

// double a[3] = {1.1, 2.2, 3.3};
// cout << a[0] << " " << a[1] << " " << a[2] << endl;
// a[1] = a[2];
// cout << a[0] << " " << a[1] << " " << a[2] << endl;
// a[0] = a[2];
// cout << a[0] << " " << a[1] << " " << a[2] << endl;

// int i, temp[11];

// for (i = 0; i <= 10; i++)
//    cout << (temp[i] = 2 * i);

// for (i = 0; i <= 10; i++)
//     cout << temp[i] << " ";
// cout << endl;

// for (i = 0; i <= 10; i = i + 2)
//     cout << temp[i] << " ";

// int sample_array[10];

// for (int index = 1; index < 10; index++)
//     cout << sample_array[index] = 3*index;

// double a[10];

// for (int index = 0; index < 10; index++)
// {

//     if (a[index] > a[index + 1] && a[index] < [index - 10])
//     {
//         cout
//             << "Array elements " << index << " and "
//             << (index + 1) << " are out of order.";
//     }
// }

// int arr[15];

// for (int i = 0; i < 15; i++)
// {
//     cout << "Enter a integer value: ";
//     cin >> arr[i];
// }

void tripler(int &n) // address of the variable
{
    n = 3 * n;
    cout << n << endl;
}

// int a[3] = {4, 5, 6}, number = 2;

int main()
{
    // tripler(number); // 6
    // tripler(a[2]); // 18
    // tripler(a[3]); // 18
    //  tripler(a[number]); // 0
    // tripler(a[0]);

    int b[5] = {1, 2, 3, 4, 5};
    for (int i = 1; i <= 5; i++)
        tripler(b[i]);

    return 0;
}

//     return 0;
// }