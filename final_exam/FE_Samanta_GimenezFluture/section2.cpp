// Samanta Gimenez Fluture, 2022-04-29, Final Exam

// Section 2

// Question 3-A - Structures

/*
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Person {
    string firstName;
    string lastName;
} p1;

struct Empl {
    int id;
    string position;
    Person p1;
    double salary;
};

Empl employee;

int main() {
    employee.id = 1110;
    employee.position = "Manager";
    employee.p1.firstName = "Paul";
    employee.p1.lastName = "Young";
    employee.salary = 000000;

    cout << "* Employee information *" << endl;
    cout << "ID: "<< employee.id << endl;
    cout << "Position: " << employee.position << endl;
    cout << "First Name: " << employee.p1.firstName << endl;
    cout << "Last Name: " << employee.p1.lastName << endl;
    cout << "Salary: " << employee.salary << endl;

    return 0;
}
*/

/*
Output:

* Employee information *
ID: 1110
Position: Manager
First Name: Paul
Last Name: Young
Salary: 0
*/

// Question 3-B - Edit-time

/*
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Person
{
    string firstName;
    string lastName;
} p1;

struct Empl
{
    int id;
    string position;
    Person p1;
    int salary;
};

Empl employee;
vector<Empl> employeeList;

void addEmployee();
void printEmployee();

int main()
{
    cout << "\n**** Employee Management Application ****\n";

    addEmployee();

    printEmployee();

    return 0;
}

void addEmployee()
{
    cout << "\n* Adding new employee *\n";

    cout << "\nID of the employee: ";
    cin >> employee.id;
    cin.ignore();

    cout << "Position of th employee: ";
    getline(cin, employee.position);

    cout << "First name of the employee: ";
    getline(cin, employee.p1.firstName);

    cout << "Last name of the employee: ";
    getline(cin, employee.p1.lastName);

    cout << "Salary of the employee: ";
    cin >> employee.salary;
    cin.ignore();
}

void printEmployee()
{
    cout << "\n* Displaying employee information *\n"
         << endl;
    cout << "ID: " << employee.id << endl;
    cout << "Position: " << employee.position << endl;
    cout << "First Name: " << employee.p1.firstName << endl;
    cout << "Last Name: " << employee.p1.lastName << endl;
    cout << "Salary: " << employee.salary << endl;
}
*/

/*
Output:

**** Employee Management Application ****

* Adding new employee *

ID of the employee: 1110
Position of th employee: Manager
First name of the employee: Paul
Last name of the employee: Young
Salary of the employee: 2130414

* Displaying employee information *

ID: 1110
Position: Manager
First Name: Paul
Last Name: Young
Salary: 2130414
*/

// Question 4, 5, 6, 7

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Person
{
    string firstName;
    string lastName;
} p1;

struct Empl
{
    int id;
    string position;
    Person p1;
    double salary;
};

Empl employee;
vector<Empl> employeeList;

// prototypes
void addHardCodedEmployee();
void addEmployee();
void printEmployee();
void printSmallestSalary();
void calAvgSalary();

int main()
{
    cout << "\n**** Samanta Employee Management Application ****\n";
    char ans;

    // adding hard coded employees to the vector list
    addHardCodedEmployee();

    do
    {
        cout << "\nEnter 1 to create an employee\n"
             << "Enter 2 to search for an employee with the smallest salary\n"
             << "Enter 3 to calculate and display the employee’s average salary\n"
             << "Enter 4 to display the employee list data\n"
             << "Enter 0 to quit\n\n"
             << ">> Enter your choice: ";
        cin >> ans;

        switch (ans)
        {
        case '1':
            addEmployee();
            break;
        case '2':
            printSmallestSalary();
            break;
        case '3':
            calAvgSalary();
            break;
        case '4':
            printEmployee();
            break;
        case '0':
            cout << "\nAre you sure you want to quit?\n"
                 << "Enter Y to exit or N to cancel\n"
                 << ">> Enter your choice: ";
            cin >> ans;
            // do confirmation if the user wants to quit or wants to go back to menu
            if (ans == 'Y' || ans == 'y')
            {
                cout << "\nQuitting the application..." << endl;
                ans = '0';
                break;
            }
            else
            {
                cout << "\nGoing back to the menu..." << endl;
                continue;
            }
            break;
        default:
            cout << "\nInvalid input, please try again!\n";
            break;
        }

    } while (ans != '0');

    return 0;
}

