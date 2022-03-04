// Samanta Gimenez Fluture, 2022-02-20, For Loop

// Problem 1: Printing Numbers From 1 to 5

/*
Algo_name: PrintOneToFive
Declared variables: i - numerical

START
    i := 1
    REPEAT 5 times
        ADD 1 to i
        WRITE i
    END REPEAT
END
*/

/*
#include <iostream>
using namespace std;

int main() {
    int i;

    for (i = 1; i < 6; i++)
    {
        cout << i << " ";
    }

    return 0;
}
*/

// Problem 2: C++ program to find the sum of first n natural numbers
// positive integers such as 1,2,3,...n are known as natural numbers

/*
Algo_name: SumOfN
Declared variables: i, num, sum - numericals

START
   sum := 0
   i := 1
   WRITE "How many numbers?"
   READ num
   REPEAT num times
    ADD 1 to i
    sum := sum + i
   END REPEAT
   WRITE "The sum of the first " + num + " natural positive numbers is: " + sum
END
*/

/*
#include <iostream>
using namespace std;

int main() {
    int i, num;
    int sum = 0;

    cout << "How many numbers? ";
    cin >> num;

    for (i = 1; i <= num; i++)
    {
        sum += i;
    }

    cout << "The sum of the first " << num << " natural positive numbers is: " << sum;

    return 0;
}
*/

// Problem 3: Using the template, write a complete C++ program that:
// 1. outputs the numbers 0 to 200 with the step of 10 if the user choose the option 1(one per line)
// 2. outputs the numbers 0 to 50 with the step of 5 if the user choose the option 2(one per line)
// 3. outputs the numbers 0 to 20 with the step of 1 if the user choose the option 3(two values per line)
// 4. Allow to exit if the user choose the option 4.

/*
Algo_name: PrintNumberViaMenu
Declared variables: ans - char / i - numerical

START
    WRITE "Enter 1 to output 0 to 200\n Enter 2 to output 0 to 50\n Enter 3 to output 0 to 20\n Enter 4 to quit\n"
    READ ans
    SWITCH ans
        case '1'
            i := 0
            REPEAT 200 times
                ADD 10 to i
                WRITE i
            END REPEAT
            break
        case '2'
            i := 0
            REPEAT 50 times
                ADD 5 to i
                WRITE i
            END REPEAT
            break
        case '3'
            i := 0
            REPEAT 20 times
                ADD 1 to i
                WRITE i
            END REPEAT
            break
        case '4'
            WRITE "Bye"
            break
        default
            WRITE "Invalid input!"
            break
    END SWITCH
END
*/

/*
#include <iostream>
using namespace std;

int main()
{
    char ans;
    int i;

    cout << "Enter 1 to output 0 to 200\n"
         << "Enter 2 to output 0 to 50\n"
         << "Enter 3 to output 0 to 20\n"
         << "Enter 4 to quit\n";
    cin >> ans;

    switch (ans)
    {
    case '1':
        for (i = 0; i < 201; i += 10)
        {
            cout << i << endl;
        }
        break;
    case '2':
        for (i = 0; i < 51; i += 5)
        {
            cout << i << endl;
        }
        break;
    case '3':
        for (i = 0; i < 21; i++)
        {
            if (i % 2 == 1) {
                cout << i << endl;
            } else {
                cout << i << " ";
            }
        }
        break;
    case '4':
        cout << "Bye!";
        break;
    default:
        cout << "Invalid input!";
        break;
    }
}
*/

// Problem 4: Create the code in C++ by using the loop For to describe an algorithm that:
// - Ask for a number (int) we show a message: Enter a number: and if it is smaller than 0, we
// show a message: Smaller than 0! for 5 times, if the number is bigger than 0, we show a
// message: Bigger than 0! for 7 times, and if the number is equal to 0, we show a message:
// Number is 0! for 3 times.

/*
Algo_name: CompareWithZero
Declared variables: i, num - numerical

START
    WRITE "Enter a number"
    READ num
    i := 0
    IF (num < 0) THEN
        REPEAT 5 times
            ADD 1 to i
            WRITE "Smaller than 0!"
        END REPEAT
        ELSE IF (num > 0) THEN
            REPEAT 7 times
                ADD 1 to i
                WRITE "Bigger than 0!"
        END REPEAT
        ENDIF
    ELSE
        REPEAT 3 times
            ADD 1 to i
            WRITE "Number is 0!"
        END REPEAT
    ENDIF
END
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int i, num;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
    {
        for (i = 0; i < 5; i++)
        {
            cout << "Smaller than 0!" << endl;
        }
    }
    else if (num > 0)
    {
        for (i = 0; i < 7; i++)
        {
            cout << "Bigger than 0!" << endl;
        }
    }
    else
    {
        for (i = 0; i < 3; i++)
        {
            cout << "Number is 0!" << endl;
        }
    }
}
*/

// Problem 5: Create the code in C++ by using the loop of your choice to describe an algorithm that:
//  Ask for a number (int) by showing a message: Enter a number between 1 and 18: », and then,
// if is true, writes the result of the multiplication of this number with 10, 11, and 12. If the number
// is less than 1 or greater than 18, we'll ask so many times until the user enter a valid number (use
// do – while loop).
// It will bring up this message if the input number is 10:
// The result is : 10 x 10 = 100
// The result is : 10 x 11 = 110
// The result is : 10 x 12 = 120

