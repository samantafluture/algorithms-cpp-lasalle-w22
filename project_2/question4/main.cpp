// Samanta Gimenez Fluture, 2022-04-01, Project #2

// Question 4

#include <iostream>
#include <string>
using namespace std;

struct Person
{
    string firstName;
    string lastName;
    int age;
};

struct Address
{
    char numberAndStreet[40];
    char city[30];
    char postalCode[7];
    char state[20];
} a1;

struct Student
{
    string ID;
    int age;
    Person p1;
    Address a1;
} s1;

int main()
{
    cout << "Enter the student ID: ";
    getline(cin, s1.ID);

    cout << "Enter the student age: ";
    cin >> s1.age;
    cin.ignore();

    cout << "Enter the student first name: ";
    getline(cin, s1.p1.firstName);

    cout << "Enter the student postal code: ";
    cin.get(s1.a1.postalCode, 7);

    cout << "\nStudent ID: " << s1.ID
         << "\nStudent age: " << s1.age
         << "\nStudent first name: " << s1.p1.firstName
         << "\nStudent postal code: " << s1.a1.postalCode
         << "\n";

    return 0;
}