// function to create and add a new employee to the list
void addEmployee()
{
    cout << "\n* Adding new employee *\n";

    cout << "\nID of the employee: ";
    cin >> employee.id;
    cin.ignore();

    cout << "Position of th employee: ";
    getline(cin, employee.position);

    cout << "First name of the employee: ";
    getline(cin, employee.p1.firstName);

    cout << "Last name of the employee: ";
    getline(cin, employee.p1.lastName);

    cout << "Salary of the employee: ";
    cin >> employee.salary;
    cin.ignore();

    employeeList.push_back(employee);
}

void addHardCodedEmployee()
{
    // adding myself as an employee
    employee.id = 2130414;
    employee.position = "Developer";
    employee.p1.firstName = "Samanta";
    employee.p1.lastName = "Gimenez Fluture";
    employee.salary = 80000;

    employeeList.push_back(employee);

    // adding other
    employee.id = 103239;
    employee.position = "Manager";
    employee.p1.firstName = "Paul";
    employee.p1.lastName = "Young";
    employee.salary = 40000;

    employeeList.push_back(employee);
}

// function to print employees
void printEmployee()
{
    cout << "\n* Displaying employee information *\n\n";

    for (int i = 0; i < employeeList.size(); i++)
    {
        cout << "ID: " << employeeList[i].id << endl;
        cout << "Position: " << employeeList[i].position << endl;
        cout << "First Name: " << employeeList[i].p1.firstName << endl;
        cout << "Last Name: " << employeeList[i].p1.lastName << endl;
        cout << "Salary: " << employeeList[i].salary << endl;
        cout << "\n";
    }
}

// function to find de smallest salary and print this employee
void printSmallestSalary()
{

    cout << "\n* Displaying employee with smallest salary *\n\n";

    int smallest = 9999999;

    // find the smallest
    for (int i = 0; i < employeeList.size(); i++)
    {
        if (employeeList[i].salary < smallest)
        {
            smallest = employeeList[i].salary;
        }
    }

    // print by matching the smallest with the salary of an employee
    for (int i = 0; i < employeeList.size(); i++)
    {
        if (smallest == employeeList[i].salary)
        {
            cout << "ID: " << employeeList[i].id << endl;
            cout << "Position: " << employeeList[i].position << endl;
            cout << "First Name: " << employeeList[i].p1.firstName << endl;
            cout << "Last Name: " << employeeList[i].p1.lastName << endl;
            cout << "Salary: " << employeeList[i].salary << endl;
            cout << "\n";
        }
    }
}

// calculate avg by first calc sum
void calAvgSalary()
{
    int sum = 0;
    int avg = 0;

    for (int i = 0; i < employeeList.size(); i++)
    {
        sum += employeeList[i].salary;
    }

    avg = sum / employeeList.size();

    cout << "\nThe employee's average salary is: $" << avg << endl;
}

// Question 8
void displayNameAndId() {
    cout << "\n* Displaying employee first name and id *\n\n";

    for (int i = 0; i < employeeList.size(); i++)
    {
        cout << "ID: " << employeeList[i].id << endl;
        cout << "First Name: " << employeeList[i].p1.firstName << endl;
        cout << "\n";
    }
}

/*
Output:

**** Samanta Employee Management Application ****

Enter 1 to create an employee
Enter 2 to search for an employee with the smallest salary
Enter 3 to calculate and display the employeeÆs average salary
Enter 4 to display the employee list data
Enter 0 to quit

>> Enter your choice: 1

* Adding new employee *

ID of the employee: 121312
Position of th employee: Manager
First name of the employee: Jane
Last name of the employee: Doe
Salary of the employee: 232344

>> Enter your choice: 2

* Displaying employee with smallest salary *

ID: 103239
Position: Manager
First Name: Paul
Last Name: Young
Salary: 40000>> Enter your choice: 2

* Displaying employee with smallest salary *

ID: 103239
Position: Manager
First Name: Paul
Last Name: Young
Salary: 40000

>> Enter your choice: 3

The employee's average salary is: $60000

* Displaying employee information *

ID: 2130414
Position: Developer
First Name: Samanta
Last Name: Gimenez Fluture
Salary: 80000

ID: 103239
Position: Manager
First Name: Paul
Last Name: Young
Salary: 40000

ID: 121312
Position: Manager
First Name: Jane
Last Name: DOe
Salary: 232344

Are you sure you want to quit?
Enter Y to exit or N to cancel

>> Enter your choice: y

Quitting the application...

*/