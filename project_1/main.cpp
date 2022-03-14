// Samanta Gimenez Fluture, 2022-03-13, Project #1

/*
TO DO'S

- create functions for validations
- understand behavior of find_similar() and print better results
*/

#include <iostream>
#include <string>
using namespace std;

int day, month;
string sign, element;

string find_sign(int, int);
string find_element(string);
void find_similar(string, string);

int main()
{
    char ans;

    cout << "******** Horoscope App *********" << endl;

    do
    {
        cout << "\nEnter anything to get a horoscope\n"
             << "Enter 0 to quit\n"
             << "Your option: ";
        cin >> ans;

        if (ans == '0')
        {
            break;
        }

        cout << "\nEnter the MONTH of your birthday (1 - 12) or 0 to quit: ";
        cin >> month;

        if (month == 0)
        {
            break;
        }

        if (month < 0 || month > 12)
        {
            do
            {
                cout << "Error! Number must be between 1 and 12!";
                cout << "\nEnter the MONTH of your birthday (1 - 12): ";
                cin >> month;
            } while (month < 0 || month > 12);
        }

        cout << "Enter the DAY of your birthday (1 - 31) or 0 to quit: ";
        cin >> day;

        if (day == 0)
        {
            break;
        }

        if (day < 0 || day > 31)
        {
            do
            {
                cout << "Error! Number must be between 1 and 31!";
                cout << "\nEnter the DAY of your birthday (1 - 31): ";
                cin >> day;
            } while (day < 0 || day > 31);
        }

        if (month == 2)
        {
            if (day > 28)
            {
                do
                {
                    cout << "Error! February only have 28 days!";
                    cout << "\nEnter the DAY of your birthday (1 - 31) or (1 - 28 for February): ";
                    cin >> day;
                } while (day > 28);
            }
        }

        sign = find_sign(month, day);
        cout << "\n# Your sign is: " << sign << endl;

        element = find_element(sign);
        cout << "# Your element is: " << element << endl;

        find_similar(sign, element);

    } while (ans != '0');

    cout << "\n******** Thank you. Bye! *********" << endl;

    return 0;
}

string find_sign(int month, int day)
{
    switch (month)
    {
    case 1:
        if (day >= 1 && day <= 19)
        {
            return "Capricorn";
        }
        else
        {
            return "Aquarius";
        }
        break;
    case 2:
        if (day >= 1 && day <= 18)
        {
            return "Aquarius";
        }
        else
        {
            return "Pisces";
        }
        break;
    case 3:
        if (day >= 1 && day <= 20)
        {
            return "Pisces";
        }
        else
        {
            return "Aries";
        }
        break;
    case 4:
        if (day >= 1 && day <= 19)
        {
            return "Aries";
        }
        else
        {
            return "Taurus";
        }
        break;
    case 5:
        if (day >= 1 && day <= 20)
        {
            return "Taurus";
        }
        else
        {
            return "Gemini";
        }
        break;
    case 6:
        if (day >= 1 && day <= 21)
        {
            return "Gemini";
        }
        else
        {
            return "Cancer";
        }
        break;
    case 7:
        if (day >= 1 && day <= 22)
        {
            return "Cancer";
        }
        else
        {
            return "Leo";
        }
        break;
    case 8:
        if (day >= 1 && day <= 22)
        {
            return "Leo";
        }
        else
        {
            return "Virgo";
        }
        break;
    case 9:
        if (day >= 1 && day <= 22)
        {
            return "Virgo";
        }
        else
        {
            return "Libra";
        }
        break;
    case 10:
        if (day >= 1 && day <= 22)
        {
            return "Libra";
        }
        else
        {
            return "Scorpio";
        }
        break;
    case 11:
        if (day >= 1 && day <= 21)
        {
            return "Scorpio";
        }
        else
        {
            return "Sagittarius";
        }
        break;
    case 12:
        if (day >= 1 && day <= 21)
        {
            return "Sagittarius";
        }
        else
        {
            return "Capricorn";
        }
        break;
    default:
        break;
    }
}

string find_element(string sign)
{

    if (sign == "Aries" || sign == "Leo" || sign == "Sagittarius")
    {
        return "Fire";
    }

    if (sign == "Taurus" || sign == "Virgo" || sign == "Capricorn")
    {
        return "Earth";
    }

    if (sign == "Gemini" || sign == "Libra" || sign == "Aquarius")
    {
        return "Air";
    }

    if (sign == "Cancer" || sign == "Scorpio" || sign == "Pisces")
    {
        return "Water";
    }
}

void find_similar(string sign, string element)
{
    string fire[] = {"Aries", "Leo", "Sagittarius"};
    string earth[] = {"Taurus", "Virgo", "Capricorn"};
    string air[] = {"Gemini", "Libra", "Aquarius"};
    string water[] = {"Cancer", "Scorpio", "Pisces"};
    // string similar[2] = {};

    cout << "# You get along with:" << endl;

    if (element == "Fire")
    {
        for (int i = 0; i < 3; i++)
        {
            if (fire[i].find(sign))
            {
                cout << fire[i] << endl;
                // similar->append(fire[i]);
            }
        }

        // cout << "You get along with: " << similar[0] << " and " << similar[1];
    }

    if (element == "Earth")
    {
        for (int i = 0; i < 3; i++)
        {
            if (earth[i].find(sign))
            {
                cout << earth[i] << endl;
            }
        }
    }

    if (element == "Air")
    {
        for (int i = 0; i < 3; i++)
        {
            if (air[i].find(sign))
            {
                cout << air[i] << endl;
            }
        }
    }

    if (element == "Water")
    {
        for (int i = 0; i < 3; i++)
        {
            if (water[i].find(sign))
            {
                cout << water[i] << endl;
            }
        }
    }
}