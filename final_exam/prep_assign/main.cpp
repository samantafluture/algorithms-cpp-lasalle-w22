// Samanta Gimenez Fluture, 2022-04-27, Prep for Exam

#include <iostream>
#include <vector>
using namespace std;

struct Player {
	char name[50];
	int age;
	double weight;
	double height;
	char team[50];
} player;

vector<Player> playerList;
const int MAX_PLAYERS = 20;

void addPlayer();
void displayPlayers();

int main()
{
	char ans;

	do
	{
		cout << "\nEnter 1 to add a new player\n"
			<< "Enter 0 to exit\n"
			<< "Your option: ";
		cin >> ans;
		cin.ignore();

		if (ans == '1')
		{
			addPlayer();
			displayPlayers();
		} else if(ans == '0') {
			displayPlayers();
			break;
		}
		else {
			cout << "\nInput error! Try again!\n";
		}

	} while (playerList.size() < 21);

	cout << "\nQuitting the app...\n";

    return 0;
}

void addPlayer() {
	if (playerList.size() < 21) {
		cout << "\nAdding new player..."
			<< "\nYou can add " << ((MAX_PLAYERS) - playerList.size()) << " players!\n";

		cout << "\nName of the player: ";
		cin.get(player.name, 51);
		cin.ignore();

		cout << "Age of the player: ";
		cin >> player.age;
		cin.ignore();

		cout << "Weight of the player (kg): ";
		cin >> player.weight;
		cin.ignore();

		cout << "Height of the player (meters): ";
		cin >> player.height;
		cin.ignore();

		cout << "Name of the team: ";
		cin.get(player.team, 51);
		cin.ignore();

		playerList.push_back(player);
	}
	else {
		cout << "\nYou can't add more players!\n";
	}
}

void displayPlayers() {
	cout << "\nDisplaying the players...\n";

	for (int i = 0; i < playerList.size(); i++)
	{
		cout << "\nPlayer #: " << (i+1);
		cout << "\nName: " << playerList[i].name;
		cout << "\nAge: " << playerList[i].age;
		cout << "\nWeight: " << playerList[i].weight;
		cout << "\nHeight " << playerList[i].height;
		cout << "\nName: " << playerList[i].team;
		cout << "\n";
	}
}

// Algorithms
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
	UNTIL i < 20
END
*/