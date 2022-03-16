// Samanta Gimenez Fluture, 2022-03-15, Project #1

/*
ALGORITHM for main()

Name: CalcHoroscope
Variables: element, sign - strings / month, day - numericals / ans - char

START
    REPEAT
        WRITE "\nEnter anything to get a horoscope\n"
        WRITE "Enter 0 to quit\n"
        WRITE "Your option: "
        READ ans
        IF (ans := '0') THEN
            BREAK
        ENDIF
        month := get_month(month)
        IF (month := 0) THEN
            BREAK
        ENDIF
        day := get_day(day)
        IF (day := 0) THEN
            BREAK
        ENDIF
        sign := find_sign(month, day)
        element := find_element(sign)
        print_horoscope(month, day, sign, element)
        find_compatible(sign, element)
    UNTIL (ans != '0')
END

ALGORITHM in natural language:
    The user can enter anything to get a horoscope or 0 to quit the application. While he does not type 0, the application continues to loop and he can input new values. The user is asked to enter a month (value between 1 - 12) and a day (value between 1 - 31). If it's February, it can only input values from 1 - 29 for the day. The program will calculate: the sign (depending on the month and date entered), what is the element of this sign (depending on the sign calculated previously), and the other signs that are in the same element group (based on the results of previously calculations of sign and element). Those results will be printed. The user can input new values until he types 0 to quit.
*/

#include <iostream>
#include <string>
using namespace std;

int day, month;
string sign, element;

// functions prototypes
int get_month(int);
int get_day(int);
string find_sign(int, int);
string find_element(string);
void find_compatible(string, string);
void print_horoscope(int, int, string, string);

int main()
{
    char ans;

    cout << "\n******** Horoscope App *********" << endl;

    do
    {
        cout << "\nEnter anything to get a horoscope\n"
             << "Enter 0 to quit\n"
             << "Your option: ";
        cin >> ans;

        // if user types 0, break the loop, quit the app
        if (ans == '0')
        {
            break;
        }

        // assign return to the variable month
        month = get_month(month);

        if (month == 0)
        {
            break;
        }

        // assign return to the variable day
        day = get_day(day);

        if (day == 0)
        {
            break;
        }

        // assign returns from functions to the variables
        sign = find_sign(month, day);
        element = find_element(sign);

        // call functions to print and find compatible signs
        print_horoscope(month, day, sign, element);
        find_compatible(sign, element);

    } while (ans != '0');

    cout << "\n******** Thank you. Bye! *********\n\n";

    return 0;
}

// functions definitions

/*
ALGORITHM for get_month()

Name: GetMonth
Variables: month - numerical

START
    WRITE "\nEnter the MONTH of your birthday (1 - 12) or 0 to quit: "
    READ month
    IF (month < 0 OR  month > 12) THEN
        REPEAT
            WRITE "Error! Number must be between 1 and 12!"
            WRITE "\nEnter the MONTH of your birthday (1 - 12): "
            READ month
        UNTIL (month < 0 OR month > 12)
    ENDIF
    RETURN month
END

ALGORITHM in natural language:
    This function will ask the user to input a value between 1 to 12, meaning the month. If the value is out of the range, it will print and error message and ask for the value again until the user enters a valid input. The function, then, returns this value as the variable month, to be used by other functions. 
*/

int get_month(int month)
{
    cout << "\nEnter the MONTH of your birthday (1 - 12) or 0 to quit: ";
    cin >> month;

    // validate month entry
    if (month < 0 || month > 12)
    {
        do
        {
            cout << ">>> Error! Number must be between 1 and 12!";
            cout << "\nEnter the MONTH of your birthday (1 - 12): ";
            cin >> month;
        } while (month < 0 || month > 12);
    }

    return month;
}

