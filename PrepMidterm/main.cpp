// Samanta Gimenez Fluture, 2022-02-23, Preparation for MidTerm

// Question 1

/*

Algo_name: FindBigAndAvgOf5
Variables declarations: num, biggest, average, counter - integers

START
    count := 0
    biggest := 0
    average := 0
    REPEAT
        ADD 1 to count

        WRITE "Enter number: "
        READ num

        IF (num > biggest) THEN
            biggest := num
        ENDIF

        average = (average + num)
    UNTIL count < 5
    average = (average / 5)
    WRITE "The biggest number is: " biggest
    WRITE "The average is: " average
END

*/

// Question 2

/*
#include <iostream>
using namespace std;

int main()
{
    int i, num;
    int biggest = 0;
    int average = 0;

    for (i = 0; i < 5; ++i)
    {
        cout <<"Enter number " << i + 1 << " : ";
        cin >> num;

        if (num > biggest) {
            biggest = num;
        }

        average += num;
    }

    average /= 5;

    cout << "The biggest number you enter is: " << biggest
         << " and the average is: " << average;

    return 0;
}
*/

// Question 3

/*

Algo_name: FindBigAndAvgOfN
Variables declarations: num, biggest, smallest, counter - numerical

START
    count := 0
    biggest := 0;
    smallest := 0;
    REPEAT
        WRITE "Enter first number: "
        READ num
        ADD 1 to count

        REPEAT
            WRITE "Enter another number or if you want to quit, enter 0 or a negative number: "
            READ num
            ADD 1 to count
        UNTIL (num > 0)

        IF (num > biggest) THEN
            biggest := num
        ENDIF

        IF (num < smallest) THEN
            smallest := num
        ENDIF
    UNTIL num > 0
    WRITE "The biggest number is: " biggest
    WRITE "The smallest number is: " smallest
END

*/

// Question 4

#include <iostream>
using namespace std;

int main()
{
    float num;
    int biggest;
    int smallest;

    cout << "Enter the first number: ";
    cin >> num;

    do
    {

        if (num > biggest)
        {
            biggest = num;
        }

        if (num < smallest)
        {
            smallest = num;
        }

        cout << "Enter another number or if you want to quit, enter 0 or a negative number: ";
        cin >> num;

    } while (num > 0);

    cout << "The biggest number you enter is: " << biggest
         << " and the smallest number your enter is: " << smallest;

    return 0;
}

// Question 5

/*
Answers

Line 1 - There's a space between <iostream>
Line 2 - There's a wrong - between namespace
Line 7 - Should be = instead of ==
Line 9 - There's 2 commas
Line 12 - Should be i=1; i<=nbrnbr; i++
Line 19 - There's a extra " after value
*/
