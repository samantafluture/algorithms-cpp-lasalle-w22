// Samanta Gimenez Fluture, 2022-04-01, Project #2

// Question 4

/*
TO DO'S
> validations for each field (and the way the user should enter)
> should be a way to stop inserting students?
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Person
{
    string firstName;
    string lastName;
    int age;
} p1;

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
    Person p1;
    Address a1;
} s1;

Student student;
vector<Student> studentList(0);

void addStudents();
void displayStudents();

int main()
{
    char ans;

    cout << "\n******** Student Management App *********" << endl;

    do
    {
        cout << "\nEnter 1 to create and add a student\n"
             << "Enter 2 to search for a student by number\n"
             << "Enter 3 to modify the information of the student\n"
             << "Enter 4 to delete the information of the student\n"
             << "Enter 5 to display the student list in ascending order\n"
             << "Enter 0 to exit the application\n"
             << ">> Your option: ";
        cin >> ans;
        cin.ignore();

        switch (ans)
        {
        case '1':
            addStudents();
            break;
        case '2':
            displayStudents();
            break;
        default:
            break;
        }

    } while (ans != '0');

    return 0;
}

// void mockStudents()
// {
//     student.ID = "2130414";
//     student.p1.age = 33;
//     student.p1.firstName = "Samanta";
//     student.p1.lastName = "Gimenez Fluture";
//     student.p1.age = 33;
//     student.a1.address = "3846 Wellington";
//     student.a1.city = "Montreal";
//     student.a1.postalCode = "H4G 1V2";
//     student.a1.state = "Quebec";

//     studentList.push_back(student.ID);
// }

void addStudents()
{
    cout << "\nEnter the student ID: ";
    getline(cin, student.ID);

    cout << "Enter the student first name: ";
    getline(cin, student.p1.firstName);

    cout << "Enter the student last name: ";
    getline(cin, student.p1.lastName);

    cout << "Enter the student age: ";
    cin >> student.p1.age;
    cin.ignore();

    // validate age input
    do
    {
        if (student.p1.age <= 0 || student.p1.age > 100)
        {
            cout << "\n* Please enter a valid age *\n";
            cout << "Enter the student age: ";
            cin >> student.p1.age;
            cin.ignore();
        }
        else
        {
            break;
        }
    } while (student.p1.age <= 0 || student.p1.age > 100);

    cout << "Enter the student address: ";
    cin.get(student.a1.address, 41);
    cin.ignore();

    cout << "Enter the student city: ";
    cin.get(student.a1.city, 31);
    cin.ignore();

    cout << "Enter the student postal code: ";
    cin.get(student.a1.postalCode, 8);
    cin.ignore();

    cout << "Enter the student state or province: ";
    cin.get(student.a1.state, 21);
    cin.ignore();

    studentList.push_back(student);
}

void displayStudents()
{
    cout << "\n2. Displaying the list of students\n";
    if (studentList.size() == 0)
    {
        cout << "\n* Ops, the list of students is empty *\n";
    }
    else
    {
        for (int i = 0; i < studentList.size(); i++)
        {

            cout << "\nStudent ID: " << studentList[i].ID
                 << "\nStudent first name: " << studentList[i].p1.firstName
                 << "\nStudent last name: " << studentList[i].p1.lastName
                 << "\nStudent age: " << studentList[i].p1.age
                 << "\nStudent address: " << studentList[i].a1.address
                 << "\nStudent city: " << studentList[i].a1.city
                 << "\nStudent postal code: " << studentList[i].a1.postalCode
                 << "\nStudent state or province: " << studentList[i].a1.state
                 << "\n";
        }
    }
}