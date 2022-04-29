// Samanta Gimenez Fluture, 2022-04-29, Final Exam

// Section 1

// Question 1 - Algorithm

/*
Name: findMin
Variables:
    i (numerical)
    size (numerical)
    ARR (array, list of numericals)
    min (numerical)

START
    i := 0
    REPEAT
        IF (arr[i] < min) THEN
            min = arr[i]
        ENDIF
    UNTIL < size
    WRITE "The minimum value is: " min
END
*/

// Question 2 - Program Function

#include <iostream>
using namespace std;

int ARR[7] = {2, 1, 3, 0, 4, 1, 4}; // my student ID

void find_min(int ARR[], int size);

int main()
{
    find_min(ARR, 7);
    return 0;
}

void find_min(int ARR[], int size)
{
    int min = 99999;

    for (int i = 0; i < size; i++)
    {
        if (ARR[i] < min)
        {
            min = ARR[i];
        }
    }

    cout << "The minimum value is: " << min << endl;
}

/*
Output:

The minimum value is: 0
*/