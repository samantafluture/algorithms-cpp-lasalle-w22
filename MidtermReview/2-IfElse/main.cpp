// Samanta Gimenez Fluture, 2022-02-20, If Else Conditionals

// Problem 1: Create the code in C++ based on this algorithm to ask for a numerical value and check:
// if the value is greater than zero, display “this is a positive number”.
// if it is equal to 0, display “equal to zero”
// if is smaller than zero, display “this is a negative number”.

/*
Algorithm name: CheckIfNegOrPos
Variables: num - integer

START
    Write "Enter a number"
    Read num
    IF (num > 0) THEN
        Write "This is a positive number"
        ELSE IF (num < 0) THEN
            Write "This is a negative number"
        ENDIF
    ELSE
        Write "Equal to zero"
    ENDIF
END
*/

/*
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number" << endl;
    cin >> num;

    if (num > 0) {
        cout << "This is a positive number" << endl;
    } else if (num < 0) {
        cout << "This is a negative number" << endl;
    } else {
        cout << "Equal to zero" << endl;
    }

    return 0;
}
*/

// Problem 2: Create the code in C++ based on this the algorithm to ask for a numerical value and then verify
// if this value is greater than 10, then subtract 5 from the entered value;
// if the value is smaller than 10, then add 3 to the entered value;
// display the entered and the calculated value.

/*
Algorithm name: AddOrSubstract
Variables: num, result - integers

START
    Write "Enter a number"
    Read num
    IF (num > 10) THEN
        result := (num-5)
    ELSE
        result := (num+3)
    ENDIF
    Write "The number entered is: " num
    Write "The result is: " result
END
*/

/*
#include <iostream>
using namespace std;

int main() {
    int num, result;

    cout << "Enter a number" << endl;
    cin >> num;

    if (num > 10) {
        result = (num-5);
    } else if (num < 10) {
        result = (num+3);
    } else {
        result = num;
    }

    cout << "Number entered: " << num << endl;
    cout << "Result: " << result << endl;

    return 0;
}
*/

// Problem 3: Write the code in C++ based on this algorithm that requires input two numbers, it will show the result of the
// addition if it is a difference between the two numbers or it will show the result of a multiplication if there is an
// equality between those two numbers. (use OR between conditions)

/*
Algorithm name: CompareValues_1
Variables: num1, num2, result - integers

START
    Write "Enter first number"
    Read num1
    Write "Enter second number"
    Read num2
    IF (num1 = num2) THEN
        result := (num1*num2)
        Write "The result of multiplication is: " result
    ELSE
        result := (num1+num2)
        Write "The result of addition is: " result
    ENDIF
END
*/

/*
#include <iostream>
using namespace std;

int main() {
    int num1, num2, result;

    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;

    if (num1 == num2) {
        result = (num1*num2);
        cout << "The result of multiplication is: " << result << endl;
    } else {
        result = (num1+num2);
        cout << "The result of addition is: " << result << endl;
    }

    return 0;
}
*/

// Problem 4: Write the code in C++ based on this algorithm that requires input two numbers,
// and if the result of addition is equal to the result of multiplication, display the values of those two numbers, else display a message.

/*
Algo_name: IsAddEqualToMulti
Declared variables: num1, num2, add, multi - numberical

START
    WRITE "Enter first number: "
    READ num1
    WRITE "Enter second number: "
    READ num2
    add := (num1+num2)
    multi := (num1*num2)
    IF (add = multi) THEN
        WRITE num1
        WRITE num2
    ELSE
        WRITE "Message"
    ENDIF
END
*/

/*
#include <iostream>
using namespace std;

int main() {
    double num1, num2, add, multi;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    add = num1 + num2;
    multi = num1 * num2;

    if (add == multi) {
        cout << "Value of num1 = " << num1 << endl;
        cout << "Value of num2 = " << num2 << endl;
    } else {
        cout << "Message" << endl;
    }

    return 0;
}
*/

// Problem 5: Write the code in C++ based on this algorithm that requires input three numbers,
// it will show the largest and the smallest number.

/*
Algo_name: FindMaxAndMin
Declared variables: num, max, min, i - numerical

START
    max := -99999
    min := 99999
    i := 0
    REPEAT 3 times
        ADD 1 to i
        WRITE "Enter number" + (i+1) + " : "
        READ num
        IF (num > max) THEN
            max := num
        ENDIF
        IF (num < min) THEN
            min := num
        ENDIF
        WRITE "Largest number" max
        WRITE "Smallest number" min
    END REPEAT
END
*/

