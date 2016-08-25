#include "Card.h"
#include <iostream>
using namespace std;


Card::Card(const char & suit, const int & rank) {
	this->suit = suit;
	this->rank = rank;
}

int Card::getValue() {
	return rank;
}

void Card::displayCard() {
	cout << "The card is " << rank << " of " << suit <<endl;
}
