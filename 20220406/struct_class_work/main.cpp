// Samanta Gimenez Fluture, 2022-04-06, Testing struct

/*
structures can have functions as well
structures reserve in a memory space capable to hold different types os variables, as a group
*/

#include <iostream>
#include <string>
using namespace std;

struct Person
{
    string firstName, lastName;
    int age;
};

struct Employee
{
    Person p1;
    double salary;
};

struct Student
{
    Person p1;
    int studentID;
};

int main()
{
    Employee e1;
    Student s1;

    e1.p1.firstName = "John Doe";
    s1.p1.firstName = "Samanta Fluture";

    cout << "e1 first name: " << e1.p1.firstName << endl;
    cout << "s1 first name: " << s1.p1.firstName << endl;

    return 0;
}
