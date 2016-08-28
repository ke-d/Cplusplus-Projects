#include "CardDeck.h"
#include "Card.h"
#include <iostream>

const char * ACE = "Ace";
const char * JACK = "Jack";
const char * QUEEN = "Queen";
const char * KING = "King";

const char * SPADES = "Spades";
const char * CLUBS = "Clubs";
const char * DIAMONDS = "Diamonds";
const char * HEARTS = "Hearts";


CardDeck::CardDeck() {
	cardsLeftInDeck = 52;
}

void CardDeck::displayCardAt(const int & index) {
	deck[index].displayCard();
}

int CardDeck::deal() {
	return 0;
}

int CardDeck::cardsLeft() {
	return 0;
}

void CardDeck::shuffle() {
	for(unsigned int i = 0; i < cardsLeftInDeck;i++){
		deck[i].displayCard();
	}
}
