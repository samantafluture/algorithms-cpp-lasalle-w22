// Samanta Gimenez Fluture, 2022-03-30, Review of Arrays and Vectors

// create array same size, copies one to another

/*

#include <iostream>
using namespace std;

int main()
{
    int arr1[3] = {1, 2, 3}, arr2[3];
    double total = 0, avg = 0;

    cout << "Values arr1, \tValues arr2, \t Average" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << arr1[i] << "\t|\t"
             << arr2[i] << endl;
    }

    cout << "***************************************" << endl;

    for (int i = 0; i < 3; i++)
    {
        arr2[i] = arr1[i]; // arr1[i] is in the right because it's the one that contains the values

        cout << arr1[i] << "\t|\t"
             << arr2[i] << endl;
    }

    cout << "***************************************" << endl;

    for (int i = 0; i < 3; i++)
    {
        total += arr1[i];
        cout << arr1[i] << "\t|\t" << arr2[i] << "\t|\t" << total/(i + 1) << endl;
    }

    return 0;
}

*/

// create string, copy to another in reverse order

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "Hello", str2 = "     ";

    cout << "string str1, \tstring str2" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << str1[i] << "\t|\t" << str2[i] << endl;
    }

    cout << "*******************************" << endl;

    for (int i = 0; i < 5; i++)
    {
        str2[4-i] = str1[i]; // the last char of str2 is the 0 of the srt1 > and it goes on like this, inversing the index order
    }

    // 4-i > it has to start at 4 because the last char of string is null

    for (int i = 0; i < 5; i++)
    {
        cout << str1[i] << "\t|\t" << str2[i] << endl;
    }

    return 0;
}