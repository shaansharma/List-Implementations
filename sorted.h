#ifndef SORTED_H
#define SORTED_H

#include "linkedlist.h"

class SortedList : public LinkedList{
public:
	void add(int num);
	
	SortedList();
	~SortedList();
};

#endif
