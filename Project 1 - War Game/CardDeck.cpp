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
	Card deck[2] = {Card('s',1), Card('s',2)};
}

void CardDeck::displayCardAt(const int & index) {
	std::cout << deck[index].displayCard();
}

int CardDeck::deal() {

}

int CardDeck::cardsLeft() {

}

void CardDeck::shuffle() {

}

