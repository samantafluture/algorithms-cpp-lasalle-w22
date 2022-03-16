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
        find_similar(sign, element)
    UNTIL (ans != '0')
END
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
void find_similar(string, string);
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

        // call functions to print and find similar sign
        print_horoscope(month, day, sign, element);
        find_similar(sign, element);

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
    IF (month == 2) THEN
        IF (day > 28) THEN
            REPEAT
                WRITE "Error! February only have 28 days!"
                WRITE "\nEnter the DAY of your birthday (1 - 31) or (1 - 28 for February): "
                READ day
            UNTIL (day > 28)
        ENDIF
    ENDIF
    RETURN day
END
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
        if (day > 28)
        {
            do
            {
                cout << ">>> Error! February only have 28 days!";
                cout << "\nEnter the DAY of your birthday (1 - 31) or (1 - 28 for February): ";
                cin >> day;
            } while (day > 28);
        }
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
ALGORITHM for find_similar()

Name: FindSimilar
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
            IF (sign is in fire[i]) THEN
                WRITE fire[i]
            ENDIF
        END REPEAT
    ENDIF
    IF (element := "Earth") THEN
        i := 0
        REPEAT 3 times
            ADD 1 to i
            IF (sign is in earth[i]) THEN
                WRITE earth[i]
            ENDIF
        END REPEAT
    ENDIF
    IF (element := "Air") THEN
        i := 0
        REPEAT 3 times
            ADD 1 to i
            IF (sign is in air[i]) THEN
                WRITE air[i]
            ENDIF
        END REPEAT
    ENDIF
    IF (element := "Water") THEN
        i := 0
        REPEAT 3 times
            ADD 1 to i
            IF (sign is in water[i]) THEN
                WRITE water[i]
            ENDIF
        END REPEAT
    ENDIF
END
*/

void find_similar(string sign, string element)
{
    string fire[] = {"Aries", "Leo", "Sagittarius"};
    string earth[] = {"Taurus", "Virgo", "Capricorn"};
    string air[] = {"Gemini", "Libra", "Aquarius"};
    string water[] = {"Cancer", "Scorpio", "Pisces"};
    int i, is_similar;

    if (element == "Fire")
    {
        for (i = 0; i < 3; i++)
        {
            // pre-defined function compare()
            // returns integer < 0 (before), 0 (equivalent) or > 0 (after)
            is_similar = fire[i].compare(sign);

            // if the sign the user entered is not equivalent to i (!= 0),
            // then print this sign
            // will only print the other 2 similar signs of the array
            if (is_similar) 
            {
                cout << "- " << fire[i] << endl;
            }
        }
    }

    if (element == "Earth")
    {
        for (i = 0; i < 3; i++)
        {
            is_similar = earth[i].compare(sign);

            if (is_similar)
            {
                cout << "- " << earth[i] << endl;
            }
        }
    }

    if (element == "Air")
    {
        for (i = 0; i < 3; i++)
        {
            is_similar = air[i].compare(sign);

            if (is_similar)
            {
                cout << "- " << air[i] << endl;
            }
        }
    }

    if (element == "Water")
    {
        for (i = 0; i < 3; i++)
        {
            is_similar = water[i].compare(sign);

            if (is_similar)
            {
                cout << "- " << water[i] << endl;
            }
        }
    }
}

/*
ALGORITHM for print_horoscope()

Name: FindSimilar
Variables: element, sign - strings / month, day - numericals

START
    WRITE "\n# Horoscope for (mm/dd): " + month + "/" + day
    WRITE "\n# Sign: " + sign
    WRITE "\n# Element: " + element
    WRITE "\n# " + sign + " gets along with: "
END
*/

void print_horoscope(int month, int day, string sign, string element)
{
    cout << "\n# Horoscope for (mm/dd): " << month << "/" << day
         << "\n# Sign: " << sign
         << "\n# Element: " << element
         << "\n# " << sign << " gets along with: " << endl;
}