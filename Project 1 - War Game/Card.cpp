/**
 * Kenny Do
 * CECS 282
 * 9/12/2016
 */
#include "Card.h"
#include <iostream>
using namespace std;

//Constants of ranks
const char * ACE = "Ace";
const char * JACK = "Jack";
const char * QUEEN = "Queen";
const char * KING = "King";

//Constants of suits
const char * SPADES = "Spades";
const char * CLUBS = "Clubs";
const char * DIAMONDS = "Diamonds";
const char * HEARTS = "Hearts";

/**
 * Sets the card suit and rank
 */
Card::Card(const char & suit, const int & rank) {
	this->suit = suit;
	this->rank = rank;
}

/**
 * Returns the point value of the card
 */
int Card::getValue() {
	if(rank <= 10) {
		return rank;
	} else {
		return 10;
	}
}

/**
 * Displays the card in the format "The card is (rank) of (suit)"
 */
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
