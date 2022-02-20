// Samanta Gimenez Fluture, 2022-02-20, Simple Algorithms

// Problem 1: Enter a numerical value and printout the next value.

/*
Algorithm Name: NextValue
Variables: num - integer

START
    Write "Enter a value: "
    Read num
    Write "The next value of " num " is: " (num+1)
END
*/

/*
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a value: ";
    cin >> num;

    cout << "The next value of " << num << " is: " << num+1 << endl;

    return 0;
}
*/

// Problem 2: Create the algorithm to display the result of the addition of two numbers

/*
Algorithm name: AddTwo
Variables: num1, num2 - integers

START
    Write "Enter first number"
    Read num1
    Write "Enter second number"
    Read num2
    Write "The result of " num1 " + " num2 " = " (num1+num2)
END
*/


#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;

    cout << "The result of " << num1 << " + " << num2 << " = " << num1+num2;

    return 0;
}


// Problem 3:  Enter a numerical value and printout (display) the next and the previous value
// Use the variables declared in the instruction number 1 and complete the algorithm.

// Problem 4: Display the result of the addition, subtraction, multiplication, and division of two numbers. 
// Use the variables declared in the instruction number 1 and complete the algorithm.