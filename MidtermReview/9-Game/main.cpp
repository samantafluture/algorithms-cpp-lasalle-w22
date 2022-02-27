// Guessing Game

/*
Algo_name: GuessTheNumber
Declared variables: SECRET_NUMBER, guess, round, inputs - numericals / wrong - boolean / level - char

START
    WRITE "*********************************"
    WRITE "* Welcome: Guess the Number Game *"
    WRITE "*********************************"
    SECRET_NUMBER := 42
    wrong := true
    points := 1000.0
    WRITE "\nChoose level easy [E], medium [M] or hard [H]: "
    READ level
    SWITCH
        case 'E'
            inputs := 15
            WRITE "* Welcome to level EASY. You have " + inputs + " rounds *"
            break
        case 'M'
            inputs := 10
            WRITE "* Welcome to level EASY. You have " + inputs + " rounds *"
            break
        case 'E'
            inputs := 5
            WRITE "* Welcome to level EASY. You have " + inputs + " rounds *"
            break
        default
            WRITE "Invalid input!"
            WRITE "* The default level is EASY. You have " + inputs + " rounds *"
            break
    END SWITCH
    round := 1
    REPEAT 
        ADD 1 to round
        WRITE "\nTry number: " round
        WRITE "Your guess: "
        READ guess
        lost := ((guess - SECRET_NUMBER) / 2.0)
        points := (pints - lost)
        IF ((guess <= 0) OR (guess >= 101)) THEN
            WRITE "Please input a number between 1 and 100!"
        ELSE   
            IF (guess == SECRET_NUMBER) THEN
                WRITE "\nYay! You guessed"
                wrong := false;
                break
            ELSE IF (guess > SECRET_NUMBER) THEN
                WRITE "\nWrong! Your guess is too high"
            ELSE
                WRITE "\nWrong! Your guess is too low"
            ENDIF
        ENDIF
    UNTIL (round <= inputs)
    IF (wrong) THEN
        WRITE "\n* You lost!"
        WRITE "* You played all your rounds..." 
        WRITE "* The secret number is " SECRET_NUMBER 
        WRITE "* Try again!"
    ELSE<
        WRITE "\n* Congrats! You guessed in " + round + " rounds"
        WRITE "* The secret number is " SECRET_NUMBER 
        WRITE "* Your final score is " points
    ENDIF
    WRITE "*********************************"
    WRITE "* Good-bye! Thanks for playing! *"
    WRITE "*********************************"
END
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "*********************************" << endl;
    cout << "* Welcome: Guess the Number Game *" << endl;
    cout << "*********************************" << endl;

    srand(time(NULL));
    const int SECRET_NUMBER = rand() % 100;

    int guess, round, inputs;
    bool wrong = true;
    double points = 1000.0;
    char level;

    cout << "\nChoose level easy [E], medium [M] or hard [H]: ";
    cin >> level;

    switch (level)
    {
    case 'E':
        inputs = 15;
        cout << "* Welcome to level EASY. You have " << inputs << " rounds *" << endl;
        break;
    case 'M':
        inputs = 10;
        cout << "* Welcome to level MEDIUM. You have " << inputs << " rounds *" << endl;
        break;
    case 'H':
        inputs = 5;
        cout << "* Welcome to level HARD. You have " << inputs << " rounds *" << endl;
        break;
    default:
        inputs = 15;
        cout << "Invalid input!" << endl;
        cout << "* The default level is EASY. You have " << inputs << " rounds *" << endl;
        break;
    }

    for (round = 1; round <= inputs; round++)
    {
        cout << "\nTry number: " << round << endl;
        cout << "Your guess: ";
        cin >> guess;

        double lost = abs((guess - SECRET_NUMBER) / 2.0);
        points = points - lost;

        if (guess <= 0 || guess >= 101)
        {
            cout << "Please input a number between 1 and 100!" << endl;
        }
        else
        {
            if (guess == SECRET_NUMBER)
            {
                cout << "\nYay! You guessed" << endl;
                wrong = false;
                break;
            }
            else if (guess > SECRET_NUMBER)
            {
                cout << "\nWrong! Your guess is too high" << endl;
            }
            else
            {
                cout << "\nWrong! Your guess is too low" << endl;
            }
        }
    }

    if (wrong)
    {
        cout << "\n* You lost!" << endl;
        cout << "* You played all your rounds..." << endl;
        cout << "* The secret number is " << SECRET_NUMBER << endl;
        cout << "* Try again!" << endl;
    }
    else
    {
        cout << "\n* Congrats! You guessed in " << round << " rounds" << endl;
        cout << "* The secret number is " << SECRET_NUMBER << endl;
        cout.precision(2);
        cout << fixed;
        cout << "* Your final score is " << points << endl;
    }

    cout << "\n*********************************" << endl;
    cout << "* Good-bye! Thanks for playing! *" << endl;
    cout << "*********************************" << endl;
}