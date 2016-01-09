#ifndef NODE_H
#define NODE_H

class Node{
	
	int data;
	Node *next;
	int index;

public:
	//getters
	int getData() {return data;}
	Node *getNext() {return next;}
	int getIndex() {return index;}

	//setters
	void setData(int data){
		this->data = data;
	}
	void setNext(Node *next){
		this->next = next;
	}
	void setIndex(int index){
		this->index = index;
	}

	Node(int data, Node *next, int index) :
		data(data), next(next), index(index) {}
	//~Node();
};

#endif
