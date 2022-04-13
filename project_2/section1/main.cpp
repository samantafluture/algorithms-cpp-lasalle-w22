// Samanta Gimenez Fluture, 2022-04-07, Project #2
// Version 1.3

// Section 1

// Question 1
// > Please find the answer in the word documentation file.

// Question 2

#include <iostream>
#include <vector>
using namespace std;

// const variables
const double TO_KILO = 0.4535;
const double TO_POUND = 2.2046;
const int MAX_CONVERT = 15;

// global variables
vector<double> enteredWeights(0), convertedWeights(0);
double maxResult = -99999, minResult = 99999, sumResult = 0, avgResult = 0;
double weight, result;
bool isPound;

// functions prototypes
double getWeight(int);
void convertWeight();
void displayConversion();
void calcMaxMinAvg();
void clear();
void startConverter(int);

int main()
{
    char ans;
    int count;

    cout << "\n******** Conversion App *********" << endl;

    // show menu and repeat until the user enters 3 to quit
    do
    {
        cout << "\nEnter 1 to convert pounds in kilograms\n"
             << "Enter 2 to convert kilograms to pounds\n"
             << "Enter 3 to quit\n"
             << ">> Your option: ";
        cin >> ans;

        switch (ans)
        {
        case '1':
            isPound = true;
            count = 0;

            cout << "\n1. From pounds to kilograms\n";

            startConverter(count);

            break;
        case '2':
            isPound = false;
            count = 0;

            cout << "\n2. From kilograms to pounds\n";

            startConverter(count);

            break;
        // confirm if the user wants to quit or go to the menu
        case '3':
            cout << "\nDo you want to quit?"
                 << "\nEnter Y to exit or N to go back"
                 << "\n>> Your option: ";
            cin >> ans;

            if (ans == 'Y' || ans == 'y')
            {
                cout << "\nQuitting the application..." << endl;
                ans = '3';
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
            cout << "\n* Invalid input, try again! *\n";
            break;
        }

    } while (ans != '3');

    cout << "\n******** Thank you. Bye! *********\n";

    return 0;
}

// ask the value from the user, add it to the vector, then return it
double getWeight(int count)
{
    cout << "\n* Enter 0 or negative to quit this feature *\n"
         << "* You have " << (MAX_CONVERT - (count-1)) << " conversions left *\n"
         << "\n>> Enter a weight to be converted: ";
    cin >> weight;

    enteredWeights.push_back(weight);

    return weight;
}

// do the conversion dependending on the selected menu
// then add the result to the vector
void convertWeight()
{
    // if user chooses menu #1
    if (isPound == 1)
    {
        result = (weight * TO_KILO);
    }
    // if the user chooses menu #2
    else if (isPound == 0)
    {
        result = (weight * TO_POUND);
    }

    convertedWeights.push_back(result);
}

// display the result of the converstion
// use 2 decimal points if kg and 0 if lbs
void displayConversion()
{
    cout << "\nResult: ";
    cout.setf(ios::fixed);

    if (isPound == 1)
    {
        cout.precision(0);
        cout << weight << " pounds = ";

        cout.precision(2);
        cout << result << " kilograms\n";
    }
    else if (isPound == 0)
    {
        cout.precision(2);
        cout << weight << " kilograms = ";

        cout.precision(0);
        cout << result << " pounds\n";
    }
}

// calculate max, min, sum and average of results
// print the values using kgs or lbs
void calcMaxMinAvg()
{
    string metric;

    for (int i = 0; i < convertedWeights.size(); i++)
    {
        if (convertedWeights[i] > maxResult)
        {
            maxResult = convertedWeights[i];
        }

        if (convertedWeights[i] < minResult)
        {
            minResult = convertedWeights[i];
        }

        sumResult += convertedWeights[i];
    }

    if (convertedWeights.size() == 0)
    {
        cout << "\nYou don't have any conversions..." << endl;
    }
    else
    {
        avgResult = (sumResult / convertedWeights.size());

        if (isPound == 1)
        {
            metric = " kgs";
        }
        else if (isPound == 0)
        {
            metric = " lbs";
        }

        cout << "\n* Summary of Results*"
             << "\nMaximum: " << maxResult << metric
             << "\nMinimum: " << minResult << metric
             << "\nAverage: " << avgResult << metric << "\n";
    }

    clear();
}

// reseting the values and the vectors
void clear()
{
    maxResult = -99999, minResult = 99999, sumResult = 0, avgResult = 0;
    enteredWeights.clear();
    convertedWeights.clear();
}

// do the conversation by calling the other functions
// repeat until the size of the vector reaches 15
// or the user enters 0
void startConverter(int count)
{
    while (enteredWeights.size() < MAX_CONVERT)
    {
        count++;
        weight = getWeight(count);

        if (weight <= 0.0)
        {
            enteredWeights.pop_back();
            break;
        }

        convertWeight();
        displayConversion();
    }

    calcMaxMinAvg();
}

// Question 3.1

/*

struct Courses
{
    string courseNumber;
    string courseTitle;
    int hoursPerWeek;
    string courseSession;
};

*/

// Question 3.2

/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Courses
{
    string courseNumber;
    string courseTitle;
    int hoursPerWeek;
    string courseSession;
} course;

vector<Courses> currentCourses(0); // a vector of type Courses

// function prototypes
void getCourses(int);
void displayCourses();

int main()
{
    int qty;

    cout << "\n*** Courses Information ***\n" << endl;
    cout << "How many courses do you have? ";
    cin >> qty;

    getCourses(qty);
    displayCourses();

    return 0;
}

void getCourses(int qty)
{
    cout << "\n* Please answer the questions below about the courses *\n";

    for (int i = 0; i < qty; i++)
    {
        cout << "\nCourse #" << (i + 1) << "\n";

        cout << "Course Number: ";
        cin >> course.courseNumber;
        cin.ignore();

        cout << "Course title: ";
        getline(cin, course.courseTitle);

        cout << "Hours per week: ";
        cin >> course.hoursPerWeek;
        cin.ignore();

        cout << "Session: ";
        cin >> course.courseSession;
        cin.ignore();

        // add course to the vector
        currentCourses.push_back(course);
    }
}

void displayCourses()
{
    cout << "\n* Displaying all the courses you entered... *\n";

    // loop to show each course (and its values) of the vector
    for (int i = 0; i < currentCourses.size(); i++)
    {
        cout << "\nCourse #" << (i + 1) << "\n"
             << "Course number: " << currentCourses[i].courseNumber << "\n"
             << "Course title: " << currentCourses[i].courseTitle << "\n"
             << "Hours per week: " << currentCourses[i].hoursPerWeek << "\n"
             << "Session: " << currentCourses[i].courseSession << "\n";
    }
}
*/

/*
Output:

*** Courses Information ***
How many courses do you have this session? 2

* Please answer the questions below about the courses *

Course #1
Course Number: 420-AP1-AS
Course title: Algorithms programming
Hours per week: 6
Session: 07044

Course #2
Course Number: 420-225-AS
Course title: Computer architecture
Hours per week: 5
Session: 07030

* Displaying all the courses you entered... *

Course #1
Course number: 420-AP1-AS
Course title: Algorithms programming
Hours per week: 6
Session: 07044

Course #2
Course number: 420-225-AS
Course title: Computer architecture
Hours per week: 5
Session: 07030

*/
