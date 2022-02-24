// Samanta Gimenez Fluture, 2022-02-20, Switch Statement

// Problem 1: Create an algorithm that will ask to enter an integer number between 1 and 12; then, by using
// the structure switch to print out the name of the month.
// Example: 1 = “Jan", 2 = “Feb” … 12 = “Dec”. For any other value, print out a message:" Enter a
// number between 1 to 12 ".

/*
Algo_name: PrintMonth
Declared variables: ans - numerical

START
    WRITE "Enter a number between 1 and 12: "
    READ ans
    SWITCH ans
        case 1
            WRITE "Jan"
            break
        ...
        default
            WRITE "Error"
            break
    END SWITCH
END
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int ans;

    cout << "Enter a number between 1 and 12: ";
    cin >> ans;

    switch(ans) {
        case 1:
            cout << "Jan";
            break;
        case 2:
            cout << "Feb";
            break;
        case 3:
            cout << "Mar";
            break;
        case 4:
            cout << "Apr";
            break;
        case 5:
            cout << "May";
            break;
        case 6:
            cout << "Jun";
            break;
        case 7:
            cout << "Jul";
            break;
        case 8:
            cout << "Aug";
            break;
        case 9:
            cout << "Sep";
            break;
        case 10:
            cout << "Oct";
            break;
        case 11:
            cout << "Nov";
            break;
        case 12:
            cout << "Dec";
            break;
        default:
            cout << "Error, please input number between 1 and 12!";
            break;
    }

    return 0;
}
*/

// Problem 2: Create an algorithm that is demanding an integer number between 1 and 7; then, by using the
// structure switch to print out the name of the weekday.
// Example: 1 ="Monday", … , 5 ="Friday", 6 and 7 = " Weekend".

/*
Algo_name: PrintWeekDay
Declared variables: ans - numberical

START
    WRITE "Enter a number between 1 and 7: "
    READ ans
    SWITCH ans
        case 1
            WRITE "Mon"
            break
        ...
        default
            WRITE "Error"
            break
    END SWITCH
END
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int ans;

    cout << "Enter a number between 1 and 7: ";
    cin >> ans;

    switch(ans) {
        case 1:
            cout << "Mon";
            break;
        case 2:
            cout << "Tue";
            break;
        case 3:
            cout << "Wed";
            break;
        case 4:
            cout << "Thu";
            break;
        case 5:
            cout << "Fri";
            break;
        case 6:
            cout << "Weekend";
            break;
        case 7:
            cout << "Weekend";
            break;
        default:
            cout << "Error, please input number between 1 and 7!";
            break;
    }

    return 0;
}
*/

// Problem 3: create a simple calculator that asks for two numbers and the operator sign
// User choose the operations via operator sign

/*
Algo_name: CalculateTwoNumbers
Declared variables: num1, num2 - numerical / ans - char

START
    WRITE "Enter first number: "
    READ num1
    WRITE "Enter second number: "
    READ num2
    WRITE "Choose the operation (+, -, *, /): "
    READ ans
    SWITCH ans
        case '+'
            WRITE num1+num2
            break
        case '-'
            WRITE num1-num2
            break
        case '*'
            WRITE num1*num2
            break
        case '/'
            IF (ans == 0) THEN
                WRITE "Not possible to divide by zero"
            ELSE
                WRITE num1/num2
            ENDIF
            break
        default
            "Error"
            break
    END SWITCH
END
*/

/*
#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char ans;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose the operation (+, -, *, /): ";
    cin >> ans;

    switch (ans)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/':
        if (num2 == 0)
        {
            cout << "Not possible to divide by zero";
        }
        else
        {
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        }
        break;
    default:
        cout << "Error! Please type + or - or * or / to calculate!";
        break;
    }

    return 0;
}
*/

// Problem 4: Create a menu by using switch structure to communicate with the user and test one of the 3
// exercises and have the option to quit the application.

/*
Algo_name:
Declared variables:

START

END
*/

/*
#include <iostream>
using namespace std;

int main()
{
    char ans;
    int num, i;
    int sum = 0;

    cout << "Enter 1 to check algorithm PrintSum\n"
         << "Enter 2 to check algorithm PrintNext10Values\n"
         << "Enter 3 to quit\n";

    cin >> ans;

    switch (ans)
    {
    case '1':

        cout << "Enter a number: ";
        cin >> num;

        if (num > 0 && num < 11)
        {
            for (i = 1; i <= num; i++)
            {
                sum += i;
            }
            cout << sum;
        }
        else
        {
            cout << "Error";
        }
        break;
    case '2':

        cout << "Enter a positive number: ";
        cin >> num;

        if (num > 0)
        {
            for (i = 1; i < 11; i++)
            {
                cout << num + i << " ";
            }
        }
        else
        {
            cout << "Error!";
        }
        break;
    case '3':
        cout << "Good-Bye!";
        break;
    default:
        cout << "Invalid input!";
        break;
    }
    return 0;
}
*/