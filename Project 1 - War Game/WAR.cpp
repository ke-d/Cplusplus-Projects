#include <iostream>
#include "Card.h"
#include "CardDeck.h"
using namespace std;

int main() {
	CardDeck test2;
	test2.printDeck();
	cout << test2.deal();

	test2.printDeck();
	cout << endl;
	test2.resetDeck();
	test2.printDeck();
	return 0;
}
