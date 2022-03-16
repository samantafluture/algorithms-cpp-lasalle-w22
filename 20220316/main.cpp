// Samanta Gimenez Fluture, 2022-03-16, Class work on functions, strings and arrays

#include <iostream>
#include <string>
using namespace std;

string val(double);

int main() {

    cout << "The return value is: " << val(4.5)[15] << val(4.5)[16] << val(4.5)[17] << endl; 

    return 0;
}

string val(double num) {
    if (num > 0)
    {
        return "this number is positive";
    } else {
        return "this number is negative";
    }
    
}
