// Samanta Gimenez Fluture, 2022-03-11, Studying Strings

#include <iostream>
#include <string>

using namespace std;

void checkLetterA(string); // prototype

int main()
{
    string str; // string object

    checkLetterA(str); // using a function

    /*
    // using go to
    jump:
    cout << "Enter a string: ";
    cin >> str;

    cout << "You entered: " << str << endl;

    while (true)
    {
        // check if starts with letter a
        if (str[0] == 'A' || str[0] == 'a') {
            cout << "Start with letter a\n";
            break;
        } else {
            cout << "Start with other letter than a\n";
        }
        goto jump;
    }
    */

    // optimal version
    // while (true)
    // {
    //     cout << "Enter a string with letter a: ";
    //     cin >> str;

    //     if (str[0] == 'A' || str[0] == 'a')
    //     {
    //         cout << "Start with letter a\n";
    //         break;
    //     }
    // }

    // cout << "You entered: " << str << endl;

    /*
    // string object
    string firstName;
    string lastName;
    string fullName;
    int length;

    cout << "Enter your first name: ";
    getline(cin, firstName);

    cout << "Enter your last name: ";
    getline(cin, lastName);

    // concatenate
    fullName = firstName + " " + lastName;
    cout << "Fullname : " << fullName << endl;

    // total length of fullName after concatenation
    length = fullName.size();
    cout << "Fullname.size():  " << length << endl;
    */

    /*
    // c-string

    char str1[100], str2[100]; // array of 100 chars

    cout << "Enter a string: ";
    // cin >> str
    cin.getline(str1, 100); // get whole line

    cout << "You entered: " << str1 << endl;


    cout << "\nEnter another string: ";
    cin.getline(str2, 100); // get whole line

    cout << "You entered: " << str2 << endl;
    */

    return 0;
}

void checkLetterA(string str)
{
    while (true)
    {
        cout << "Enter a string with letter a: ";
        cin >> str;

        if (str[0] == 'A' || str[0] == 'a')
        {
            cout << "Awesome! " << str << " starts with letter a\n";
            break;
        }
    }
}