#List Implementations
There are 3 different implementations of a List data type in C++
###Methods:
```c++
int at(int index); //returns the item at index, index
int first(); //returns the first item in the list
int last(); //returns the last item in the list
int size(); //returns the size of the list
void add(int num); //adds num to list
int find(int num); //returns first index of num, otherwise -1
bool remove(int num); //removes first occurence of num
```
##Vector
Implemented as an array
###Method Runtimes:
```c++
int at(int index); //O(1)
int first(); //O(1)
int last(); //O(1)
int size(); //O(1)
void add(int num); //O(n) worst case, O(1) average case
int find(int num); //O(n)
bool remove(int num); //O(n)
```
###Usage:
```c++
myList = Vector();
```
```c++
myList = new Vector;
...
delete myList;
```
##Unsorted Linked List
Inherites from List
###Method Runtimes:
```c++
int at(int index); //O(n)
int first(); //O(1)
int last(); //O(1)
int size(); //O(1)
void add(int num); //O(1)
int find(int num); //O(n)
bool remove(int num); //O(n)
```
###Usage:
```c++
myList = new UnsortedList;
```
##Sorted Linked List
Inherites from List
###Method Runtimes:
```c++
int at(int index); //O(n)
int first(); //O(1)
int last(); //O(1)
int size(); //O(1)
void add(int num); //O(n)
int find(int num); //O(n)
bool remove(int num); //O(n)
```
###Usage:
```c++
myList = new SortedList;
```