/*
ALGORITHM for get_day()

Name: GetDay
Variables: day - numerical

START
    WRITE "\nEnter the DAY of your birthday (1 - 31) or 0 to quit: "
    READ day
    IF (day < 0 OR day > 31) THEN
        REPEAT
            WRITE "Error! Number must be between 1 and 31!"
            WRITE "\nEnter the DAY of your birthday (1 - 31): "
            READ day
        UNTIL (day < 0 OR day > 31)
    ENDIF
    IF (month := 2) THEN
        IF (day > 29) THEN
            REPEAT
                WRITE "Error! February only have 29 days!"
                WRITE "\nEnter the DAY of your birthday (1 - 31) or (1 - 29 for February): "
                READ day
            UNTIL (day > 29)
        ENDIF
    ENDIF
    IF (month := 4 OR month := 6 OR month := 9 or month := 11) THEN
        REPEAT
            WRITE "Error! This month only have 30 days!"
            WRITE "\nEnter the DAY of your birthday (1 - 30): "
            READ day
        UNTIL (day < 0 OR day > 30)
    ENDIF
    RETURN day
END

ALGORITHM in natural language:
    This function will ask the user to input a value between 1 to 31, meaning the day. If the value is out of the range, it will print and error message and ask for the value again until the user enters a valid input. If the month previously input is 2 (meaning February), then the user will need to input a value between 1 to 29. If the months are April, June, September or November, the user only can input values from 1 to 30. The function, then, returns this value as the variable day, to be used by other functions.
*/

int get_day(int day)
{
    cout << "Enter the DAY of your birthday (1 - 31) or 0 to quit: ";
    cin >> day;

    // validate day entry
    if (day < 0 || day > 31)
    {
        do
        {
            cout << ">>> Error! Number must be between 1 and 31!";
            cout << "\nEnter the DAY of your birthday (1 - 31): ";
            cin >> day;
        } while (day < 0 || day > 31);
    }

    // february validation
    if (month == 2)
    {
        if (day > 29)
        {
            do
            {
                cout << ">>> Error! February only have 29 days!";
                cout << "\nEnter the DAY of your birthday (1 - 31) or (1 - 29 for February): ";
                cin >> day;
            } while (day > 29);
        }
    }

    // validate for months that ends on 30
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        do
            {
                cout << ">>> Error! This month have only 30 days!";
                cout << "\nEnter the DAY of your birthday (1 - 30): ";
                cin >> day;
            } while (day < 0 || day > 30);
    }

    return day;
}

/*
ALGORITHM for find_sign()

Name: FindSign
Variables: month, day - numericals / sign - string

START
    SWITCH (month)
        CASE 1:
            IF (day >= 1 && day <= 19) THEN
                sign := "Capricorn"
            ELSE
                sign := "Aquarius"
            ENDIF
            BREAK
        CASE 2:
            IF (day >= 1 && day <= 18) THEN
                sign := "Aquarius"
            ELSE
                sign := "Pisces"
            ENDIF
            BREAK
        CASE 3:
            IF (day >= 1 && day <= 20) THEN
                sign := "Pisces"
            ELSE
                sign := "Aries"
            ENDIF
            BREAK
        CASE 4:
            IF (day >= 1 && day <= 19) THEN
                sign := "Aries"
            ELSE
                sign := "Taurus"
            ENDIF
            BREAK
        CASE 5:
            IF (day >= 1 && day <= 20) THEN
                sign := "Taurus"
            ELSE
                sign := "Gemini"
            ENDIF
            BREAK
        CASE 6:
            IF (day >= 1 && day <= 21) THEN
                sign := "Gemini"
            ELSE
                sign := "Cancer"
            ENDIF
            BREAK
        CASE 7:
            IF (day >= 1 && day <= 22) THEN
                sign := "Cancer"
            ELSE
                sign := "Leo"
            ENDIF
            BREAK
        CASE 8:
            IF (day >= 1 && day <= 22) THEN
                sign := "Leo"
            ELSE
                sign := "Virgo"
            ENDIF
            BREAK
        CASE 9:
            IF (day >= 1 && day <= 22) THEN
                sign := "Virgo"
            ELSE
                sign := "Libra"
            ENDIF
            BREAK
        CASE 10:
            IF (day >= 1 && day <= 22) THEN
                sign := "Libra"
            ELSE
                sign := "Scorpio"
            ENDIF
            BREAK
        CASE 11:
            IF (day >= 1 && day <= 21) THEN
                sign := "Scorpio"
            ELSE
                sign := "Sagittarius"
            ENDIF
            BREAK
        CASE 12:
            IF (day >= 1 && day <= 21) THEN
                sign := "Sagittarius"
            ELSE
                sign := "Capricorn"
            ENDIF
            BREAK
    END SWITCH
    RETURN sign
END

ALGORITHM in natural language:
    This functions takes the value of month entered by the user previously. For each month (1 - 12), there will be a condition to be fullfiled. Depending on the date of the month, it will return the sign of the user.
*/

