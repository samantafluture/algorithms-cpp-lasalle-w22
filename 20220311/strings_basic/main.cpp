// Samanta Gimenez Fluture, 2022-03-11, Studying Strings

#include <iostream>
#include <string> // have access to predefined functions
using namespace std;

void displayMultiLine(string);
void displayOneLine(string);

int main()
{

    string name; // string = array of chars
    string key = "mango";
    string ans;

    cout << "Enter name: ";
    // cin >> name; // takes only the first word before the space
    getline(cin, name); // takes the whole line

    displayOneLine(name);
    displayMultiLine(name);

    // cout << name.find("a"); // find char "a" in the string

    // do/while loop -> to find out the answer
    do
    {
        cout << "\nWhat is my favourite fruit? ";
        cin >> ans;
    } while (ans != key);

    cout << "Answer is correct!!" << endl;

    return 0;
}

void displayMultiLine(string s)
{
    for (int i = 0; i < s.size(); i++) // s.size() a function from string class
    {
        cout << s[i] << "\n";
    }
}

void displayOneLine(string s)
{
    cout << "Hello " << s << endl;
}

/*
// check if there's a number in a string

#include <iostream>
using namespace std;

bool isNumber(const string& str)
{
    for (char const &c : str) {
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}

int main(){
    string str1 = "231524randstr23";
    string str2 = "23152423";
    string str3 = "a3152423";

    isNumber(str1) ? cout << "Number\n" : cout << "Not number\n";
    isNumber(str2) ? cout << "Number\n" : cout << "Not number\n";
    isNumber(str3) ? cout << "Number\n" : cout << "Not number\n";

    return 0;
}
*/