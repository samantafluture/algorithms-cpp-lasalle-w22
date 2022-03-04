// Samanta Gimenez Fluture, 2022-03-02, Midterm Exam

// Question 1

/*
Algo_name: FindMaxAndAvg
Variables declared: i, num, avg, max, sum - numericals

START
    i := 0
    REPEAT 5 times
        ADD 1 TO i
        WRITE "Enter the number " + (i + 1) + " : "
        READ num
        IF (num > max) THEN
            max := num
        ENDIF
        sum := sum + num
    END REPEAT
    avg := (sum/5)
    WRITE "The bigger number you enter is : " + max + " and the average is : " + avg
END
*/

// Question 2

// ask the user to enter 5 number
// find out the bigger number
// calculate and print out the average

/*
#include <iostream>
using namespace std;

int main()
{
    int i;
    double num, avg, max, sum;

    for (i = 0; i < 5; i++)
    {
        cout << "Enter the number " << i + 1 << " : ";
        cin >> num;

        if (num > max)
        {
            max = num;
        }

        sum += num;
    }

    avg = sum / 5;

    cout << "The bigger number you enter is : " << max << " and the average is : " << avg << endl;

    return 0;
}
*/

#include <iostream>
using namespace std;

int main()
{
    double arr[5], max, avg, total;
    int i;

    for (i = 0; i < 5; i++)
    {
        cout << "Enter the number " << i + 1 << " : ";
        cin >> arr[i];

        if (arr[i] > max)
        {
            max = arr[i];
        }

        total += arr[i];
    }

    avg = total / 5;

    cout << "The bigger number you enter is : " << max << " and the average is : " << avg << endl;

    // print array
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// Question 3

// without knowing in advance how many positive numbers the user wants to proceed
// once the user enter 0 or a negative number and display the results
// maximum and the minimum

/*
Algo_name: PrintMaxAndMin
Variables declared: num, max, min - numericals

START
    max := -99999
    min := 99999
    WRITE "Enter the first number: "
    READ num
    REPEAT
        IF (num > max) THEN
            max := num
        ENDIF
        IF (num < min) THEN
            min := num
        ENDIF
        WRITE "Enter another number or if you want to quit, enter 0 or a negative number: "
        READ num
    UNTIL (num > 0)
    WRITE "The bigger number you enter is : " + max + " and the smallest number you enter is : " + min
END
*/

// Question 4

/*
#include <iostream>
using namespace std;

int main()
{
    double num;
    double max = -99999;
    double min = 99999;

    cout << "Enter the first number: ";
    cin >> num;

    do
    {
        if (num > max) {
            max = num;
        }

        if (num < min) {
            min = num;
        }

        cout << "Enter another number or if you want to quit, enter 0 or a negative number: ";
        cin >> num;
    } while (num > 0);

    cout << "The bigger number you enter is : " << max << " and the smallest number you enter is : " << min << endl;

    return 0;
}
*/
