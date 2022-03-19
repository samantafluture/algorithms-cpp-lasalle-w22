// Samanta Gimenez Fluture, 2022-03-18, Working with functions and arrays

#include <iostream>
using namespace std;

// function declaration
double multiply(int, double);
void print_value(double);
double *calc_subtotal(int qty, double price);
// double calc_transaction(int qty, double price, double subtotal[10], double total);

// const values (taxes)
const double TPS = 0.5;
const double TVQ = 0.9975;

// global variables
double price, total = 0;
int qty;
double subtotal[10];

int main()
{

    char ans;
    double *st;

    cout.precision(2);         // 2 decimal places
    cout.setf(ios::fixed);     // set fixed point notation
    cout.setf(ios::showpoint); // show decimal point

    cout << "********** LET'S SHOP **********\n"
         << endl;

    do
    {
        cout << "Enter 1 to type prices and quantities of products\n"
             << "Enter 2 to display subtotals\n"
             << "Enter 3 to display the final price of the transaction with taxes\n"
             << "Enter 4 to see other results of the final price\n"
             << "Enter 0 to quit the application\n";
        cin >> ans;

        switch (ans)
        {
        case '1':
            cout << "You can enter up to 10 different products, with any item quantity you desire." << endl;
            st = calc_subtotal(qty, price);

            break;
        case '2':
            cout << "Your subtotals are:" << endl;
            for (int i = 0; i < 3; i++)
            {
                cout << "Product #" << (i + 1) << " .............. $ " << *(st + i) << endl;
            }

            break;
        case '3':
            for (int i = 0; i < 3; i++)
            {
                total += *st;
            }
 
            cout << "Total without taxes .............. $ ";
            print_value(total);
            cout << "TPS (5.000%) ..................... $ " << ((total * TPS) / 10.0) << endl;
            cout << "TVQ (9.975%) ..................... $ " << ((total * TVQ) / 10.0) << endl;
            cout << "Total with QC sales taxes ........ $ " << total * (1 + ((TPS + TVQ)/ 10.0)) << endl;

            break;
        case '0':
            cout << "\nQuitting the application..." << endl;
            break;
        default:
            cout << "\nInvalid input, try again!" << endl;
            break;
        }

    } while (ans != '0' || ans != '0');

    cout << "\n********** THANKS FOR SHOPPING **********" << endl;
}

// function definition
double multiply(int a, double b)
{
    return (a * b);
}

void print_value(double c)
{
    cout << c << endl;
}

double *calc_subtotal(int qty, double price)
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the price of the product: $ ";
        cin >> price;

        cout << "Enter the quantity of the product: ";
        cin >> qty;

        if (qty < 1)
        {
            do
            {
                cout << "Error! Quantity value should be positive!" << endl;
                cout << "Enter the quantity of the product: ";
                cin >> qty;
            } while (qty < 1);
        }

        subtotal[i] = multiply(qty, price);

        cout << "The subtotal is: $ ";
        print_value(subtotal[i]);
    }

    return subtotal;
}
