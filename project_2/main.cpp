// Samanta Gimenez Fluture, 2022-03-31, Project #2

// Question 1

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

*/

/*

TO DO'S
> improve converting calcs (include const values)
> improve results (0.0, grams, ounces)
> improve code by using functions

*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char ans;
    vector<double> lb(0), kg(0);
    double weight_in, weight_out;
    double max = -99999, min = 99999, sum = 0, avg = 0;

    cout << "\n******** Conversion App *********" << endl;

    do
    {
        cout << "\nEnter 1 to convert pounds in kilograms\n"
             << "Enter 2 to convert kilograms to pounds\n"
             << "Enter 3 to quit\n"
             << "Your option: ";
        cin >> ans;

        if (ans == '3')
        {
            cout << "Enter Y to confirm you want to quit or enter N to go back" << endl;
            cin >> ans;

            if (ans == 'Y' || ans == 'y')
            {
                cout << "Quitting the application..." << endl;
                break;
            }
            else if (ans == 'N' || ans == 'n')
            {
                cout << "Going back to the menu..." << endl;
                continue;
            }
            else
            {
                cout << "\n* Invalid input, try again [Y | N]! *" << endl;
                continue;
            }
        }
        else
        {

            switch (ans)
            {
            case '1':
                while (lb.size() < 15)
                {
                    cout << "Enter a weight in pounds and/or ounces: ";
                    cin >> weight_in;

                    if (weight_in <= 0.0)
                    {
                        break;
                    }

                    lb.push_back(weight_in);

                    weight_out = (weight_in * 0.454);
                    kg.push_back(weight_out);
                    cout << weight_in << " pounds is equal to " << weight_out << " kilograms" << endl;
                }
                for (int i = 0; i < lb.size(); i++)
                {
                    if (lb[i] > max)
                    {
                        max = lb[i];
                    }

                    if (lb[i] < min)
                    {
                        min = lb[i];
                    }

                    sum += lb[i];
                }

                avg = sum / lb.size();
                cout << "Max: " << max << " pounds" << endl;
                cout << "Min: " << min << " pounds" << endl;
                cout << "Average: " << avg << " pounds" << endl;

                break;
            case '2':
                while (kg.size() < 15)
                {
                    cout << "Enter a weight in kilograms and/or grams: ";
                    cin >> weight_in;

                    if (weight_in <= 0.0)
                    {
                        break;
                    }

                    kg.push_back(weight_in);

                    weight_out = (weight_in * 2.2);
                    lb.push_back(weight_out);
                    cout << weight_in << " kilograms is equal to " << weight_out << " pounds" << endl;
                }
                for (int i = 0; i < kg.size(); i++)
                {
                    if (kg[i] > max)
                    {
                        max = kg[i];
                    }

                    if (kg[i] < min)
                    {
                        min = kg[i];
                    }

                    sum += kg[i];
                }

                avg = sum / kg.size();
                cout << "Max: " << max << " kilograms" << endl;
                cout << "Min: " << min << " kilograms" << endl;
                cout << "Average: " << avg << " kilograms" << endl;
                break;
            default:
                cout << "\n* Invalid input, try again [0 | 1 | 2]! *" << endl;
                break;
            }
        }

    } while (ans != '3');

    cout << "\n******** Thank you. Bye! *********\n\n";

    return 0;
}
