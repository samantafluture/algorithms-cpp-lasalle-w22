// Samanta Gimenez Fluture, 2022-02-24, Midterm Exam

// Question 1

/*

Algo_name: FindMaxAvg
Variable declarations: num, max, avg, total, i - integers

START
    max := 0
    avg := 0
    total := 0
    i := 0
    REPEAT
        Add 1 to i
        WRITE "Enter the number" + (i+1) + " : "
        READ num
        IF (num > max) THEN
            max := num
        ENDIF
        total := (total + num)
    UNTIL (i < 5)
    avg := (total / 5)
    WRITE "The bigger number you enter is :" + max + " and the average is : " + avg
END

*/

// Question 2

/*
#include <iostream>
using namespace std;

int main()
{
    int num, i;
    int max = 0;
    int avg = 0;
    int total = 0;

    for (i = 0; i < 5; i++)
    {
        cout << "Enter the number " << i + 1 << " : ";
        cin >> num;

        if (num > max)
        {
            max = num;
        }

        total += num;
    }

    avg = total / 5;

    cout << "The bigger number you enter is : "
         << max << " and the average is : " << avg;

    return 0;
}
*/

// Question 3

/*

Algo_name: PrintMaxMin
Variable declarations: num, max, min - numerical

START
    max := -99999
    min := 99999
    WRITE "Enter the first number: "
    READ num
    REPEAT
        WRITE "Enter another number or if you want to quit, enter 0 or a negative number:" num
        READ num
        IF (num > max) THEN
            max := num
        ENDIF
        IF ((num < min) AND (num > 0)) THEN
            min := num
        ENDIF
    UNTIL (i < 0)
    WRITE "The bigger number you enter is :" + max + " and the smallest number you enter is : " + min
END

*/

// Question 4


#include <iostream>
using namespace std;

int main()
{
    float num;
    float max = -99999;
    float min = 99999;

    cout << "Enter the first number: ";
    cin >> num;

    do
    {
        cout << "Enter another number or if you want to quit, enter 0 or a negative number: ";
        cin >> num;

        if (num > max)
        {
            max = num;
        }

        if (num < min && num > 0)
        {
            min = num;
        }

    } while (num > 0);

    cout << "The bigger number you enter is: "
         << max << " and d the smallest number you enter is: " << min;

    return 0;
}


// Question 5

/* Errors + Corrections

Line 1 - <iostream>
Line 2 - namespace
Line 6 - nbrnbr;
Line 7 - double nbr1 = 0
Line 9 - remove one ;
Line 12 - (i = 1; i <= nbrnbr; i++)
Line 17 - nbrmax = nbr1;
Line 19 - remove " after value

*/

/*
#include <iostream>
using namespace std;

int main()
{
    int i, nbrnbr;
    double nbr1 = 0, nbrmax;

    do
    {
        cout << "Enter the number of values to be tested : ";
        cin >> nbrnbr;

        for (i = 1; i <= nbrnbr; i++)
        {
            cout << "Enter the value number " << i << " : ";
            cin >> nbr1;

            if (nbrmax < nbr1)
            {
                nbrmax = nbr1;
            }
        }

        cout << "The greatest value of those entered number is : " << nbrmax << endl;

    } while (nbrnbr != 0);

    system("pause");
}
*/