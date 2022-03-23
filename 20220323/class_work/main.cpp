// Samanta Gimenez Fluture, 2022-03-23, Working with vectors

/*
vectors are dynamic arrays
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector <type> name(size, value);
    vector<int> nums(3, 0);

    // print loop
    for (int i = 0; i < 3; i++)
    {
        cout << "Index: " << i << " Value: " << nums[i] << endl;
    }

    // check size
    cout << "Size of vector: " << nums.size() << "\n\n";

    // add 4th element at the end (25)
    nums.push_back(25);

    // print loop
    for (int i = 0; i < nums.size(); i++)
    {
        cout << "Index: " << i << " Value: " << nums[i] << endl;
    }

    // check size
    cout << "Size of vector: " << nums.size() << "\n\n";

    // remove the last element (25)
    nums.pop_back();

    // print loop
    for (int i = 0; i < nums.size(); i++)
    {
        cout << "Index: " << i << " Value: " << nums[i] << endl;
    }

    // check size
    cout << "Size of vector: " << nums.size() << "\n\n";

    return 0;
}
