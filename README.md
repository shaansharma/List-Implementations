#List Implementations
There are 3 different implementations of a List data type in C++
###Methods:
```c++
int at(int index) //returns the item at index, index
int first() //returns the first item in the list
int last() //returns the last item in the list
int size() //returns the size of the list
void add(int num) //adds num to list
int find(int num) //returns first index of num, otherwise -1
bool remove(int num) //removes first occurence of num
##Vector
Implemented as an array
###Usage:
```c++
myList = new Vector;
```
##Unsorted Linked List
Inherites from List
###Usage:
```c++
myList = new UnsortedList;
```
##Sorted Linked List
Inherites from List
###Usage:
```c++
myList = new SortedList;
```
