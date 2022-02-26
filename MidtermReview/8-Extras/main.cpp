// https://www.youtube.com/watch?v=Ko-Q0Y5-b3k

// Problem 1: Find n^n (integers)

/*
#include <iostream>
using namespace std;

int main()
{
    int num, i;
    int result = 1;

    cout << "Enter a number: ";
    cin >> num;

    for (i = 1; i <= num; i++)
    {
        result *= num;
    }

    cout << result;

    return 0;
}
*/

// Problem 2: read sequence of real values from the user; stops by print "FINISHED" when the sum exceed 100

/*
START
    sum := 0
    REPEAT
        WRITE "Enter a number: "
        READ num
        sum := sum + num
        WRITE sum
    UNTIL (sum < 100)
    WRITE "Finished"
END
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int i;
    double num;
    double sum = 0;

        do
        {
            cout << "Enter a number: ";
            cin >> num;

            sum += num;
            cout << "Sum = " << sum << endl;

        } while (sum < 100);

    cout << "Finished";

    return 0;
}
*/

// Problem 3: read sequence of positive integers, show multi and sum when enters negative value

/*
START

END
*/

/*
// answer 1
#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int multi = 1;
    int num = 0;

    do
    {
        cout << "Enter a positive number: ";
        cin >> num;

        if (num <= 0) {
            break;
        }

        sum += num;
        multi *= num;
    } while (num > 0);

    cout << "Multiplication: " << multi;
    cout << "Sum: " << sum;

    return 0;
}
*/

/*
// answer 2
#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int multi = 1;
    int num = 1;

    cout << "Enter a positive number: ";
    cin >> num;

    while (num > 0)
    {
        sum += num;
        multi *= num;

        cout << "Enter another positive number: ";
        cin >> num;
    }

    cout << "Multiplication: " << multi;
    cout << "Sum: " << sum;

    return 0;
}
*/

// Problem 4: reads positive integer from user, shows its strict divisors

/*
#include <iostream>
using namespace std;

int main()
{
    int num, i;

    cout << "Enter a number: ";
    cin >> num;

    for (i = 1; i < num/2; i++)
    {
        if (num % i == 0)
        {
            cout << i << endl;
        }

    }

    return 0;
}
*/

// Problem 5: reads positive integer from user, indicate if n is perfect
// n = sum of its strict divisors

/*
#include <iostream>
using namespace std;

int main()
{
    int num, i;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (i = 1; i <= (num / 2); i++)
    {
        if (num % i == 0)
        {
            sum += i;
            cout << sum << " ";
        }
    }

    if (sum == num)
    {
        cout << "\nPerfect number";
    }
    else
    {
        cout << "\nNot perfect";
    }
    return 0;
}
*/

// Problem 6: Check Whether Number is Even or Odd using if else

/*
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n << " is even.";
    }
    else
    {
        cout << n << " is odd.";
    }

    return 0;
}
*/

// Problem 7: Sum of Natural Numbers using loop
/*
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }

    cout << "Sum = " << sum;
    return 0;
}
*/

// Problem 8: Find Factorial
// 5! = 1 * 2 * 3 * 4 * 5 = 120
// n! = 1 if n = 0 or n = 1

/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    long double f = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            f *= i;
        }
        cout << "Factorial of " << n << " = " << f;
    }

    return 0;
}
*/

// Problem 8: Check Prime Number
// 0 and 1 are not prime numbers

/*
#include <iostream>
using namespace std;

int main()
{

    int i, n;
    bool is_prime = true;

    cout << "Enter a positive integer: ";
    cin >> n;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
        is_prime = false;
    }

    // loop to check if n is prime
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
    {
        cout << n << " is a prime number";
    }
    else
    {
        cout << n << " is not a prime number";
    }

    return 0;
}
*/

// Problem 9: Display Prime Numbers Between two Intervals

#include <iostream>
using namespace std;

int main()
{

    int low, high, i;
    bool is_prime = true;

    cout << "Enter two numbers (intervals): ";
    cin >> low >> high;

    cout << "\nPrime numbers between " << low << " and " << high << " are: " << endl;

    while (low < high)
    {
        is_prime = true;

        // 0 and 1 are not prime numbers
        if (low == 0 || low == 1)
        {
            is_prime = false;
        }

        for (i = 2; i <= low / 2; ++i)
        {
            if (low % i == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
            cout << low << " ";

        ++low;
    }

    return 0;
}