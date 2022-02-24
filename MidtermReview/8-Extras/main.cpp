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