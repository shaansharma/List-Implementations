#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "list.h"
#include "node.h"

class LinkedList : public List{
protected:
	Node *firstNode;
	Node *lastNode;
public:
	virtual int at(int index);
	virtual int first();
	virtual int last();
	virtual void add(int num) = 0;
	virtual int find(int num);
	virtual bool remove(int num);

	LinkedList();
	virtual ~LinkedList();
};

#endif