string find_sign(int month, int day)
{
    switch (month)
    {
    case 1:
        if (day >= 1 && day <= 19)
        {
            sign = "Capricorn";
        }
        else
        {
            sign = "Aquarius";
        }
        break;
    case 2:
        if (day >= 1 && day <= 18)
        {
            sign = "Aquarius";
        }
        else
        {
            sign = "Pisces";
        }
        break;
    case 3:
        if (day >= 1 && day <= 20)
        {
            sign = "Pisces";
        }
        else
        {
            sign = "Aries";
        }
        break;
    case 4:
        if (day >= 1 && day <= 19)
        {
            sign = "Aries";
        }
        else
        {
            sign = "Taurus";
        }
        break;
    case 5:
        if (day >= 1 && day <= 20)
        {
            sign = "Taurus";
        }
        else
        {
            sign = "Gemini";
        }
        break;
    case 6:
        if (day >= 1 && day <= 21)
        {
            sign = "Gemini";
        }
        else
        {
            sign = "Cancer";
        }
        break;
    case 7:
        if (day >= 1 && day <= 22)
        {
            sign = "Cancer";
        }
        else
        {
            sign = "Leo";
        }
        break;
    case 8:
        if (day >= 1 && day <= 22)
        {
            sign = "Leo";
        }
        else
        {
            sign = "Virgo";
        }
        break;
    case 9:
        if (day >= 1 && day <= 22)
        {
            sign = "Virgo";
        }
        else
        {
            sign = "Libra";
        }
        break;
    case 10:
        if (day >= 1 && day <= 22)
        {
            sign = "Libra";
        }
        else
        {
            sign = "Scorpio";
        }
        break;
    case 11:
        if (day >= 1 && day <= 21)
        {
            sign = "Scorpio";
        }
        else
        {
            sign = "Sagittarius";
        }
        break;
    case 12:
        if (day >= 1 && day <= 21)
        {
            sign = "Sagittarius";
        }
        else
        {
            sign = "Capricorn";
        }
        break;
    }

    return sign;
}

/*
ALGORITHM for find_element()

Name: FindElement
Variables: element, sign - strings

START
    IF (sign := "Aries" OR sign := "Leo" OR sign := "Sagittarius") THEN
        element := "Fire"
    ENDIF
    IF (sign := "Taurus" OR sign := "Virgo" OR sign := "Capricorn") THEN
        element := "Earth"
    ENDIF
    IF (sign := "Gemini" OR sign := "Libra" OR sign := "Aquarius") THEN
        element := "Air"
    ENDIF
    IF (sign := "Cancer" OR sign := "Scorpio" OR sign := "Pisces") THEN
        element := "Water"
    ENDIF
    RETURN element
END

ALGORITHM in natural language:
    This functions takes the values of the sign previously calculated. Depending on the sign, it returns the element of this particular sign. As there are four different elements, this function uses four different conditions the sign has to match/fulfil.
*/

string find_element(string sign)
{

    if (sign == "Aries" || sign == "Leo" || sign == "Sagittarius")
    {
        element = "Fire";
    }

    if (sign == "Taurus" || sign == "Virgo" || sign == "Capricorn")
    {
        element = "Earth";
    }

    if (sign == "Gemini" || sign == "Libra" || sign == "Aquarius")
    {
        element = "Air";
    }

    if (sign == "Cancer" || sign == "Scorpio" || sign == "Pisces")
    {
        element = "Water";
    }

    return element;
}

