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

// Problem 5: Write the code in C++ based on this algorithm that requires input three numbers, 
// it will show the largest and the smallest number.

// Problem 6: Write the code in C++ based on this algorithm that requires input 5 numbers, it will show the result of the
// addition if all 5 numbers are positive numbers else show an error message.

// Problem 7: Write an algorithm that requires an input number, it will check if the value is between 1 and 30. 
// If the value is biggest than 20, show the message: ”The value is between 20 and 30’’, else,  show the message: 
// ”The value is between 1 and 20” (use either AND or OR between conditions). Display an error message if the value is outside of this range.

// Problem 8: Write an algorithm that requires to input one positive number, and then it will display the next 10 values. 
// Example: if we enter -6, display error message; if we enter 6, display the values 7, 8, 9, 10, 11, 12, 13, 14, 15, 16.

// Problem 9: Write an algorithm that requires to input one positive number between 1 to 10, then, 
// it will calculate and display the sum from 1 to the entered number. 
// Example: if we enter 0 or 13, display error message; if we enter 5, then the result will be 1 + 2 + 3 + 4 + 5 = 15
