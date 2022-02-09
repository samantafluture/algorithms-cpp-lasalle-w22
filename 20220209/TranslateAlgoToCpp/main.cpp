// Samanta Gimenez Fluture, 2022-02-09, Translating algorithms to C++

/************************************************************/
// Exercise 6

// Algorithm: Compare_Values4

#include <iostream>
using namespace std;

int main()
{
    float Num1, Num2, Num3, Num4, Num5, ResultAddition;

    cout << "Enter first number: ";
    cin >> Num1;

    cout << "Enter second number: ";
    cin >> Num2;

    cout << "Enter third number: ";
    cin >> Num3;

    cout << "Enter fourth number: ";
    cin >> Num4;

    cout << "Enter fifth number: ";
    cin >> Num5;

    if (Num1 > 0 && Num2 > 0 && Num3 > 0 && Num4 > 0 && Num5 > 0)
    {
        ResultAddition = Num1 + Num2 + Num3 + Num4 + Num5;
        cout << "The result of the addition is: " << ResultAddition << endl;
    }
    else
    {
        cout << "At least one of your 5 values is not a positive value" << endl;
    }

    return 0;
}


/*
Expected Output:

Enter first number: 5
Enter second number: 3
Enter third number: 8
Enter fourth number: 9
Enter fifth number: 11
The result of the addition is: 36

Enter first number: -5
Enter second number: 2
Enter third number: 10
Enter fourth number: 3
Enter fifth number: -1
At least one of your 5 values is not a positive value
*/

/************************************************************/
// Exercise 5

// Algorithm: Compare_Values3

/*
#include <iostream>
using namespace std;

int main()
{
    float Num1, Num2, Num3, ResultAsSmall, ResultAsBig;

    cout << "Enter first number: ";
    cin >> Num1;

    cout << "Enter second number: ";
    cin >> Num2;

    cout << "Enter third number: ";
    cin >> Num3;

    ResultAsBig = Num1;
    ResultAsSmall = Num1;

    if (ResultAsBig < Num2)
    {
        ResultAsBig = Num2;
    }
    else if (ResultAsBig < Num3)
    {
        ResultAsBig = Num3;
    } 

    if (ResultAsSmall > Num2)
    {
        ResultAsSmall = Num2;
    }
    else if (ResultAsSmall > Num3)
    {
        ResultAsSmall = Num3;
    } 

    */
   
    /*
    // find the largest value
    if (Num1 >= Num2 && Num1 >= Num3)
    {
        ResultAsBig = Num1;
    }

    if (Num2 >= Num1 && Num2 >= Num3)
    {
        ResultAsBig = Num2;
    }

    if (Num3 >= Num1 && Num3 >= Num2)
    {
        ResultAsBig = Num3;
    }

    // find the smallest value
    if (Num1 <= Num2 && Num1 <= Num3)
    {
        ResultAsSmall = Num1;
    }

    if (Num2 <= Num1 && Num2 <= Num3)
    {
        ResultAsSmall = Num2;
    }

    if (Num3 <= Num1 && Num3 <= Num2)
    {
        ResultAsSmall = Num3;
    }
    */

    /*
    cout << "The largest value is: " << ResultAsBig << endl;
    cout << "The smallest value is: " << ResultAsSmall << endl;

    return 0;
}

*/

/*
Expected Output:

Enter first number: 5
Enter second number: 4
Enter third number: 7
The largest value is: 7
The smallest value is: 4
*/

/************************************************************/
// Exercise 4

// Algorithm: Compare_Values2

/*
#include <iostream>
using namespace std;

int main()
{
    float Num1, Num2, ResAdd, ResMul;

    cout << "Input a number: ";
    cin >> Num1;

    cout << "Input another number: ";
    cin >> Num2;

    ResAdd = Num1 + Num2;
    ResMul = Num1 * Num2;

    if (ResAdd == ResMul)
    {
        cout << "The value of Num1 is " << Num1 << " and the value of Num2 is " << Num2 << endl;
    }
    else
    {
        cout << "Message" << endl;
    }

    return 0;
}
*/

/*
Expected Output:

Input a number: 3
Input another number: 4
Message

Input a number: 0
Input another number: 0
The value of Num1 is 0 and the value of Num2 is 0
*/

/************************************************************/
// Exercise 3

// Algorithm: Compare_Values1

/*
#include <iostream>
using namespace std;

int main()
{
    float Num1, Num2, Result;

    cout << "Input a number: ";
    cin >> Num1;

    cout << "Input another number: ";
    cin >> Num2;

    if (Num1 > Num2 || Num1 < Num2)
    {
        Result = Num1 + Num2;
        cout << "The result of addition is " << Result << endl;
    }
    else
    {
        Result = Num1 * Num2;
        cout << "The result of multiplication is " << Result << endl;
    }

    return 0;
}
*/

/*
Expected Output:

Input a number: 4
Input another number: 6
The result of addition is 10

Input a number: 1
Input another number: 1
The result of multiplication is 1
*/

/************************************************************/
// Exercise 2

// Algorithm: Check10Value

/*
#include <iostream>
using namespace std;

int main()
{
    float Num1;

    cout << "Enter a number: ";
    cin >> Num1;

    if (Num1 > 10)
    {
        cout << "The number is " << Num1 << " and the result is " << Num1 + 5 << endl;
    }

    if (Num1 < 10)
    {
        cout << "The number is " << Num1 << " and the result is " << Num1 + 3 << endl;
    }

    return 0;
}
*/

/*
Expected Output:

Enter a number: 3
The number is 3 and the result is 6

Enter a number: 15
The number is 15 and the result is 20
*/

// Algorithm: BasicCal10

/*
#include <iostream>
using namespace std;

int main()
{
    int X;

    cout << "Enter a number: ";
    cin >> X;

    if (X > 10)
    {
        cout << "The number is " << X << " and the result is " << X + 5 << endl;
    }
    else if (X < 10)
    {
        cout << "The number is " << X << " and the result is " << X + 3 << endl;
    }
    else
    {
        cout << "The number is " << X << " and the result is " << X << endl;
    }

    return 0;
}
*/

/*
Expected Output:

Enter a number: 1
The number is 1 and the result is 4

Enter a number: 20
The number is 20 and the result is 25
*/

/************************************************************/
// Exercise 1

// Algorithm: CheckValue

/*
#include <iostream>
using namespace std;

int main() {
    float Num1;

    cout << "Enter a number: ";
    cin >> Num1;

    if (Num1 > 0) {
        cout << Num1 << " - this a positive number" << endl;
    }

    if (Num1 == 0) {
        cout << Num1 << " - equal to zero" << endl;
    }

    if (Num1 < 0) {
        cout << Num1 << " - this a negative number" << endl;
    }

    return 0;
}
*/

/*
Expected output:

Enter a number: 0
0 - equal to zero

Enter a number: -3
-3 - this a negative number

Enter a number: 1
1 - this a positive number
*/

// Algorithm: TestForNum

/*
#include <iostream>
using namespace std;

int main()
{
    int X;

    cout << "Enter a number: ";
    cin >> X;

    if (X > 0)
    {
        cout << X << " - this a positive number" << endl;
    }
    else if (X < 0)
    {
        cout << X << " - this a negative number" << endl;
    }
    else
    {
        cout << X << " - equal to zero" << endl;
    }

    return 0;
}
*/

/*
Expected output:

Enter a number: -4
-4 - this a negative number

Enter a number: 0
0 - equal to zero

Enter a number: 5
5 - this a positive number
 */