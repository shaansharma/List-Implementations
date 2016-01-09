#include "sorted.h"

SortedList::SortedList() : LinkedList() {}

SortedList::~SortedList(){}


void SortedList::add(int num){
	if(!firstNode){
		firstNode = new Node(num, 0, 0);
		lastNode = firstNode;
		length++;
		return;
	}

	if(firstNode == lastNode){
		//check position
		if(firstNode->getData() <= num){
			lastNode = new Node(num, 0, 1);
			firstNode->setNext(lastNode);
			length++;
			return;
		}else{
			firstNode = new Node(num, lastNode, 0);
			lastNode->setIndex(1);
			length++;
			return;
		}
	}

	Node *current = firstNode;
	Node *prev = 0;
	Node *next = firstNode->getNext();
	while(current){
		if((current == firstNode) && (num < current->getData())){ //first node
			Node *n = new Node(num, current, 0);
			firstNode = n;
			length++;
			//reindex
			Node *current2 = firstNode;
			int j = 0;
			while(current2){
				current2->setIndex(j);
				current2 = current2->getNext();
				j++;
			}
			return;
		}

		if(!next){ //last node
			Node *n = new Node(num, next, current->getIndex() + 1);
			current->setNext(n);
			lastNode = n;
			length++;
			if(!prev){
				firstNode = next;
			}
			//reindex
			Node *current2 = firstNode;
			int j = 0;
			while(current2){
				current2->setIndex(j);
				current2 = current2->getNext();
				j++;
			}
			return;
		}
		if((current->getData() <= num) && (num <= next->getData())){
			Node *n = new Node(num, next, current->getIndex() + 1);
			current->setNext(n);
			length++;
			//reindex
			Node *current2 = firstNode;
			int j = 0;
			while(current2){
				current2->setIndex(j);
				current2 = current2->getNext();
				j++;
			}
			return;
		}
		
		prev = current;
		current = next;
		next = next->getNext();
	}
}

