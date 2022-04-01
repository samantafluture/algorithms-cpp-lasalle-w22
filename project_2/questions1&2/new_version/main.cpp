// Samanta Gimenez Fluture, 2022-03-31, Project #2

// Question 1 and 2

/*

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
> what variables may be local?

*/

#include <iostream>
#include <vector>
using namespace std;

const double TO_KILO = 0.4535;
const double TO_POUND = 2.2046;

vector<double> enteredWeights(0), convertedWeights(0);
double maxResult = -99999, minResult = 99999, sumResult = 0, avgResult = 0;
double weight, result;
bool isPound;

double getWeight(int);
void convertWeight();
void displayConversion();
void calcMaxMinAvg();
void clear();
void startConverter(int);

int main()
{
    char ans;
    int count = 0;

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
            cout << "\nDo you want to quit?"
                 << "\nEnter Y to exit or N to go back"
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
                cout << "\n* Invalid input, try again! *\n";
                continue;
            }
        }
        else
        {
            switch (ans)
            {
            case '1':
                isPound = true;
                count = 0;

                cout << "\n1. From pounds to kilograms\n";
                startConverter(count);

                break;
            case '2':
                isPound = false;
                count = 0;

                cout << "\n2. From kilograms to pounds\n";
                startConverter(count);

                break;
            default:
                cout << "\n* Invalid input, try again! *\n";
                break;
            }
        }

    } while (ans != '3');

    cout << "\n******** Thank you. Bye! *********\n";

    return 0;
}

double getWeight(int count)
{
    cout << "\n* Enter 0 or negative to quit this feature *\n"
         << "* You have " << (16 - count) << " conversions left *\n"
         << "\n>> Enter a weight to be converted: ";
    cin >> weight;

    enteredWeights.push_back(weight);

    return weight;
}

void convertWeight()
{
    if (isPound == 1)
    {
        result = (weight * TO_KILO);
    }
    else if (isPound == 0)
    {
        result = (weight * TO_POUND);
    }

    convertedWeights.push_back(result);
}

void displayConversion()
{
    cout << "\nResult: ";

    if (isPound == 1)
    {
        cout.precision(0);
        cout.setf(ios::fixed);
        cout << weight << " pounds = ";

        cout.precision(2);
        cout.setf(ios::fixed);
        cout << result << " kilograms\n";
    }
    else if (isPound == 0)
    {
        cout.precision(2);
        cout.setf(ios::fixed);
        cout << weight << " kilograms = ";

        cout.precision(0);
        cout.setf(ios::fixed);
        cout << result << " pounds\n";
    }
}

void calcMaxMinAvg()
{
    string metric;

    for (int i = 0; i < convertedWeights.size(); i++)
    {
        if (convertedWeights[i] > maxResult)
        {
            maxResult = convertedWeights[i];
        }

        if (convertedWeights[i] < minResult)
        {
            minResult = convertedWeights[i];
        }

        sumResult += convertedWeights[i];
    }

    if (convertedWeights.size() == 0)
    {
        cout << "\nYou don't have any conversions..." << endl;
    }
    else
    {
        avgResult = (sumResult / convertedWeights.size());

        if (isPound == 1)
        {
            metric = " kgs";
        }
        else if (isPound == 0)
        {
            metric = " lbs";
        }

        cout << "\n* Summary of Results*"
             << "\nMaximum: " << maxResult << metric
             << "\nMinimum: " << minResult << metric
             << "\nAverage: " << avgResult << metric << "\n";
    }

    clear();
}

void clear()
{
    // reseting the values and the vectors
    maxResult = -99999, minResult = 99999, sumResult = 0, avgResult = 0;
    enteredWeights.clear();
    convertedWeights.clear();
}

void startConverter(int count)
{
    while (enteredWeights.size() < 15)
    {
        count++;
        weight = getWeight(count);

        if (weight <= 0.0)
        {
            enteredWeights.pop_back();
            break;
        }

        convertWeight();
        displayConversion();
    }

    calcMaxMinAvg();
}