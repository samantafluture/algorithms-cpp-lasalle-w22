// Samanta Gimenez Fluture, 2022-03-23, Working with vectors

/*
vectors are dynamic arrays
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // ask 4 options
    // 1. to add value to a vector
    // 2. to remove value from the vector
    // 3. to print out the values from the vector
    // 4. to quit

    char ans;
    vector<double> nums(0);
    double num1;

    do
    {
        cout << "\nEnter 1 to add a value to the vector\n"
             << "Enter 2 to remove a value from the vector\n"
             << "Enter 3 to print out the values from the vector\n"
             << "Enter 4 to clear all the values from the vector\n"
             << "Enter 0 to quit\n"
             << ">> Your option: ";
        cin >> ans;

        switch (ans)
        {
        case '1':
            cout << "\n* Initial vector *\n";

            if (nums.size() == 0)
            {
                cout << "Empty" << endl;
            }

            for (int i = 0; i < nums.size(); i++)
            {
                cout << "Index: " << i << " Value: " << nums[i] << endl;
            }

            do
            {
                cout << "\n>> Enter a number to be added to the vector (or 0 to stop adding): ";
                cin >> num1;

                nums.push_back(num1);
            } while (num1 != 0);

            cout << "\n* Modified vector *\n";

            nums.pop_back();

            for (int i = 0; i < nums.size(); i++)
            {
                cout << "Index: " << i << " Value: " << nums[i] << endl;
            }
            break;
        case '2':
            if (nums.size() == 0)
            {
                cout << "Your vector is empty! Please add values!" << endl;
                break;
            }

            cout << "\n>> Let's remove the last value from the vector" << endl;

            cout << "\n* Filled vector *\n";

            for (int i = 0; i < nums.size(); i++)
            {
                cout << "Index: " << i << " Value: " << nums[i] << endl;
            }

            nums.pop_back();

            cout << "\n* Modified vector *\n";

            for (int i = 0; i < nums.size(); i++)
            {
                cout << "Index: " << i << " Value: " << nums[i] << endl;
            }
            break;
        case '3':
            cout << "\n>> Let's print the values of the vector" << endl;

            cout << "\n* Final vector *\n";

            if (nums.size() == 0)
            {
                cout << "Empty" << endl;
            }

            for (int i = 0; i < nums.size(); i++)
            {
                cout << "Index: " << i << " Value: " << nums[i] << endl;
            }
            break;
        case '4':
            cout << "\n Let's clear all the values from the vector" << endl;

            do
            {
                nums.pop_back();
            } while (nums.size() != 0);

            cout << "\n* Final vector *\n";

            if (nums.size() == 0)
            {
                cout << "Empty" << endl;
            }

            for (int i = 0; i < nums.size(); i++)
            {
                cout << "Index: " << i << " Value: " << nums[i] << endl;
            }

            break;
        case '0':
            cout << "\nQuitting the application..." << endl;
            break;
        default:
            cout << "\n>> Invalid input! Please enter a number between 0 and 4." << endl;
            break;
        }

    } while (ans != '0');

    cout << "\nGood-bye! :)" << endl;

    /*
    // vector <type> name(size, value);
    vector<int> nums(3, 0);

    cout << "\nInitial vector:\n";

    // print loop
    for (int i = 0; i < nums.size(); i++)
    {
        cout << "Index: " << i << " Value: " << nums[i] << endl;
    }

    // check size
    cout << "Size of vector: " << nums.size() << "\n\n";

    // add 4th element at the end (25)
    nums.push_back(25);

    cout << "\nModified vector with push_back():\n";

    // print loop
    for (int i = 0; i < nums.size(); i++)
    {
        cout << "Index: " << i << " Value: " << nums[i] << endl;
    }

    // check size
    cout << "Size of vector: " << nums.size() << "\n\n";

    // remove the last element (25)
    nums.pop_back();

    cout << "\nModified vector with pop_back():\n";

    // print loop
    for (int i = 0; i < nums.size(); i++)
    {
        cout << "Index: " << i << " Value: " << nums[i] << endl;
    }

    // check size
    cout << "Size of vector: " << nums.size() << "\n\n";
    */

    return 0;
}
