#include <iostream>
#include "Card.h"
#include "CardDeck.h"
using namespace std;

int main() {
	Card test('s',4);
	test.displayCard();
	CardDeck test2();
	test2.displayCardAt(0);

//	Card a[2] = {Card('h',5),Card('d',6)};
//	a[0].displayCard();
//	a[1].displayCard();

	return 0;
}
