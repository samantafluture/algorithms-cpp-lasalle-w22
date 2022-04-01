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

const double TO_KILO = 0.4535;
const double TO_POUND = 2.2046;

vector<double> enteredWeights(0), convertedWeights(0);
// double max = -99999, min = 99999, sum = 0, avg = 0;
double weight, result;
bool isPound = true;

double getWeight();
void convertWeight();
void displayConversion();

int main()
{
    char ans;

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
                isPound = true;

                cout << "\n* 1. From pounds to kilograms *\n"
                     << "* Enter 0 or negative to quit this feature *\n"
                     << "* You have up to 15 conversions *\n"
                     << "* The weight will be calculated in pounds *\n";

                while (enteredWeights.size() < 15)
                {
                    weight = getWeight();

                    if (weight <= 0.0)
                    {
                        enteredWeights.pop_back();
                        break;
                    }

                    convertWeight();
                    displayConversion();
                }

                // calcMaxMinAvg();

                break;
            case '2':
                isPound = false;

                cout << "\n* 2. From kilograms to pounds *\n"
                     << "* Enter 0 or negative to quit this feature *\n"
                     << "* You have up to 15 conversions *\n"
                     << "* The weight will be calculated in kilograms *\n";

                getWeight();
                convertWeight();
                displayConversion();
                // calcMaxMinAvg();

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

double getWeight()
{
    cout << "\n>> Enter weight to be converted: ";
    cin >> weight;

    enteredWeights.push_back(weight);

    return weight;
}

void convertWeight()
{
    if (isPound = true)
    {
        result = (weight * TO_KILO);
    }
    else
    {
        result = (weight * TO_POUND);
    }

    convertedWeights.push_back(result);
}

void displayConversion()
{
    cout << "Result" << endl;

    if (isPound == 1)
    {
        cout << weight
             << " pounds is equal to "
             << result << " kilograms\n";
    }
    else
    {
        cout << weight
             << " kilograms is equal to "
             << result << " pounds\n";
    }
}

// void calcMaxMinAvg()
// {
//     for (int i = 0; i < convertedWeights.size(); i++)
//     {
//         if (convertedWeights[i] > max)
//         {
//             max = convertedWeights[i];
//         }

//         if (convertedWeights[i] < min)
//         {
//             min = convertedWeights[i];
//         }

//         sum += convertedWeights[i];
//     }

//     if (convertedWeights.size() == 0)
//     {
//         cout << "\nYou don't have any conversions..." << endl;
//     }
//     else
//     {
//         avg = (sum / convertedWeights.size());

//         cout << "\n* Summary of Results *\n"
//              << "Maximum: " << max << "\n"
//              << "Minimum: " << min << "\n"
//              << "Average: " << avg << "\n";
//     }

//     // reseting the values and the vectors
//     // max = -99999, min = 99999, sum = 0, avg = 0;
//     enteredWeights.clear();
//     convertedWeights.clear();
// }