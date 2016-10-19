/*
 * Queue.h
 *
 *  Created on: Oct 19, 2016
 *      Author: kdo70
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include <stdexcept>

template<class Typ, int MaxQueue>
class Queue {
	/**
	 * Stores the items of the queue
	 */
	Typ items[MaxQueue];

	/**
	 * The index of where to enqueue next
	 */
	int tail;

	/**
	 * The index of where to dequeue next
	 */
	int head;

	/**
	 * The amount of elements of the queue
	 */
	int amount;
public:
	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Creates an empty queue
	 */
	Queue();

	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Destructor for the queue
	 */
	~Queue();

	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Adds a element to the queue
	 */
	void enqueue(Typ);

	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Deletes and returns a element from the queue
	 */
	Typ dequeue();

	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Returns true if the queue is empty
	 */
	bool empty();

	/**
	 * Precondition:
	 * 		None
	 * Postcondition:
	 * 		Returns true if the queue is full
	 */
	bool full();
};

/**
 * Creates an empty queue
 */
template<class Typ, int MaxQueue>
inline Queue<Typ, MaxQueue>::Queue() {
	tail = 0;
	head = 0;
	amount = 0;
}

/**
 * Destructor for the queue
 */
template<class Typ, int MaxQueue>
inline Queue<Typ, MaxQueue>::~Queue() {
	delete[] items;
}

/**
 * Adds an element to the queue
 */
template<class Typ, int MaxQueue>
inline void Queue<Typ, MaxQueue>::enqueue(Typ c) {
	if (!full()) {
		items[tail] = c;
		++tail;
		if (tail > MaxQueue - 1) {
			tail = 0;
		}
		++amount;
	} else {
		throw std::out_of_range("Queue Full");
	}
}

/**
 * Deletes and removes an element from the queue
 */
template<class Typ, int MaxQueue>
inline Typ Queue<Typ, MaxQueue>::dequeue() {
	if (!empty()) {
		Typ temp = items[head];
		++head;
		if (head > MaxQueue - 1) {
			head = 0;
		}
		--amount;
		return temp;
	} else {
		throw std::out_of_range("Queue Empty");
	}
}

/**
 * Returns true if the queue is empty
 */
template<class Typ, int MaxQueue>
inline bool Queue<Typ, MaxQueue>::empty() {
	return (amount == 0);
}

/**
 * Returns true if the queue is full
 */
template<class Typ, int MaxQueue>
inline bool Queue<Typ, MaxQueue>::full() {
	return (amount >= MaxQueue);
}

#endif /* QUEUE_H_ */
