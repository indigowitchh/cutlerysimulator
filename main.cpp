#include<iostream>
#include"cutlery.h"
#include"globals.h"
using namespace std;


int main() {
	srand(time(NULL));

	cutlery Rey;
	cutlery is;
	cutlery sus;

	Rey.printInfo();
	Rey.use();
	Rey.printInfo();
	Rey.wash();
	Rey.printInfo();
	cout << endl << endl;
	is.printInfo();
	is.use();
	is.printInfo();
	is.wash();
	is.printInfo();
	cout << endl << endl;
	sus.printInfo();
	sus.use();
	sus.printInfo();
	sus.wash();
	sus.printInfo();
}
