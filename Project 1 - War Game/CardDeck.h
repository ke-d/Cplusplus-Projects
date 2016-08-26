/*
 * CardDeck.h
 *
 *  Created on: Aug 23, 2016
 *      Author: Kenny Do
 */

#ifndef CARDDECK_H_
#define CARDDECK_H_
#include "Card.h"

class CardDeck {
	Card * deckPointer[2];
public:
	CardDeck();
	void displayCardAt(const int & index);
	int deal();
	int cardsLeft();
	void shuffle();
};




#endif /* CARDDECK_H_ */
