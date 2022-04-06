// Samanta Gimenez Fluture, 2022-04-06, Testing struct

/*
structures can have functions as well
structures reserve in a memory space capable to hold different types os variables, as a group
*/

// https://stackoverflow.com/questions/30963204/c-vector-bubble-sort

#include <iostream>
#include <string>
#include <vector>
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
} e1;

struct Student
{
    Person p2;
    int studentID;
} s1;

Employee arr_Emp[2];
vector<Student> v_Student(0);

// add employee to array
void addEmployeeArr()
{
    // enter values by the user
    for (int i = 0; i < 2; i++)
    {
        cout << "\nPerson #" << (i + 1) << endl;

        cout << "Enter the first name: ";
        getline(cin, e1.p1.firstName);

        cout << "Enter the last name: ";
        getline(cin, e1.p1.lastName);

        cout << "Enter the age: ";
        cin >> e1.p1.age;
        cin.ignore();

        cout << "Enter the salary: ";
        cin >> e1.salary;
        cin.ignore();

        arr_Emp[i] = e1;
    }
}

// display array of employees
void displayEmployeeArr()
{
    // displaying via loop
    for (int i = 0; i < 2; i++)
    {
        cout << "\nPerson #" << (i + 1) << endl;
        cout << "First Name: " << arr_Emp[i].p1.firstName << endl;
        cout << "Last Name: " << arr_Emp[i].p1.lastName << endl;
        cout << "Age: " << arr_Emp[i].p1.age << endl;
        cout << "Salary: " << arr_Emp[i].salary << endl;
    }
}

// add student to vector
void addStudentVec()
{
    for (size_t i = 0; i < 2; i++)
    {
        cout << "\nStudent #" << (i + 1) << endl;

        cout << "Enter the first name: ";
        getline(cin, s1.p2.firstName);

        cout << "Enter the last name: ";
        getline(cin, s1.p2.lastName);

        cout << "Enter the age: ";
        cin >> s1.p2.age;
        cin.ignore();

        cout << "Enter the student ID: ";
        cin >> s1.studentID;
        cin.ignore();

        v_Student.push_back(s1);
    }
}

void printStudentsVec()
{
    for (int i = 0; i < v_Student.size(); i++)
    {
        cout << "\nStudent #" << (i + 1) << endl;
        cout << "first name: " << v_Student[i].p2.firstName << endl;
        cout << "last name: " << v_Student[i].p2.lastName << endl;
        cout << "age: " << v_Student[i].p2.age << endl;
        cout << "studentID: " << v_Student[i].studentID << endl;
    }
}

// function to swap values
// need to pass by reference to sort the original values 
// and not just these copies
void swapStudent(Student *a, Student *b)
{
    Student temp = *a;
    *a = *b;
    *b = temp;
}

// function to sort students
void sortStudent()
{
    for (int i = 0; i < v_Student.size(); i++)
    {
        // compare student ID to the next student ID
        // and swap students if the next ID (j + 1) is smaller then this (j) 
        for (int j = 0; j < v_Student.size() - 1; j++)
        {
            if (v_Student[j].studentID > v_Student[j + 1].studentID)
            {
                swapStudent(&v_Student[j], &v_Student[j + 1]);
            }
        }
    }
}
int main()
{

    addStudentVec();
    printStudentsVec();
    sortStudent();
    printStudentsVec();

    return 0;
}
