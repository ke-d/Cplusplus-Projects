#include "Card.h"
#include <iostream>
using namespace std;

const char * ACE = "Ace";
const char * JACK = "Jack";
const char * QUEEN = "Queen";
const char * KING = "King";

const char * SPADES = "Spades";
const char * CLUBS = "Clubs";
const char * DIAMONDS = "Diamonds";
const char * HEARTS = "Hearts";


Card::Card(const char & suit, const int & rank) {
	this->suit = suit;
	this->rank = rank;
}

int Card::getValue() {
	if(rank <= 10) {
		return rank;
	} else {
		return 10;
	}
}

void Card::displayCard() {
	cout << "The card is ";
	if (rank > 1 && rank < 11) {
		cout << rank;
	} else {
		switch(rank) {
		case 1:
			cout << ACE;
			break;
		case 11:
			cout << JACK;
			break;
		case 12:
			cout << QUEEN;
			break;
		case 13:
			cout << KING;
			break;
		}
	}

	cout << " of ";

	switch(suit) {
	case 's':
		cout << SPADES;
		break;
	case 'c':
		cout << CLUBS;
		break;
	case 'd':
		cout << DIAMONDS;
		break;
	case 'h':
		cout << HEARTS;
		break;
	}

	cout <<endl;
}
