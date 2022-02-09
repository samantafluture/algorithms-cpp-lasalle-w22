// Samanta Gimenez Fluture, 2022-02-09, Testing case switch

#include <iostream>
using namespace std;

// Exercise 4.2
// Algorithm to print out the name of the week

/*
int main()
{
    int num1;

    cout << "Enter a number between 1 and 7: ";
    cin >> num1;

    switch (num1)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Error! Please enter a number between 1 and 7!";
        break;
    }
    
    return 0;
}
*/

/*
Expected output:

Enter a number between 1 and 7: 7
Sunday
*/

/******************************************************/
// Exercise 4.1
// Algorithm to print out the name of the month


int main()
{
    int num1;

    cout << "Enter a number between 1 and 12: ";
    cin >> num1;

    switch (num1)
    {
    case 1:
        cout << "January";
        break;
    case 2:
        cout << "February";
        break;
    case 3:
        cout << "March";
        break;
    case 4:
        cout << "April";
        break;
    case 5:
        cout << "May";
        break;
    case 6:
        cout << "June";
        break;
    case 7:
        cout << "July";
        break;
    case 8:
        cout << "August";
        break;
    case 9:
        cout << "September";
        break;
    case 10:
        cout << "October";
        break;
    case 11:
        cout << "November";
        break;
    case 12:
        cout << "December";
        break;
    default:
        cout << "Error! Please enter a number between 1 and 12!";
        break;
    }

    return 0;
}


/*
Expected output:

Enter a number between 1 and 12: 5
May
*/