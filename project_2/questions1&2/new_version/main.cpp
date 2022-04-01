// Samanta Gimenez Fluture, 2022-03-31, Project #2

// Question 1 and 2

/*

3 options:
> 1. conversion from pounds to kilograms,
> 2. conversion from kilograms to pounds,
> 3. the option to quit.

data:
> 2.2046 pounds in a kilogram
> 1000 grams in a kilogram

1st option:
> input: a weight in pounds and/or ounces
> output: the equivalent weight in kilograms
> loop: for up to 15 weights conversions
> 0 or a negative value: display maximum, minimum and average of weight(s) entered as far

2nd option:
> input: a weight in kilograms and/or grams
> output: the equivalent weight in pounds
> loop: for up to 15 weights conversions
> 0 or a negative value: display maximum, minimum and average of weight(s) entered as far

3rd option:
> end the program with confirmation

pseudo-code:
> each functionality
> name of each function/algorithm
> name and type of variables

TO DO'S
> divide into question 1 (algo) and question 2 (code)
> enter grams and ounces
> save outputs

CORRECTIONS
> if keeping void function > have global variables instead of &
> if not, do a return function > return double
> if goes more than 15 convertions > warn the user
> i don't need in / out !! keep simple
> if you have a calling inside the function you dont the arguments

*/

#include <iostream>
#include <vector>
using namespace std;

const double POUND_TO_KILO = 0.454;
const double KILO_TO_POUND = 2.2;

double poundToKilograms() {

}

void convert_lb(vector<double> &lb, vector<double> &kg, double &in, double &out);
void convert_kg(vector<double> &lb, vector<double> &kg, double &in, double &out);
void calc_max_min_avg(vector<double> &weights, double &max, double &min, double &sum, double &avg);

int main()
{
    char ans;
    vector<double> lb(0), kg(0);
    double max = -99999, min = 99999, sum = 0, avg = 0;
    double weight, result;

    cout.precision(3);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);

    cout << "\n******** Conversion App *********" << endl;

    do
    {
        cout << "\nEnter 1 to convert pounds in kilograms\n"
             << "Enter 2 to convert kilograms to pounds\n"
             << "Enter 3 to quit\n"
             << ">> Your option: ";
        cin >> ans;

        if (ans == '3')
        {
            cout << "\nEnter y to confirm you want to quit or enter n to go back"
                 << "\n>> Your option: ";
            cin >> ans;

            if (ans == 'Y' || ans == 'y')
            {
                cout << "\nQuitting the application..." << endl;
                break;
            }
            else if (ans == 'N' || ans == 'n')
            {
                cout << "\nGoing back to the menu..." << endl;
                continue;
            }
            else
            {
                cout << "\n* Invalid input, try again [y | n]! *" << endl;
                continue;
            }
        }
        else
        {
            switch (ans)
            {
            case '1':

                cout << "\n* 1. From pounds to kilograms *\n"
                     << "* Enter 0 or negative to quit this feature *\n"
                     << "* You have up to 15 conversions *\n"
                     << "* The weight will be calculated in pounds *\n";

                convert_lb(lb, kg, weight_in, weight_out);
                calc_max_min_avg(lb, max, min, sum, avg);

                lb.clear();
                kg.clear();

                break;
            case '2':
                cout << "\n* 2. From kilograms to pounds *\n"
                     << "* Enter 0 or negative to quit this feature *\n"
                     << "* You have up to 15 conversions *\n"
                     << "* The weight will be calculated in kilograms *\n";

                convert_kg(lb, kg, weight_in, weight_out);
                calc_max_min_avg(kg, max, min, sum, avg);

                lb.clear();
                kg.clear();

                break;
            default:
                cout << "\n* Invalid input, try again! *"
                     << endl;
                break;
            }
        }

    } while (ans != '3');

    cout << "\n******** Thank you. Bye! *********\n";

    return 0;
}

void convert_lb(vector<double> &lb, vector<double> &kg, double &in, double &out)
{
    while (lb.size() < 15)
    {
        cout << "\n>> Enter a weight in pounds (or ounces as 0.XXX): ";
        cin >> in;

        if (in <= 0.0)
        {
            break;
        }

        lb.push_back(in);

        out = (in * POUND_TO_KILO);
        kg.push_back(out);

        cout << "\nResult: " << in << " pounds is equal to " << out << " kilograms" << endl;
    }
}

void convert_kg(vector<double> &lb, vector<double> &kg, double &in, double &out)
{
    while (kg.size() < 15)
    {
        cout << "\n>> Enter a weight in kilograms (or grams as 0.XXX): ";
        cin >> in;

        if (in <= 0.0)
        {
            break;
        }

        kg.push_back(in);

        out = (in * KILO_TO_POUND);
        lb.push_back(out);

        cout << "\nResult: " << in << " kilograms is equal to " << out << " pounds" << endl;
    }
}

void calc_max_min_avg(vector<double> &weights, double &max, double &min, double &sum, double &avg)
{
    for (int i = 0; i < weights.size(); i++)
    {
        if (weights[i] > max)
        {
            max = weights[i];
        }

        if (weights[i] < min)
        {
            min = weights[i];
        }

        sum += weights[i];
    }

    if (weights.size() == 0)
    {
        cout << "\nYou don't have any conversions..." << endl;
    }
    else
    {
        avg = sum / weights.size();
        cout << "\n* Summary *\n"
             << "Maximum weight entered: " << max << "\n"
             << "Minimum weight entered: " << min << "\n"
             << "Average of weights entered: " << avg << "\n";

        max = -99999, min = 99999, sum = 0, avg = 0;
    }

    weights.clear();
}
