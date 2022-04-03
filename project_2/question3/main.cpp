// Samanta Gimenez Fluture, 2022-03-31, Project #2

// Question 3

/*

3.1
> declare a structure named Courses
> data fields: Course number, Title, Hours per week, Session

3.2
> entering all the courses data that you have for current session at compile-time using the structure Courses

TO DO'S
> save output

*/

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
};

int main()
{
    Courses course;
    int qty;
    vector<Courses> currentCourses(0);

    /*

    cout << "Enter the course number: ";
    cin >> c1.courseNumber;
    cin.ignore();

    cout << "Enter the course title: ";
    getline(cin, c1.courseTitle);

    cout << "Enter the hours per week: ";
    cin >> c1.hoursPerWeek;
    cin.ignore();

    cout << "Enter the course session: ";
    cin >> c1.courseSession;
    cin.ignore();

    cout << "*** Displaying information... ***" << endl;
    cout << "Course Number: " << c1.courseNumber << endl;
    cout << "Course Title: " << c1.courseTitle << endl;
    cout << "Hours Per Week: " << c1.hoursPerWeek << endl;
    cout << "Course Session: " << c1.courseSession << endl;

    */

    cout << "*** Courses Information ***" << endl;

    cout << "How many courses do you have this session? ";
    cin >> qty;

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
        
        currentCourses.push_back(course);
    }

    cout << "\n* Displaying all the courses you entered... *\n";
    
        for (int i = 0; i < currentCourses.size(); i++)
    {
        cout << "\nCourse #" << (i + 1) << "\n"
             << "Course number: " << currentCourses[i].courseNumber << "\n"
             << "Course title: " << currentCourses[i].courseTitle << "\n"
             << "Hours per week: " << currentCourses[i].hoursPerWeek << "\n"
             << "Session: " << currentCourses[i].courseSession << "\n";
    }

    return 0;
}