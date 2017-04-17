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

	Person person1;
	Person person2("Bob");
	Person person3("Cindy", 18);

	cout << person1.toString() << endl;
	cout << person2.toString() << endl;
	cout << person3.toString() << endl;

	return 0;
}
