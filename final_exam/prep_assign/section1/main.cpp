// Samanta Gimenez Fluture, 2022-04-22, Preparation for Final Exam
// Section 1 and 2

/*

The entries from the user are to describe a player information and his/her team.

As for entries:
- the name of the player (max 50 chars)
- the age
- weight and height (kg and meter)
- the name of the team (max 50 chars)

As for the outputs:
- printout entered information one player info per line

NB:
- To exit the program, enter 0 or the size of 20 players has reached.
- Add appropriate messages (simple and clear).

*/

// Question 1

/*
Algorithm: createPlayer
Data types: name and team (char type); age, weight and height (numericals); player (type Player)

START
    WRITE "Enter name of the player"
    READ player.name
    WRITE "Enter name of the player"
    READ player.age
    WRITE "Enter name of the player"
    READ player.weight
    WRITE "Enter name of the player"
    READ player.height
    WRITE "Enter name of the player"
    READ player.team
END
*/

// Question 2

/*
Algorithm: addPlayer
Data types: name and team (char type); i, age, weight and height (numericals); playerList (vector of type Player)

START
    i := 0
    REPEAT
        ADD 1 to i
        ADD player i to playerList
    UNTIL i < 15
END
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Question 4
// struct definition using correct data types
struct Player {
    char name[51];
    int age;
    double weight;
    double height;
    char team[51];
} player;

const int MAX_PLAYER = 15;
vector<Player> playerList(0);

void addPlayer(int);
void displayPlayer();

int main()
{
    char ans;
    int count = 0;

    cout << "\n********* Player Info App *********\n";

    // Question 3 
    // menu for adding up to 15 players (or quit by entering 0)
    do
    {
        cout << "\nEnter 1 to add a new player"
            << "\nEnter 0 to quit"
            << "\n(You can add " << ((MAX_PLAYER)-(count)) << " new players)"
            << "\n\n>> Your option: ";
        cin >> ans;
        cin.ignore();

        if (ans == '0')
        {
            break;
        }

        addPlayer(count);
        count++;

        displayPlayer();

    } while (ans != '0' && count < MAX_PLAYER);

    if (count == MAX_PLAYER)
    {
        cout << "\nYou have reached " << (MAX_PLAYER) << " players!\nYou can't add any more.\n";
    }

    cout << "\nGood-bye!\n";

    return 0;
}

// Question 5
// function to add a new player
void addPlayer(int count) {
    cout << "\nInformation of Player # " << (count + 1);

    cout << "\nEnter the name of the player: ";
    cin.get(player.name, 51);
    cin.ignore();

    cout << "Enter the age of the player: ";
    cin >> player.age;
    cin.ignore();

    cout << "Enter the weight of the player: ";
    cin >> player.weight;
    cin.ignore();

    cout << "Enter the height of the player: ";
    cin >> player.height;
    cin.ignore();

    cout << "Enter the team of the player: ";
    cin.get(player.team, 51);
    cin.ignore();

    playerList.push_back(player);
}

// Question 5
// function to display all the players
void displayPlayer() {
    cout << "\nDisplaying all the players...\n";

    for (int i = 0; i < playerList.size(); i++)
    {
        cout << "\nPlayer #" << (i + 1)
            << "\nName: " << playerList[i].name
            << "\nAge: " << playerList[i].age
            << "\nWeight (kgs): " << playerList[i].weight << " kgs"
            << "\nHeight (m): " << playerList[i].height << " meters"
            << "\nTeam: " << playerList[i].team
            << "\n";
    }
}