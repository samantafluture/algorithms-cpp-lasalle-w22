#include <iostream>
using namespace std;

int main()
{
    char ans;
    int i;

    do
    {
        cout << "Enter 1 for a loop from 0 to 200\n";
        cout << "Enter 2 for a loop from 0 to 50\n";
        cout << "Enter 3 for a loop from 0 to 20\n";
        cout << "Enter 4 to quit\n";
        cin >> ans;

        switch (ans)
        {
        case '1':
            for (i = 0; i <= 200; i = i + 10)
            {
                cout << i << endl;
            }
            break;
        case '2':
            for (i = 0; i <= 50; i = i + 5)
            {
                cout << i << endl;
            }
            break;
        case '3':
            for (i = 0; i <= 20; i = i + 1)
            {
                cout << i << endl;
            }
            break;
        case '4':
            cout << "Bye!";
            break;
        default:
            break;
        }

    } while (ans != '4');

    return 0;
}