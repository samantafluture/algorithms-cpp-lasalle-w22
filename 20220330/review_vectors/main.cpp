// Samanta Gimenez Fluture, 2022-03-30, Review of Vectors

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1(0), v2(0), v3(0);
    int num;
    double total = 0, avg = 0;

    while (v1.size() < 5)
    {
        cout << "Enter a number to be added to the vector: ";
        cin >> num;

        v1.push_back(num);
    }

    cout << "\nValues v1, \tValues v2, \t Average" << endl;

    cout << "***********************************" << endl;

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " " << endl;
    }

    cout << "***********************************" << endl;

    for (int i = 0; i < v1.size(); i++)
    {
        v2.push_back(v1[i]);

        cout << v1[i] << "\t|\t" << v2[i] << endl;
    }

    cout << "***********************************" << endl;

    for (int i = 0; i < v1.size(); i++)
    {
        total += v1[i];
        cout << v1[i] << "\t|\t" << v2[i] << "\t|\t" << total / (i + 1) << endl;
    }

    cout << "***********************************" << endl;

    for (int i = 0; i < v1.size(); i++)
    {
        cout << (v1[i] + 10) << "\t|\t" << (v2[i] * 10) << endl;
    }

    cout << "***********************************" << endl;
    cout << "\nValues v1, \tValues v2, \t Values v3" << endl;

    for (int i = (v1.size() - 1); i >= 0; i--)
    {
        v3.push_back(v1[i]);
    }

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << "\t|\t" << v2[i] << "\t|\t" << v3[i] << endl;
    }

    return 0;
}

/*
Output:

Values v1,      Values v2,       Average
***********************************
1 
2 
3 
4 
5 
***********************************
1       |       1
2       |       2
3       |       3
4       |       4
5       |       5
***********************************
1       |       1       |       1
2       |       2       |       1.5
3       |       3       |       2
4       |       4       |       2.5
5       |       5       |       3
***********************************
11      |       10
12      |       20
13      |       30
14      |       40
15      |       50
***********************************
1       |       1       |       5
2       |       2       |       4
3       |       3       |       3
4       |       4       |       2
5       |       5       |       1
*/