// Samanta Gimenez Fluture, 2022-03-19, Working with functions and arrays

#include <iostream>
#include <math.h>
using namespace std;

// function declaration
double multiply(int, double);
void print_value(double);
double *calc_subtotal(int, double);
double validate_price(double);

// global variables
const double TPS_TAX = 0.5;
const double TVQ_TAX = 0.9975;
const double MIN_PRICE = 10.50;
const double MAX_PRICE = 164.90;
double subtotal[10];

int main()
{
    char ans;
    int qty;
    double *subtotal_val, tps_val, tvq_val, total_net, price, total = 0;

    cout.precision(2);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);

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
            cout << "\n* You can enter UP TO 10 (TEN) different products, with any quantity per item *\n"
                 << endl;
            subtotal_val = calc_subtotal(qty, price);
            break;
        case '2':
            cout << "\nYour subtotals are:" << endl;
            if (*subtotal_val == 0.0)
            {
                cout << "$ " << *subtotal_val << endl;
            }
            else
            {
                for (int i = 0; i < 10; i++)
                {
                    if (*(subtotal_val + i) != 0.0)
                    {
                        cout << "Product #" << (i + 1) << " .............. $ " << *(subtotal_val + i) << endl;
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
                total = total + *(subtotal_val + i);
            }

            cout << "\nTotal without taxes .............. $ ";
            print_value(total);

            tps_val = ((total * TPS_TAX) / 10.0);
            cout << "TPS (5.000%) ..................... $ ";
            print_value(tps_val);

            tvq_val = ((total * TVQ_TAX) / 10.0);
            cout << "TVQ (9.975%) ..................... $ ";
            print_value(tvq_val);

            total_net = total * (1 + ((TPS_TAX + TVQ_TAX) / 10.0));
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

    cout << "\n********** THANK YOU FOR SHOPPING **********\n"
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

// using pointers to return an array
double *calc_subtotal(int qty, double price)
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the price of the product #" << (i + 1) << " (or enter 0 to go back to the menu): $ ";
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

        cout << "Enter the quantity of the product #" << (i + 1) << " (or enter 0 to go back to the menu): ";
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
    if ((fabs(price) < MIN_PRICE) || (fabs(price) > MAX_PRICE))
    {
        do
        {
            cout << "\n* Error! Price should be between $10.50 and $164.90 *\n"
                 << endl;
            cout << "Enter the price of the product (or enter 0 to go back to the menu): ";
            cin >> price;

            if (price == 0.0)
            {
                break;
            }

        } while ((fabs(price) < MIN_PRICE) || (fabs(price) > MAX_PRICE));
    }

    return price;
}