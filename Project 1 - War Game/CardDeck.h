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
	unsigned int cardsLeftInDeck;
	//Creates an array of cards
	Card deck[52] = {Card('s',1), Card('s',2), Card('s',3), Card('s',4), Card('s',5), Card('s',6), Card('s',7), Card('s',8), Card('s',9), Card('s',10), Card('s',11), Card('s',12), Card('s',13),
			Card('c',1), Card('c',2), Card('c',3), Card('c',4), Card('c',5), Card('c',6), Card('c',7), Card('c',8), Card('c',9), Card('c',10), Card('c',11), Card('c',12), Card('c',13),
			Card('d',1), Card('d',2), Card('d',3), Card('d',4), Card('d',5), Card('d',6), Card('d',7), Card('d',8), Card('d',9), Card('d',10), Card('d',11), Card('d',12), Card('d',13),
			Card('h',1), Card('h',2), Card('h',3), Card('h',4), Card('h',5), Card('h',6), Card('h',7), Card('h',8), Card('h',9), Card('h',10), Card('h',11), Card('h',12), Card('h',13)};
	void swap(const int & index, const int & newIndex);
public:
	CardDeck();
	void displayCardAt(const int & index);
	int deal();
	int cardsLeft();
	void shuffle();
	void printDeck();
	void resetDeck();
};




#endif /* CARDDECK_H_ */