/*
#include <iostream>
using namespace std;

int main() {
    double num;
    double max = -99999;
    double min = 99999;
    int i;

    for (i = 0; i < 3; i++)
    {
       cout << "Enter number " << i + 1 << " : ";
       cin >> num;

       if (num > max) {
           max = num;
       }

       if (num < min) {
           min = num;
       }
    }

    cout << "\nLargest number: " << max << endl;
    cout << "Smallest number: " << min << endl;

    return 0;
}
*/

// Problem 6: Write the code in C++ based on this algorithm that requires input 5 numbers, it will show the result of the
// addition if all 5 numbers are positive numbers else show an error message.

/*
Algo_name: SumAndCheckNegVal
Declared variables: num1, num2, num3, num4, num5 - numerical

START
    WRITE "Enter number 1"
    READ num1
    WRITE "Enter number 2"
    READ num2
    WRITE "Enter number 3"
    READ num3
    WRITE "Enter number 4"
    READ num4
    WRITE "Enter number 5"
    READ num5
    IF ((num1>0) AND (num2>0) AND (num3>0) AND (num4>0) AND (num5>0)) THEN
        WRITE "Sum = " (num1 + num2 + num3 + num4 + num5)
    ELSE
        WRITE "Error! At least one of the numbers entered is negative!"
    ENDIF
END
*/

/*
#include <iostream>
using namespace std;

int main()
{
    double num1, num2, num3, num4, num5;

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;
    cout << "Enter number 4: ";
    cin >> num4;
    cout << "Enter number 5: ";
    cin >> num5;

    if (num1 > 0 && num2 > 0 && num3 > 0 && num4 > 0 && num5 > 0)
    {
        cout << "The sum of all numbers are: " << (num1+num2+num3+num4+num5);
    }
    else
    {
        cout << "Error! At least one of the numbers entered is negative!";
    }

    return 0;
}
*/

// Problem 7: Write an algorithm that requires an input number, it will check if the value is between 1 and 30.
// If the value is biggest than 20, show the message: ”The value is between 20 and 30’’, else,  show the message:
// ”The value is between 1 and 20” (use either AND or OR between conditions). Display an error message if the value is outside of this range.

/*
Algo_name: CheckIfRange
Declared variables: num - numerical

START
    WRITE "Enter a number"
    READ num
    IF ((num > 0) AND (num < 31)) THEN
        IF (num > 19) THEN
            WRITE "The value is between 20 and 30"
        ELSE
            WRITE "The value is between 1 and 20"
        ENDIF
    ELSE
        WRITE "Number outside range 1-30"
    ENDIF
END
*/

/*
#include <iostream>
using namespace std;

int main()
{
    float num;

    cout << "Enter a number: ";
    cin >> num;

    if ((num > 0) && (num < 31))
    {
        if (num > 19)
        {
            cout << "The value is between 20 and 30";
        }
        else
        {
            cout << "The value is between 1 and 20";
        }
    }
    else
    {
        cout << "Number outside range 1-30";
    }

    return 0;
}
*/

// Problem 8: Write an algorithm that requires to input one positive number, and then it will display the next 10 values.
// Example: if we enter -6, display error message; if we enter 6, display the values 7, 8, 9, 10, 11, 12, 13, 14, 15, 16.

/*
Algo_name: PrintNext10Values
Declared variables: num, i - numerical

START
    WRITE "Enter a positive number"
    READ num
    IF (num > 0) THEN
        i := 0
        REPEAT 10 times
            ADD 1 to i
            WRITE (num + i) + " "
        END REPEAT
    ELSE
        WRITE "Error"
    ENDIF
END
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int num, i;

    cout << "Enter a positive number: ";
    cin >> num;

    if (num > 0) {
        for (i = 1; i < 11; i++)
        {
            cout << num+i << " ";
        }
    } else {
        cout << "Error!";
    }

    return 0;
}
*/

// Problem 9: Write an algorithm that requires to input one positive number between 1 to 10, then,
// it will calculate and display the sum from 1 to the entered number.
// Example: if we enter 0 or 13, display error message; if we enter 5, then the result will be 1 + 2 + 3 + 4 + 5 = 15

/*
Algo_name: 
Declared variables: 

START
    sum := 0
    WRITE "Enter a number"
    READ num
    IF ((num > 0) AND (num < 11)) THEN
        i := 1
        REPEAT 
            ADD 1 to i
            sum := sum + i
        UNTIL (i <= num)
        WRITE sum
    ELSE
        WRITE "Error"
    ENDIF
END
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int num, i;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num > 0 && num < 11) {
        for (i = 1; i <= num; i++)
        {
            sum += i;

            // cout << "i: " << i << endl;
            // cout << "sum: " << sum << endl;
        }

        cout << sum;      
    } else {
        cout << "Error";
    }

    return 0;
}
*/