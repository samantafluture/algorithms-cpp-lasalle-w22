#include <iostream>
using namespace std;

int main()
{
    float average = 0, sum = 0.0;
    int i = 0, n = 0, num = 0;

    do
    {
        cout << "Enter 1 to modify those two variables,\n"
             << "Enter 2 to modify only the second variable,\n"
             << "Enter 0 to quit." << endl;
        cin >> i;
        
        switch (i)
        {
        case 1:
        {
            cout << "Enter the first value : ";
            cin >> num;
            cout << "Enter the 2nd value : ";
            cin >> n;
            cout << "Value 1 is: " << num << "\nValue 2 is: " << n << endl;
        }
        break;
        case 2:
        {
            cout << "Enter the 2nd value : ";
            cin >> n;
            cout << "Value 1 is: " << num << "\nValue 2 is: " << n << endl;
        }
        break;
        case 0:
        {
            cout << "Bye!";
        }
        break;
        default:
        {
            cout << "Enter 1, or 2, or 0 to quit.\n";
        }
        break;
        } // end switch

    } while (i != 0); // end while

    return 0;
}
/*
int main()
{
    float num, average, sum = 0.0;
    int i, n;
    label2:
      cout << "Enter the first value : ";
      cin >> num;
    label3:
      cout << "Enter the 2nd value : ";
      cin >> n;

    cout << "Value 1 is: "<< num << "\nValue 2 is: "<<n<<endl;

    label5:
      cout << "Enter 1 to modify those two variables,\n"
           << "Enter 2 to modify only the second variable,\n"
           << "Enter 0 to quit." << endl;
      cin >> i;

    if(i == 1){goto label2;}
    else if(i == 2) {goto label3;}
    else if(i == 0) {goto label4;}
    else {goto label5;}

    label4:
      cout << "Bye!";
return 0;
}
/*
    cout << "Maximum number of inputs: ";
    cin >> n;
    for (i = 1; i <= n; ++i)
    {
        cout << "Enter the value " << i << ": ";
        cin >> num;

        if (num < 0.0)
        {
            // Control of the program move to jump:
            goto jump;
        }
        sum += num;
    }

jump:
    average = sum / (i - 1);
    cout << "\nAverage = " << average;
    return 0;
}

/*
// using break statement inside
// nested for loop
int main() {
    int number;
    int sum = 0;
    // nested for loops
    // first loop
    for (int i = 1; i <= 3; i++) {
        if (i == 2) {
                continue;
            }
        // second loop
        for (int j = 1; j <= 3; j++) {
            /*if (i == 2) {
                break;
            }
            cout << "i = " << i << ", j = " << j << endl;
        }
    }
    return 0;
}
/*
int main()
{
    // WHILE example
    int w = 1;
    cout << "1. WHILE example" << endl;
    while (w <= 5)
    {
        cout << w << " ";
        ++w;
    }

    // DO WHILE example
    int d = 1;
    cout << "\n\n2. DO WHILE example" << endl;
    do
    {
        cout << d << " ";
        ++d;
    } while (d <= 5);

    // FOR example
    cout << "\n\n3. FOR example" << endl;
    for (int f = 1; f <= 5; ++f)
    {
        cout << f << " ";
    }

    return 0;
}
/*
int main()
{   int i;
    cout << "Before for loop \n";
    for (i = 1; i >= -5;--i) {
        cout << i<< " ";
    }
    cout << "\nAfter for loop\n" << i;
return 0;
}
*/