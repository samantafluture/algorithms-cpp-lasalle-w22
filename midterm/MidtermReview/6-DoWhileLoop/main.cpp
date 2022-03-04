// Samanta Gimenez Fluture, 2022-02-20, Do While Loop

// Problem 1: Printing Numbers From 1 to 5

/*
#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    do
    {
        cout << i << " ";
        i++;

    } while (i < 6);

    return 0;
}
*/

// Problem 2: program to find the sum of positive numbers
// If the user enters a negative number, the loop ends
// the negative number entered is not added to the sum

#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;

    cout << "Enter a positive number to sum: ";
    cin >> num;

    do
    {
        sum += num;

        cout << "Enter another number: ";
        cin >> num;
        
    } while (num >= 0);

    cout << "The total sum is: " << sum << endl;

    return 0;
}