/*
Algo_name: MultIfTrue
Declared variables: num, i - numerical

START
    REPEAT
        WRITE "Enter a number between 1 and 18:"
        READ num
        IF ((num > 0) AND (num < 19)) THEN
            i := 10
            REPEAT 3 times
                ADD 1 to i
                WRITE "The result is : " + num + " x " + i + " = " + (num * i)
            END REPEAT
        ENDIF
    UNTIL ((num < 1) OR (num > 18))
END
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int num, i;

    do
    {
        cout << "Enter a number between 1 and 18: ";
        cin >> num;

        if (num > 0 && num < 19)
        {

            for (i = 10; i < 13; i++)
            {
                cout << "The result is : " << num << " x " << i << " = " << num * i << endl;
            }
        }

    } while (num < 1 || num > 18);

    return 0;
}
*/

// Problem 6: Create an application (a .cpp file) using Visual Studio and C++ to describe an algorithm:-which
// requires an integer between 1 and 15, and that calculates the sum of the positive integers up to
// this number. For example, if you enter 5, the program must calculate: 1 + 2 + 3 + 4 + 5 = 15
// NB: you want to show only the result, not the decay of the calculation.
// The result is: = 15
// Then, we'll have a continue message appear: Enter y or Y for continue, or anything else to quit
// and if so, asked to enter another number, if no, two lines below display the message: "Now we
// leave the application!"
// use the following loop structure:
// do{ ... }while((ans =='y')||(ans =='Y'))

/*
Algo_name: SumNumbers
Declared variables: ans - char / int, i, sum - numerical

START
    sum := 0
    REPEAT
        WRITE "Enter a number between 1 and 15: "
        READ num
        i := 1
        REPEAT 
            ADD 1 to i
            sum := sum + i
        UNTIL (i <= num)
        WRITE "The result is" sum
        WRITE "Enter y or Y for continue, or anything else to quit"
        READ ans
    UNTIL ((ans == 'y') || (ans == 'Y'))
    WRITE "\n\nNow we leave the application!"
END
*/

/*
#include <iostream>
using namespace std;

int main()
{
    char ans;
    int i, num;
    int sum = 0;

    do
    {
        cout << "Enter a number between 1 and 15: ";
        cin >> num;

        for (i = 1; i <= num; i++)
        {
            sum += i;
        }

        cout << "The result is: " << sum << endl;
        
        cout << "Enter y or Y for continue, or anything else to quit" << endl;
        cin >> ans;

    } while (ans == 'y' || ans == 'Y');

    cout << "\n\nNow we leave the application!" << endl;

    return 0;
}
*/


// Problem 7: Create an application (.cpp file) using the Visual Studio tool and the C++ language to describe an
// algorithm that:
// -Asks to enter two numbers "Enter number 1:" and "Enter the number 2:" and which calculates
// the sum, the difference, the product and the result of the division of two numbers. For example,
// if we have 5.1 and 10.3, the program must calculate and display:
// Addition: 5.1 + 10.3 = 15.400
// Subtraction: 5.1-10.3 = - 5.200
// Multiplication: 5.1 * 10.3 = 52.530
// Division: 5.1 / 10.3 = 0.495
// Then, we'll have a continue message appear: Enter y or Y for continue, or anything else to quit
// and if so, asked to enter another number, if no, two lines below display the message: "Now we
// leave the application!"
// use the following magic formula:
// cout.setf(ios::fixed);
// cout.setf(ios::showpoint);
// - cout.precision(3);

/*
Algo_name: SimpleCalc
Declared variables: ans - char / num1, num2 - numerical

START
    REPEAT 
        WRITE "Enter number 1: "
        READ num1
        WRITE "Enter number 2: "
        READ num2
        WRITE "Addition: " + num1 + " + " + num2 + " = " + (num1+num2)
        WRITE "Subtraction: " + num1 + " - " + num2 + " = " + (num1-num2)
        WRITE "Multiplication: " + num1 + " * " + num2 + " = " + (num1*num2)
        WRITE "Division: " + num1 + " / " + num2 + " = " + (num1/num2)
        WRITE "Enter y or Y for continue, or anything else to quit"
        READ ans
    UNTIL ((ans == 'y') || (ans == 'Y'))
    WRITE "\n\nNow we leave the application!"
END
*/


#include <iostream>
using namespace std;

int main()
{
    char ans;
    double num1, num2;

    do
    {
        cout << "Enter number 1: ";
        cin >> num1;

        cout << "Enter number 2: ";
        cin >> num2;

        cout << "Addition: " << num1 << " + " << num2 << " = " << num1+num2 << endl;
        cout << "Subtraction: " << num1 << " - " << num2 << " = " << num1-num2 << endl;
        cout << "Multiplication: " << num1 << " * " << num2 << " = " << num1*num2 << endl;
        cout << "Division: " << num1 << " / " << num2 << " = " << num1/num2 << endl;

        cout << "Enter y or Y for continue, or anything else to quit" << endl;
        cin >> ans;

    } while (ans == 'y' || ans == 'Y');
    
    cout << "\n\nNow we leave the application!";

    return 0;
}
