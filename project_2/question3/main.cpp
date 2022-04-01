// Samanta Gimenez Fluture, 2022-03-31, Project #2

// Question 3

/*

3.1
> declare a structure named Courses
> data fields: Course number, Title, Hours per week, Session

3.2
> entering all the courses data that you have for current session at compile-time using the structure Courses
> save output

*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Courses
{
    char number[50];
    string title;
    int hours;
    char session[50];
};

int main()
{
    // int qty = 8;
    Courses courses;
    // vector<Courses> currentCourses(qty);

    vector<Courses> currentCourses {
        {"420-225-AS", "C2_Computer architecture_420", 5, "07030"},
        {"420-225-AS", "C2_Computer architecture_420", 5, "07030"},
    };

    // currentCourses.push_back(Courses());

    // currentCourses[0].number = "420-225-AS";
    // currentCourses[0].title = "C2_Computer architecture_420";
    // currentCourses[0].hours = 5;
    // currentCourses[0].session = "07030";

    // currentCourses[1].number = '603-101-MQ';
    // currentCourses[1].title = "C2_Intro to English_SPE1_BLOC B";
    // currentCourses[1].hours = 4;
    // currentCourses[1].session = '00632';

    // currentCourses[2].number = '109-101-AS';
    // currentCourses[2].title = "C2_Phys Ed I";
    // currentCourses[2].hours = 2;
    // currentCourses[2].session = '00018';

    // currentCourses[3].number = '420-DW1-AS';
    // currentCourses[3].title = "C3_introduction WEB devel_420BP";
    // currentCourses[3].hours = 3;
    // currentCourses[3].session = '07608';

    // currentCourses[4].number = '602-006-AS';
    // currentCourses[4].title = "C2_POT_Pratique_FLS_BLOC B";
    // currentCourses[4].hours = 4;
    // currentCourses[4].session = '00704';

    // currentCourses[5].number = '420-AP1-AS';
    // currentCourses[5].title = "C2_Algorithms programming_420";
    // currentCourses[5].hours = 6;
    // currentCourses[5].session = '07044';

    // currentCourses[6].number = '201-114-AS';
    // currentCourses[6].title = "C1_Applied Mathematics";
    // currentCourses[6].hours = 4;
    // currentCourses[6].session = '08224';

    // currentCourses[7].number = '420-CT1-AS';
    // currentCourses[7].title = "C3_Computer tools";
    // currentCourses[7].hours = 3;
    // currentCourses[7].session = '07020';

    /*
    cout << "How many courses do you have this session? ";
    cin >> qty;

    cout << "\n* Please answer the questions below about the courses *\n";

    for (int i = 0; i < qty; i++)
    {
        cout << "\nCourse #" << (i + 1) << "\n";

        cout << "Course Number: ";
        cin >> courses.number;

        cout << "Course title: ";
        cin >> courses.title;
        // getline(cin, courses.title);

        cout << "Hours per week: ";
        cin >> courses.hours;

        cout << "Session: ";
        cin >> courses.session;

        currentCourses.push_back(courses);
    }

    cout << "\n* Displaying all the courses entered... *\n";
    */

    for (int i = 0; i < currentCourses.size(); i++)
    {
        cout << "\nCourse #" << (i + 1) << "\n"
             << "Course number: " << currentCourses[i].number << "\n"
             << "Course title: " << currentCourses[i].title << "\n"
             << "Hours per week: " << currentCourses[i].hours << "\n"
             << "Session: " << currentCourses[i].session << "\n";
    }

    return 0;
}