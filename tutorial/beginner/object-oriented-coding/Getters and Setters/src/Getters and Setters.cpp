//============================================================================
// Name        : Getters.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"

using namespace gt;
using namespace std;

int main() {

	Person one;

	cout << one.toString()<<endl;
	one.setName("Georgina");
	cout << one.toString()<<endl;

	cout<< "Name of person with get method: " << one.getName() << endl;
	return 0;
}
