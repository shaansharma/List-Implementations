#ifndef VECTOR_H
#define VECTOR_H

#include "list.h"

class Vector : public List{

	int *data;

public:
	virtual int at(int index);
	virtual int first();
	virtual int last();
	virtual void add(int num);
	virtual int find(int num);
	virtual bool remove(int num);

	Vector();
	~Vector();

};

#endif

