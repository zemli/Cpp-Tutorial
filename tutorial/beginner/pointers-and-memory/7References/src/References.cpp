//============================================================================
// Name        : References.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void changesth(double value) {
	value = 111.111;
}

void changesthRef(double &value) { //same variable as value6
	value = 111.111;
}

int main() {
	int value1 = 8;
	int value2 = value1;
	value1 = 10;

	cout << value1 << " " << value2 << endl;//10 8

	int value3 = 8;
	int &value4 = value3;//refernece variable. value4 is just another name of value3
	value3 = 10;

	cout << value3 << " " << value4 << endl;

	value4 = 100;//value4 change value3
	cout << value3 << " " << value4 << endl;

	double value5 = 4.321;
	changesth(value5);//only pass value
	cout << value5 << endl;

	double value6 = 4.321;
	changesthRef(value6); //pass reference
	cout << value6 << endl;

	return 0;
}
