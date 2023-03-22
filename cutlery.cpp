#include "cutlery.h"
#include<iostream>
#include"globals.h"
using namespace std;

void cutlery::printInfo() {
	if (type == FORK)
		cout << "I am a fork" << endl;
	if (type == SPOON)
		cout << "I am a spoon" << endl;
	if (type == KNIFE)
		cout << "I am a knife" << endl;

	if (isClean == true)
		cout << "I am clean :)" << endl;
	if (isClean == false)
		cout << "I am dirty :(" << endl;
}

void cutlery::use() {
	cout << "We are using the cutlery" << endl;
	isClean = false;
}

void cutlery::wash() {
	cout << "We are washing the cutlery" << endl;
	isClean = true;
}

cutlery::cutlery() {
	isClean = true;
	int num = rand() % 3;
	type = num;
}
