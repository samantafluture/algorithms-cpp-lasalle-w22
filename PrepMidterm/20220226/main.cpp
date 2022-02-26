// Samanta Gimenez Fluture, 2022-02-26, Midterm Preparation

// Question 1

/*
Algo_name: PrintBiggestAndAverage
Declared variables: i, number, biggest, average, total - numericals

START
    i := 0
    REPEAT 5 times
        ADD 1 to i
        WRITE "Enter the number" + (i + 1) + " : "
        READ number
        IF (number > biggest) THEN
            biggest := number
        ENDIF
        total := (total + number)
    END REPEAT
    average := (total / 5)
    WRITE "The bigger number you enter is : " + biggest + " and the average is : " + average
END
*/

// Question 2

/*
#include <iostream>
using namespace std;

int main() {\
    int i;
    double number;
    double biggest;
    double average;
    double total;

    for (i = 0; i < 5; i++)
    {
        cout << "Enter the number " << i + 1 << " : ";
        cin >> number;

        if (number > biggest)
        {
            biggest = number;
        }

        total += number;
        
    }
    
    average = total/5;

    cout << "The bigger number you enter is : " << biggest << " and the average is : " << average << endl;

    return 0;
}
*/

// Question 3

/*
Algo_name: FindMaxAndMix
Declared variables: number, max, min - numericals

START
    max := -99999
    min := 99999
    WRITE "Enter the first number: "
    READ number
    REPEAT 
        IF (number > max) THEN
            max = number;
        ENDIF
        IF (number < min) THEN
            min = number;
        ENDIF
        WRITE "Enter another number or if you want to quit, enter 0 or a negative number: "
        READ number
    UNTIL (number > 0)
    WRITE "The bigger number you enter is : " + max + " and the smallest number you enter is : " + min
END
*/

// Question 4

#include <iostream>
using namespace std;

int main() {\
    double number;
    double max = -99999;
    double min = 99999;

    cout << "Enter the first number: ";
    cin >> number;

    do
    {
        if (number > max)
        {
            max = number;
        }

        if (number < min)
        {
            min = number;
        }
        
        cout << "Enter another number or if you want to quit, enter 0 or a negative number: ";
        cin >> number;

    } while (number > 0);
    
    cout << "The bigger number you enter is : " << max << " and the smallest number you enter is : " << min << endl;

    return 0;
}