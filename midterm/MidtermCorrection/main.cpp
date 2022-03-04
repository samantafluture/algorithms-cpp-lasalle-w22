// Question 1

/*

Algo_name: PrintTransaction
Declared variables: i, price, qty, subtotal - numerical

START
    i := 0
    REPEAT 5 times
        WRITE "Enter the price for product " + (i + 1) + " : "
        READ price
        WRITE "Enter the  qty. for product " + (i + 1) + " : "
        READ qty
        IF ((price > 0) AND (qty > 0)) THEN
            subtotal := ((price * qty) * (1 + 0.1498))
            WRITE "The total with QC sales taxes is: " + subtotal + " $""
        ELSE
            WRITE "Error! The price and qty. should be positive numbers"
        ENDIF
    END REPEAT
END

*/

// Question 2

/*
#include <iostream>
using namespace std;

int main()
{
    double price, subtotal;
    int i, qty;

    cout.precision(2);
    cout << fixed;

    for (i = 0; i < 5; i++)
    {
        cout << "Enter the price for product " << i + 1 << " : ";
        cin >> price;

        if (price <= 0)
        {
            cout << "Error! The price should be positive number" << endl;
        }

        cout << "Enter the  qty. for product " << i + 1 << " : ";
        cin >> qty;

        if (qty <= 0)
        {
            cout << "Error! The qty. should be positive number" << endl;
        }

        subtotal = ((price * qty) * (1 + 0.1498));

        cout << "The total with QC sales taxes is: " << subtotal << " $" << endl;
    }

    return 0;
}
*/

// Question 3


/*

Algo_name: PrintSubTotalAndTotal
Declared variables: price, qty, subtotal, total, count - numericals

START
    count := 1
    WRITE "Enter the price for product 1 (to quit, enter 0): "
    READ price
    IF (price != 0) THEN
        WRITE "Enter the qty for product 1 (to quit, enter 0): "
        READ qty
        IF (qty != 0) THEN
            REPEAT
                subtotal := ((price * qty) * (1 + 0.1498))
                WRITE "The total with QC sales taxes is: " + subtotal + " $"
                total := subtotal
                IF (price == 0) THEN
                    break
                ENDIF
                WRITE "Enter the qty for product " + count + " (to quit, enter 0): "
                READ qty
            UNTIL ((price > 0) AND (qty > 0))
        WRITE "The total with QC sales taxes is " + total + " $ " for " + (count - 1) + " transactions."
        ELSE
            WRITE "Quitting application..."
        ENDIF
    ELSE
        WRITE "Quitting application..."
    ENDIF
END

*/


// Question 4


#include <iostream>
using namespace std;

int main()
{
    double price, subtotal, total;
    int qty;
    int count = 1;

    cout.precision(2);
    cout << fixed;

    cout << "Enter the price for product 1 (to quit, enter 0): ";
    cin >> price;

    if (price != 0)
    {
        cout << "Enter the qty for product 1 (to quit, enter 0): ";
        cin >> qty;

        if (qty != 0)
        {
            do
            {
                subtotal = ((price * qty) * (1 + 0.1498));

                cout << "The total with QC sales taxes is: " << subtotal << " $" << endl;

                total += subtotal;
                count++;

                cout << "Enter the price for product " << count << " (to quit, enter 0): ";
                cin >> price;

                if (price == 0)
                {
                    break;
                }

                cout << "Enter the qty for product " << count << " (to quit, enter 0): ";
                cin >> qty;

            } while (price > 0 && qty > 0);

            cout << "The total with QC sales taxes is " << total << " $"
                 << " for " << (count - 1) << " transactions." << endl;
        }
        else
        {
            cout << "Quitting application..." << endl;
        }
    }
    else
    {
        cout << "Quitting application..." << endl;
    }

    return 0;
}


// Question 5

/*
Errors identified:

Line 7 - int nbr -> should be inside int main() function [could not be an error, and be a global variable]
Line 9 - main()
Line 11 - cout
Line 12 - cin >> nbr;
Line 14 - ((nbr > 1) || (nbr > 18))
Line 22 - return 0;
*/

/*
#include <iostream>
using namespace std;

int main()
{

    int nbr;

    cout << "Enter an integer number between 5 and 22: ";
    cin >> nbr;

    while ((nbr < 5) || (nbr > 22))
    {
        cout << "Enter an integer number between 5 and 22: ";
        cin >> nbr;
    }

    cout << "The result is: " << nbr << " x 10 = " << nbr * 10 << endl;
    cout << "The result is: " << nbr << " x 11 = " << nbr * 11 << endl;
    cout << "The result is: " << nbr << " x 12 = " << nbr * 12 << endl;

    return 0;
}
*/