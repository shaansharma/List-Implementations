#include "unsorted.h"

void UnsortedList::add(int num){
	if(!firstNode){
		firstNode = new Node(num, 0, 0);
		lastNode = firstNode;
		length++;
		return;
	}

	lastNode->setNext(new Node(num, 0, lastNode->getIndex() + 1));
	lastNode = lastNode->getNext();
	length++;
	return;
}

UnsortedList::UnsortedList() : LinkedList() {}

UnsortedList::~UnsortedList(){}

