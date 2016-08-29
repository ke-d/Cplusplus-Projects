/**
 * Kenny Do
 * CECS 282
 * 9/12/2016
 */
#include <iostream>
#include "CardDeck.h"
using namespace std;

/**
 * Returns the integer of the menu selection of the user
 */
int menu() {
	cout << "1. Get a new card deck" <<endl;
	cout << "2. Show all cards in the deck" <<endl;
	cout << "3. Shuffle" <<endl;
	cout << "4. Play WAR!" <<endl;
	cout << "5. Exit" <<endl;
	char choice;
	choice = cin.get();
	cin.ignore(256, '\n');
	choice -= 48;
	while((int) choice < 1 || (int) choice > 5 ) {
		cout << "Please pick a valid choice." <<endl;
		choice = cin.get();
		choice -= 48;
		cin.ignore(256, '\n');
	}
	return choice;
}

/**
 * Plays the WAR game
 */
void playWar(CardDeck & warGame) {
	cout << "Get ready to play two-card WAR!!!"<<endl;
	char input = 'Y';
	while (input == 'Y') {
		cout << "There are " << warGame.cardsLeft() << " cards in the deck." <<endl;
		int playerYou = 0;
		int playerMe = 0;
		cout << "...dealing...."<<endl;
		cout << "One for you..."<<endl;
		playerYou += warGame.deal();
		cout << "One for me..."<<endl;
		playerMe += warGame.deal();
		cout << "Two for you..."<<endl;
		playerYou += warGame.deal();
		cout << "Two for me..."<<endl;
		playerMe += warGame.deal();

		cout <<endl;
		cout << "You have "<< playerYou << " points."<<endl;
		cout << "I have "<< playerMe << " points."<<endl;

		if(playerYou > playerMe) {
			cout << "I lost..."<<endl;
		} else if(playerYou < playerMe) {
			cout << "I Win!!!"<<endl;
		} else {
			cout << "Tie Game"<<endl;
		}

		if(warGame.cardsLeft() <= 0) {
			cout << "Out of cards...Reseting Deck."<<endl;
			warGame.resetDeck();
		}
		cout << "Wanna play again? (Y/N)." <<endl;
		input = cin.get();
	}


}


int main() {
	CardDeck warGame;

	char menuChoice = menu();
	while(menuChoice != 5) {
		switch(menuChoice) {
		case 1:
			warGame.resetDeck();
			cout << "Deck Reseted."<<endl;
			break;
		case 2:
			warGame.printDeck();
			break;
		case 3:
			warGame.shuffle();
			cout << "Deck Shuffled."<<endl;
			break;
		case 4:
			playWar(warGame);
			break;
		}


		menuChoice = menu();
	}

	cout << "Thank you for playing WAR!" <<endl;

	return 0;
}
