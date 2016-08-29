/**
 * Kenny Do
 * CECS 282
 * 9/12/2016
 */
#include "CardDeck.h"
#include "Card.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

/**
 * Default constructor creates the array of cards and resets them
 */
CardDeck::CardDeck() {
	resetDeck();
}

/**
 * Display the card at that index
 */
void CardDeck::displayCardAt(const int & index) {
	deck[index].displayCard();
}

/**
 * Display and return the point value of the end of the array indexed by cardsLeftInDeck
 * simulating a stack
 */
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

/**
 * Return how many cards left in the stack
 */
int CardDeck::cardsLeft() {
	return cardsLeftInDeck;
}

/**
 * Shuffles the array up to cardsLeftInDeck
 */
void CardDeck::shuffle() {
	srand(time(NULL));
	//Gets a random number
	for(unsigned int i = 0; i < cardsLeftInDeck;i++){
		swap(i, (rand() % cardsLeftInDeck));
	}
}

/**
 * Swap the values of index and newIndex
 */
void CardDeck::swap(const int & index, const int & newIndex) {
	Card temp = deck[newIndex];
	deck[newIndex] = deck[index];
	deck[index] = temp;
}

/**
 * Prints the deck up to cardsLeftInDeck
 */
void CardDeck::printDeck() {
	for(unsigned int i = 0; i < cardsLeftInDeck;i++){
		int incremented = i;
		incremented++;
		std::cout << incremented << ". ";
		deck[i].displayCard();
	}
}

/**
 * Resets the deck by setting cardsLeftInDeck back to 52 and shuffling
 */
void CardDeck::resetDeck() {
	cardsLeftInDeck = 52;
	shuffle();
}
