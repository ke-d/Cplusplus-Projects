/**
 * Kenny Do
 * CECS 282
 * 9/12/2016
 */
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

class MyClass {
  int x;
public:
  void setX(int i) { x = i; }
  int getX() { return x; }
};

void swap(MyClass *obs, const int & index, const int & newIndex) {
	MyClass temp = obs[newIndex];
	obs[newIndex] = obs[index];
	obs[index] = temp;
}

void shuffle(MyClass *obs, const unsigned int & size) {
	srand(time(NULL));
	cout << "Calling shuffle" <<endl;
	for(unsigned int i = 0; i < size;i++){
		swap(obs,i, (rand() % size));
	}
}



int main()
{
  int size = 5;
  MyClass obs[size];
  int i;

  for(i=0; i < size; i++) {
    obs[i].setX(i);
  }
  for(i=0; i < size; i++) {
    cout << "obs[" << i << "].getX(): " << obs[i].getX() << "\n";
  }
  shuffle(obs, size);
  for(i=0; i < size; i++) {
    cout << "obs[" << i << "].getX(): " << obs[i].getX() << "\n";
  }

  return 0;
}
