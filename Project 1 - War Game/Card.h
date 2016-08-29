/*
 * Card.h
 *
 *  Created on: Aug 23, 2016
 *      Author: Kenny Do
 */

#ifndef CARD_H_
#define CARD_H_


class Card {
	char suit;
	int rank;
	Card();
public:
	Card(const char & suit, const int & rank);
	int getValue();
	void displayCard();
};

#endif /* CARD_H_ */
