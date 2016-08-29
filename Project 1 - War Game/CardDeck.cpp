#include "CardDeck.h"
#include "Card.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

CardDeck::CardDeck() {
	resetDeck();
}

void CardDeck::displayCardAt(const int & index) {
	deck[index].displayCard();
}

int CardDeck::deal() {
	if(cardsLeftInDeck > 0) {
	cardsLeftInDeck--;
	displayCardAt(cardsLeftInDeck);
	return deck[cardsLeftInDeck].getValue();
	} else {
		std::cout << "No more cards in deck" <<std::endl;
		return 0;
	}
}

int CardDeck::cardsLeft() {
	return cardsLeftInDeck;
}

void CardDeck::shuffle() {
	srand(time(NULL));
	//Gets a random number
	for(unsigned int i = 0; i < cardsLeftInDeck;i++){
		swap(i, (rand() % cardsLeftInDeck));
	}
}

void CardDeck::swap(const int & index, const int & newIndex) {
	Card temp = deck[newIndex];
	deck[newIndex] = deck[index];
	deck[index] = temp;
}

void CardDeck::printDeck() {
	for(unsigned int i = 0; i < cardsLeftInDeck;i++){
		int incrimented = i;
		incrimented++;
		std::cout << incrimented << ". ";
		deck[i].displayCard();
	}
}

void CardDeck::resetDeck() {
	cardsLeftInDeck = 52;
	shuffle();
}
