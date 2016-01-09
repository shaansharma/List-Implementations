#ifndef LIST_H
#define LIST_H

class List{

protected:
	int length;

public:

	virtual int at(int index) = 0;
	virtual int first() = 0;
	virtual int last() = 0;
	virtual void add(int num) = 0;
	virtual int find(int num) = 0;
	virtual bool remove(int num) = 0;
	int size(); //getter

	virtual ~List() = 0;
	//List() {length = 0;}

};

#endif

//ADD CONST
//FACTOR LINKED LISTS INTO CLASS
//MAKE REINDEXING MORE EFFEICIENT (JUST START FROM CURRENT POSITION)
