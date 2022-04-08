// Samanta Gimenez Fluture, 2022-04-07, Project #2
// Section 2

// Questions 4 - 9

/*

========
TO DO'S
> comments on code
> output
> validate fields empty
========

*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Structures of Person, Address and Student
// with global objects for each one
struct Person
{
    string firstName;
    string lastName;
    int age;
} person;

struct Address
{
    char address[41];
    char city[31];
    char postalCode[8];
    char state[21];
} address;

struct Student
{
    int ID;
    Person person;
    Address address;
} student;

// Global variables
vector<Student> studentList(0);
int searchId;

// Functions signatures
void verifyZeroId(int);
void verifyRepId(int);
void verifyAge(int);
void addStudent();
void searchStudent();
void editStudent();
void deleteStudent();
void swapStudent(Student, Student);
void sortStudent();
void printStudent();

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
            cout << "\n1. Creating and adding a new student\n";
            addStudent(); // cal the function that creates and add a new student
            break;
        case '2':
            cout << "\n2. Searching for a student\n";
            searchStudent(); // cal the function that searches for a student by id number
            break;
        case '3':
            cout << "\n3. Modifying the information of a student\n";
            editStudent(); // call the function that modifies student info by its number
            break;
        case '4':
            cout << "\n4. Deleting a student of the list\n";
            deleteStudent(); // call the function that deletes a student by its number
            break;
        case '5':
            cout << "\n5. Displaying the list of students\n";
            printStudent(); // call the function that displays the students list in ascending order
            break;
        case '0':
            cout << "\nDo you want to quit?"
                 << "\nEnter Y to exit or N to go back"
                 << "\n>> Your option: ";
            cin >> ans;

            // do confirmation if the user wants to quit or wants to go back to menu
            if (ans == 'Y' || ans == 'y')
            {
                cout << "\nQuitting the application..." << endl;
                ans = '0';
                break;
            }
            else if (ans == 'N' || ans == 'n')
            {
                cout << "\nGoing back to the menu..." << endl;
                continue;
            }
            else
            {
                cout << "\n* Invalid input, try again! *\n";
                continue;
            }
            break;
        default:
            cout << "* Invalid input, try again! *\n";
            break;
        }

    } while (ans != '0');

    studentList.clear(); // call pre-defined function that clears the vector after the loop end
    cout << "\n******** Good-bye! *********" << endl;

    return 0;
}

// verifies if user enters id number equals to 0
// loop to enter valid id number until id number is different to 0
void verifyZeroId(int *studentId)
{
    while (*studentId == 0)
    {
        cout << "\n* Error! The student ID can't be 0! *\n"
             << "* Please input a valid ID number *\n"
             << "\nEnter the student ID: ";
        cin >> *studentId;
        cin.ignore();
    }
}

// verifies if user enters id number equals to existing one
// loop checks if id number exists and other loop aks to enter a valid id number until different to an 
void verifyRepId(int *studentId)
{
    for (int i = 0; i < studentList.size(); i++)
    {
        while (*studentId == studentList[i].ID || *studentId == 0)
        {
            if (*studentId == studentList[i].ID)
            {
                cout << "\n* Error! The student ID " << *studentId << " already exists! *\n"
                     << "* Please input a valid ID number *\n"
                     << "\nEnter the student ID: ";
                cin >> *studentId;
                cin.ignore();
            }
            else if (*studentId == 0)
            {
                cout << "\n* Error! The student ID can't be 0! *\n"
                     << "* Please input a valid ID number *\n"
                     << "\nEnter the student ID: ";
                cin >> *studentId;
                cin.ignore();
            }
        }
    }
}

void verifyAge(int *studentAge)
{
    while (*studentAge <= 0 || *studentAge > 100)
    {
        cout << "\n* Please enter a valid age *\n";
        cout << "Enter the student age: ";
        cin >> *studentAge;
        cin.ignore();
    }
}

void addStudent()
{
    cout << "\nEnter the student ID: ";
    cin >> student.ID;
    cin.ignore();

    verifyZeroId(&student.ID);
    verifyRepId(&student.ID);

    cout << "Enter the student first name: ";
    getline(cin, student.person.firstName);

    while (student.person.firstName == "" || student.person.firstName.length() < 1)
    {
        cout << "\n* Error! This field can't be empty *\n";
        cout << "Enter the student first name: ";
        getline(cin, student.person.firstName);
    }

    cout << "Enter the student last name: ";
    getline(cin, student.person.lastName);

    while (student.person.lastName == "" || student.person.lastName.length() < 1)
    {
        cout << "\n* Error! This field can't be empty *\n";
        cout << "Enter the student last name: ";
        getline(cin, student.person.lastName);
    }

    cout << "Enter the student age: ";
    cin >> student.person.age;
    cin.ignore();

    verifyAge(&student.person.age);

    cout << "Enter the student address: ";
    cin.get(student.address.address, 41);
    cin.ignore();

    cout << "Enter the student city: ";
    cin.get(student.address.city, 31);
    cin.ignore();

    cout << "Enter the student postal code: ";
    cin.get(student.address.postalCode, 8);
    cin.ignore();

    cout << "Enter the student state or province: ";
    cin.get(student.address.state, 21);
    cin.ignore();

    studentList.push_back(student);
}

void swapStudent(Student *studentA, Student *studentB)
{
    Student temp = *studentA;
    *studentA = *studentB;
    *studentB = temp;
}

void sortStudent()
{
    for (int i = 0; i < studentList.size(); i++)
    {
        // compare student ID to the next student ID
        // and swap students if the next ID (j + 1) is smaller then this (j)
        for (int j = 0; j < studentList.size() - 1; j++)
        {
            if (studentList[j].ID > studentList[j + 1].ID)
            {
                swapStudent(&studentList[j], &studentList[j + 1]);
            }
        }
    }
}

void printStudent()
{
    if (studentList.size() == 0)
    {
        cout << "\n* Ops, the list of students is empty *\n";
    }
    else
    {

        sortStudent();

        for (int i = 0; i < studentList.size(); i++)
        {

            cout << "\nStudent ID: " << studentList[i].ID
                 << "\nStudent first name: " << studentList[i].person.firstName
                 << "\nStudent last name: " << studentList[i].person.lastName
                 << "\nStudent age: " << studentList[i].person.age
                 << "\nStudent address: " << studentList[i].address.address
                 << "\nStudent city: " << studentList[i].address.city
                 << "\nStudent postal code: " << studentList[i].address.postalCode
                 << "\nStudent state or province: " << studentList[i].address.state
                 << "\n";
        }
    }
}

void searchStudent()
{
    cout << "\nEnter the ID of the student: ";
    cin >> searchId;

    for (int i = 0; i < studentList.size(); i++)
    {
        if (searchId == studentList[i].ID)
        {
            cout << "\n* Student of ID " << searchId << " found! *\n";

            cout << "\nStudent ID: " << studentList[i].ID
                 << "\nStudent first name: " << studentList[i].person.firstName
                 << "\nStudent last name: " << studentList[i].person.lastName
                 << "\nStudent age: " << studentList[i].person.age
                 << "\nStudent address: " << studentList[i].address.address
                 << "\nStudent city: " << studentList[i].address.city
                 << "\nStudent postal code: " << studentList[i].address.postalCode
                 << "\nStudent state or province: " << studentList[i].address.state
                 << "\n";
        }
        else
        {
            cout << "\n* Student of ID " << searchId << " not found! *\n";
        }
    }
}

void editStudent()
{
    cout << "\n* First, search for the student you want to edit *\n";

    cout << "\nEnter the ID of the student: ";
    cin >> searchId;
    cin.ignore();

    for (int i = 0; i < studentList.size(); i++)
    {
        if (searchId == studentList[i].ID)
        {
            cout << "\n* Student of ID " << searchId << " found! *\n";

            cout << "\nStudent ID: " << studentList[i].ID
                 << "\nStudent first name: " << studentList[i].person.firstName
                 << "\nStudent last name: " << studentList[i].person.lastName
                 << "\nStudent age: " << studentList[i].person.age
                 << "\nStudent address: " << studentList[i].address.address
                 << "\nStudent city: " << studentList[i].address.city
                 << "\nStudent postal code: " << studentList[i].address.postalCode
                 << "\nStudent state or province: " << studentList[i].address.state
                 << "\n";

            cout << "\n* Now, enter the new information *\n\n";

            cout << "Enter the student first name: ";
            getline(cin, studentList[i].person.firstName);

            cout << "Enter the student last name: ";
            getline(cin, studentList[i].person.lastName);

            cout << "Enter the student age: ";
            cin >> studentList[i].person.age;
            cin.ignore();

            verifyAge(&student.person.age);

            cout << "Enter the student address: ";
            cin.get(studentList[i].address.address, 41);
            cin.ignore();

            cout << "Enter the student city: ";
            cin.get(studentList[i].address.city, 31);
            cin.ignore();

            cout << "Enter the student postal code: ";
            cin.get(studentList[i].address.postalCode, 8);
            cin.ignore();

            cout << "Enter the student state or province: ";
            cin.get(studentList[i].address.state, 21);
            cin.ignore();

            studentList.push_back(studentList[i]);
            studentList.pop_back();
            break;
        }
        else
        {
            cout << "\n* Student of ID " << searchId << " not found! *\n";
        }
    }
}

void deleteStudent()
{
    char del;

    cout << "\n* First, search for the student you want to delete *\n";

    cout << "\nEnter the ID of the student: ";
    cin >> searchId;
    cin.ignore();

    for (int i = 0; i < studentList.size(); i++)
    {
        if (searchId == studentList[i].ID)
        {
            cout << "\n* Student of ID " << searchId << " found! *\n";

            cout << "\nStudent ID: " << studentList[i].ID
                 << "\nStudent first name: " << studentList[i].person.firstName
                 << "\nStudent last name: " << studentList[i].person.lastName
                 << "\nStudent age: " << studentList[i].person.age
                 << "\nStudent address: " << studentList[i].address.address
                 << "\nStudent city: " << studentList[i].address.city
                 << "\nStudent postal code: " << studentList[i].address.postalCode
                 << "\nStudent state or province: " << studentList[i].address.state
                 << "\n";

            do
            {
                cout << "\n* Are you sure you want to delete? *\n"
                     << "\nEnter Y to delete or N to cancel"
                     << "\n>> Your option: ";
                cin >> del;

                if (del == 'Y' || del == 'y')
                {
                    studentList.erase(studentList.begin() + i);

                    cout << "\n* Student of ID " << searchId << " deleted *" << endl;
                    break;
                }
                else if (del == 'N' || del == 'n')
                {
                    cout << "\nGoing back to the menu..." << endl;
                    break;
                }
                else
                {
                    cout << "\n* Invalid input! *\n";
                }
            } while (del != 'Y' && del != 'y');
        }
        else
        {
            cout << "\n* Student of ID " << searchId << " not found! *\n";
        }
    }
}

// Output

/*



*/