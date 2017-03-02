//============================================================================
// Name        : Constructor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;
using namespace tutorial;

int main() {

	Person person1;//don't use () for initializing a object without parameters.
	Person person2("Bob", 12);
	Person person3("Sue", 23);

	cout << person1.toString() << endl;
	cout << person2.toString() << endl;
	cout << person3.toString() << endl;
	return 0;
}
