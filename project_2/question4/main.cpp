// Samanta Gimenez Fluture, 2022-04-01, Project #2

// Question 4

/*
TO DO'S
> validations for each field (and the way the user should enter)
> should be a way to stop inserting students?
> you cannot add duplicate id
> clear vector after when?
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

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

vector<Student> studentList(0);
int searchId;

void addStudent();
void searchStudent();
void modifyStudent();
void deleteStudent();
void displayStudentList();
bool compareStudent(Student, Student);

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
            addStudent();
            break;
        case '2':
            cout << "\n2. Searching for a student\n";
            searchStudent();
            break;
        case '3':
            cout << "\n3. Modifying the information of a student\n";
            modifyStudent();
            break;
        case '4':
            cout << "\n4. Deleting a student of the list\n";
            deleteStudent();
            break;
        case '5':
            cout << "\n5. Displaying the list of students\n";
            displayStudentList();
            break;
        case '0':
            cout << "\nDo you want to quit?"
                 << "\nEnter Y to exit or N to go back"
                 << "\n>> Your option: ";
            cin >> ans;

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

    studentList.clear();
    cout << "\n******** Good-bye! *********" << endl;

    return 0;
}

void addStudent()
{
    cout << "\nEnter the student ID: ";
    cin >> student.ID;
    cin.ignore();

    cout << "Enter the student first name: ";
    getline(cin, student.person.firstName);

    cout << "Enter the student last name: ";
    getline(cin, student.person.lastName);

    cout << "Enter the student age: ";
    cin >> student.person.age;
    cin.ignore();

    // validate age input
    do
    {
        if (student.person.age <= 0 || student.person.age > 100)
        {
            cout << "\n* Please enter a valid age *\n";
            cout << "Enter the student age: ";
            cin >> student.person.age;
            cin.ignore();
        }
        else
        {
            break;
        }
    } while (student.person.age <= 0 || student.person.age > 100);

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

bool compareStudent(Student a, Student b)
{
    return a.ID < b.ID;
}

void displayStudentList()
{
    if (studentList.size() == 0)
    {
        cout << "\n* Ops, the list of students is empty *\n";
    }
    else
    {

        sort(studentList.begin(), studentList.end(), compareStudent);

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

void modifyStudent()
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

            // validate age input
            do
            {
                if (studentList[i].person.age <= 0 || studentList[i].person.age > 100)
                {
                    cout << "\n* Please enter a valid age *\n";
                    cout << "Enter the student age: ";
                    cin >> studentList[i].person.age;
                    cin.ignore();
                }
                else
                {
                    break;
                }
            } while (studentList[i].person.age <= 0 || studentList[i].person.age > 100);

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
