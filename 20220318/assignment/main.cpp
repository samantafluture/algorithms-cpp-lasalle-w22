// Samanta Gimenez Fluture, 2022-03-19, Working with functions and arrays

#include <iostream>
#include <math.h>
using namespace std;

// function declaration
double multiply(int, double);
void print_value(double);
double *calc_subtotal(int, double);
double validate_price(double);

// global variable
const double TPS = 0.5;
const double TVQ = 0.9975;
double subtotal[10];

int main()
{
    char ans;
    int qty;
    double *st;
    double tps_val, tvq_val;
    double total_net;
    double price, total = 0;

    cout.precision(2);         // 2 decimal places
    cout.setf(ios::fixed);     // set fixed point notation
    cout.setf(ios::showpoint); // show decimal point

    cout << "\n********** LET'S SHOP **********" << endl;

    do
    {
        cout << "\nEnter 1 to type prices and quantities of products\n"
             << "Enter 2 to display subtotals\n"
             << "Enter 3 to display the final price of the transaction with taxes\n"
             << "Enter 4 to see other results of the final price\n"
             << "Enter 0 to quit the application\n"
             << ">> Your option: ";
        cin >> ans;

        switch (ans)
        {
        case '1':
            cout << "\n* You can enter UP TO 10 (TEN) different products, with any item quantity you desire *\n"
                 << endl;
            st = calc_subtotal(qty, price);

            break;
        case '2':
            cout << "\nYour subtotals are:" << endl;
            if (*st == 0.0)
            {
                cout << "$ " << *st << endl;
            }
            else
            {
                for (int i = 0; i < 10; i++)
                {
                    if (*(st + i) != 0.0)
                    {
                        cout << "Product #" << (i + 1) << " .............. $ " << *(st + i) << endl;
                    }
                    else
                    {
                        break;
                    }
                }
            }

            break;
        case '3':
            for (int i = 0; i < 10; i++)
            {
                total = total + *(st + i);
            }

            cout << "\nTotal without taxes .............. $ ";
            print_value(total);

            tps_val = ((total * TPS) / 10.0);
            cout << "TPS (5.000%) ..................... $ ";
            print_value(tps_val);

            tvq_val = ((total * TVQ) / 10.0);
            cout << "TVQ (9.975%) ..................... $ ";
            print_value(tvq_val);

            total_net = total * (1 + ((TPS + TVQ) / 10.0));
            cout << "Total with QC sales taxes ........ $ ";
            print_value(total_net);

            break;
        case '4':
            cout << "\nTotal with QS sales taxes ROUND DOWN ........ $ " << floor(total_net) << endl;
            cout << "Total with QS sales taxes ROUND UP .......... $ " << ceil(total_net) << endl;
            break;
        case '0':
            cout << "\nQuitting the application..." << endl;
            break;
        default:
            cout << "\n* Invalid input, try again [1 - 5]! *" << endl;
            break;
        }

    } while (ans != '0' || ans != '0');

    cout << "\n********** THANKS FOR SHOPPING **********\n"
         << endl;

    return 0;
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
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the price of the product (or enter 0 to go back to the menu): $ ";
        cin >> price;

        if (price == 0.0)
        {
            break;
        }

        price = validate_price(price);

        if (price == 0.0)
        {
            break;
        }

        cout << "Enter the quantity of the product (or enter 0 to go back to the menu): ";
        cin >> qty;

        if (qty == 0)
        {
            break;
        }

        if (qty < 0)
        {
            do
            {
                cout << "\n* Error! Quantity value should be positive *\n"
                     << endl;
                cout << "Enter the quantity of the product (or enter 0 to go back to the menu): ";
                cin >> qty;
            } while (qty < 0);
        }

        if (qty == 0)
        {
            break;
        }

        subtotal[i] = multiply(qty, price);

        cout << ">> Subtotal .............. $ ";
        print_value(subtotal[i]);
        cout << "\n";
    }

    return subtotal;
}

double validate_price(double price)
{
    double min = 10.50;
    double max = 164.90;

    if ((fabs(price) < min) || (fabs(price) > max))
    {
        do
        {
            cout << "\n* Error! Price should be between $10.50 and $164.90 *\n"
                 << endl;
            cout << "Enter the price of the product (or enter 0 to go back to the menu): ";
            cin >> price;

            if (price == 0.0)
            {
                return 0.0;
            }

        } while ((fabs(price) < min) || (fabs(price) > max));
    }

    return price;
}