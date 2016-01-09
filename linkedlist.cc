#include "linkedlist.h"

LinkedList::LinkedList(){
	firstNode = 0;
	lastNode = 0;
	length = 0;
}

LinkedList::~LinkedList(){
	//deep delete
	Node *current = firstNode;
	Node *next = 0;
	while(current){
		next = current->getNext();
		delete current;
		current = next;
	}
	firstNode = 0;
	lastNode = 0;
}

//inherited from List
int LinkedList::at(int index){
	//assume index is a valid index
	Node *current = firstNode;
	while(current){
		if(current->getIndex() == index){
			return current->getData();
		}
		current = current->getNext();
	}
	return -1;
}

int LinkedList::first(){
	//assume list is non-empty
	return firstNode->getData();
}

int LinkedList::last(){
	//assume list is non-empty
	return lastNode->getData();
}

int LinkedList::find(int num){
	if(!firstNode) return -1;

	Node *current = firstNode;
	while(current){
		if(current->getData() == num){
			return current->getIndex();
		}
		current = current->getNext();
	}
	return -1;
}

bool LinkedList::remove(int num){
	if(!firstNode) return false;

	Node *current = firstNode;
	Node *prev = 0;

	while(current){
		if(current->getData() == num){
			//remove node
			if(!prev){ //first node
				firstNode = current->getNext();
				delete current;
				current = 0;
				length--;
			}else if(!(current->getNext())){ //last node
				lastNode = prev;
				prev->setNext(0);
				delete current;
				current = 0;
				length--;
			}
			else{ //any other node
				prev->setNext(current->getNext());
				delete current;
				current = 0;
				length--;
			}

			//fix indicies
			Node *current2 = firstNode;
			int j = 0;
			while(current2){
				current2->setIndex(j);
				current2 = current2->getNext();
				j++;
			}

			return true;
		}
		prev = current;
		current = current->getNext();
	}
	return false;
}