/*
ALGORITHM for find_compatible()

Name: FindCompatible
Variables: element, sign - strings / fire[], earth[], air[], water[] - arrays / i - numerical

START
    fire[] := {"Aries", "Leo", "Sagittarius"}
    earth[] := {"Taurus", "Virgo", "Capricorn"}
    air[] := {"Gemini", "Libra", "Aquarius"}
    water[] := {"Cancer", "Scorpio", "Pisces"}
    IF (element := "Fire") THEN
        i := 0
        REPEAT 3 times
            ADD 1 to i
            IF (fire[i] is not equal to sign) THEN
                WRITE fire[i]
            ENDIF
        END REPEAT
    ENDIF
    IF (element := "Earth") THEN
        i := 0
        REPEAT 3 times
            ADD 1 to i
            IF (earth[i] is not equal to sign) THEN
                WRITE earth[i]
            ENDIF
        END REPEAT
    ENDIF
    IF (element := "Air") THEN
        i := 0
        REPEAT 3 times
            ADD 1 to i
            IF (air[i] is not equal to sign) THEN
                WRITE air[i]
            ENDIF
        END REPEAT
    ENDIF
    IF (element := "Water") THEN
        i := 0
        REPEAT 3 times
            ADD 1 to i
            IF (water[i] is not equal to sign) THEN
                WRITE water[i]
            ENDIF
        END REPEAT
    ENDIF
END

ALGORITHM in natural language:
    This functions uses the the previously calculated values of sign and element. There are four different conditions to fulfil, depending on the four elements. Each element has a group of 3 signs. If the element of the user matches a particular element, the function enters a loop to read all the signs that are in the same group. It will check each sign one by one. If the sign matches the sign of the user, it will not print it. Otherwise, it will then print the other signs of the same element group. Meaning, those are the signs that are compatible.
*/

void find_compatible(string sign, string element)
{
    string fire[] = {"Aries", "Leo", "Sagittarius"};
    string earth[] = {"Taurus", "Virgo", "Capricorn"};
    string air[] = {"Gemini", "Libra", "Aquarius"};
    string water[] = {"Cancer", "Scorpio", "Pisces"};
    int i, is_compatible;

    if (element == "Fire")
    {
        for (i = 0; i < 3; i++)
        {
            // pre-defined function compare()
            // returns integer < 0 (before), 0 (equivalent) or > 0 (after)
            is_compatible = fire[i].compare(sign);

            // if the sign the user entered is not equivalent to i (!= 0),
            // then print this sign
            // will only print the other 2 compatibles signs of the array
            if (is_compatible) 
            {
                cout << "- " << fire[i] << endl;
            }
        }
    }

    if (element == "Earth")
    {
        for (i = 0; i < 3; i++)
        {
            is_compatible = earth[i].compare(sign);

            if (is_compatible)
            {
                cout << "- " << earth[i] << endl;
            }
        }
    }

    if (element == "Air")
    {
        for (i = 0; i < 3; i++)
        {
            is_compatible = air[i].compare(sign);

            if (is_compatible)
            {
                cout << "- " << air[i] << endl;
            }
        }
    }

    if (element == "Water")
    {
        for (i = 0; i < 3; i++)
        {
            is_compatible = water[i].compare(sign);

            if (is_compatible)
            {
                cout << "- " << water[i] << endl;
            }
        }
    }
}

/*
ALGORITHM for print_horoscope()

Name: FindCompatible
Variables: element, sign - strings / month, day - numericals

START
    WRITE "\n# Horoscope for (mm/dd): " + month + "/" + day
    WRITE "\n# Sign: " + sign
    WRITE "\n# Element: " + element
    WRITE "\n# " + sign + " gets along with: "
END

ALGORITHM in natural language:
    This functions takes all the important values entered by the user and computed by other functions (day, month, sign and element) and print them in a more visual and readable way for the user.
*/

void print_horoscope(int month, int day, string sign, string element)
{
    cout << "\n# Horoscope for (mm/dd): " << month << "/" << day
         << "\n# Sign: " << sign
         << "\n# Element: " << element
         << "\n# " << sign << " gets along with: " << endl;
}