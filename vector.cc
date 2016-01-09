#include "vector.h"

Vector::Vector(){
	data = new int[1];
	length = 0;
}

Vector::~Vector(){
	delete []data;
}

//inherited from List
int Vector::at(int index){
	//assume index is valid
	return data[index];
}

int Vector::first(){
	//assume list is non-empty
	return data[0];
}

int Vector::last(){
	//assume list is non-empty
	return data[length-1]; //index/size discrepency
}

void Vector::add(int num){
	//we want to add num to data[length]
	if(length == 0){
		data[0] = num;
		length++;
		return;
	}

	int *temp = new int[length];
	for(int i = 0; i < length; i++){
		temp[i] = data[i];
	}
	delete []data;
	data = new int[length+1];
	for(int i = 0; i < length; i++){
		data[i] = temp[i];
	}
	data[length] = num;
	length++;
	delete []temp;
	return;
}

int Vector::find(int num){
	for(int i = 0; i < length; i++){
		if(data[i] == num) return i;
	}
	return -1;
}

bool Vector::remove(int num){
	if(length == 1){
		data[0] = 0;
		length--;
		return true;
	}

	//get index
	int index = 0;
	while(index < length){
		if(data[index] == num) break;
		index++;
	}
	if(data[index] != num) return false;

	int *temp = new int[length-1];
	//copy to temp, skipping the delete value
	for(int j = 0; j < length-1; j++){
		if(j < index){
			temp[j] = data[j];
		}
		else if(j == length-1){
			break;
		}
		else{
			temp[j] = data[j+1];
		}
	}
	delete []data;
	data = new int[length-1];
	for(int k = 0; k < length-1; k++){
		data[k] = temp[k];
	}
	delete []temp;
	length--;

	return true;
}






