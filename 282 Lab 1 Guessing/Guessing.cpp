/**
Kenny Do
*/
#include <iostream>
#include <String>
#include <time.h>
#include <cstdlib>

using namespace std;

int main() {
	char input = 'y';
	do {
		srand(time(NULL));
		//Gets a random number
		int randomNum = rand() % 100;
		int guess;
		int attempt = 0;
		cout << "Guess a number between 1 and 99" << endl;
		cin >> guess;
		//At each attempt, attempt gets incremented and the user is informed whether their guess was high or low
		while (guess != randomNum) {
			attempt++;
			//if the attempt is higher than 6, then get out of the loop
			if (attempt > 6) {
				break;
			}
			if (guess > randomNum) {
				cout << "Not correct, guess lower. Attempt: " << attempt << endl;
			}
			else {
				cout << "Not correct, guess higher. Attempt: " << attempt << endl;
			}
			cin >> guess;
		}
		//if the attempt is less than 7, then send congratulations else the user is informed that there were to many attempts
		if (attempt <= 6) {
			cout << "Yeah, " << randomNum << " was correct." << endl;
		}
		else {
			cout << "Too many attempts. Number was " << randomNum << endl;
		}
		cout << "Continue? Enter y" << endl;
		cin >> input;
	} while (input == 'y');
	return 0;
}
