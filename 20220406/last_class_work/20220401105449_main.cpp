// Samanta Gimenez Fluture, 2022-04-01, Project #2

// Question 4

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Person
{
    string firstName;
    string lastName;
    int age;
};

struct Address
{
    char address[41];
    char city[31];
    char postalCode[8];
    char state[21];
} a1;

struct Student
{
    string ID;
    int age;
    Person p1;
    Address a1;
} s1;

void getStudents();
void displayStudents();

Student students[2]; // create array global

int main()
{
    getStudents(); // call

    // students[0] = s1; // add to array

    displayStudents(); // display

    return 0;
}

void getStudents()
{
    for (int i = 0; i < 2; i++)
    {
        cout << "\nStudent #" << (i+1) << endl;

        cout << "Enter the student ID: ";
        getline(cin, students[i].ID);

        cout << "Enter the student age: ";
        cin >> students[i].age;
        cin.ignore();

        cout << "Enter the student first name: ";
        getline(cin, students[i].p1.firstName);

        cout << "Enter the student address: ";
        cin.get(students[i].a1.address, 41);
        cin.ignore();

        cout << "Enter the student postal code: ";
        cin.get(students[i].a1.postalCode, 8);
        cin.ignore();
    }
}

void displayStudents()
{
    for (int i = 0; i < 2; i++)
    {
        cout << "Displaying the list of students...\n";
        cout << "\nStudent ID: " << students[i].ID
             << "\nStudent age: " << students[i].age
             << "\nStudent first name: " << students[i].p1.firstName
             << "\nStudent number and street name: " << students[i].a1.address
             << "\nStudent postal code: " << students[i].a1.postalCode
             << "\n";
    }
}