//============================================================================
// Name        : Namespace.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
#include "Animal.h"

using namespace std;
//using namespace udemy;
//using namespace jwp;

int main() {
	udemy::Cat one;
	one.speak();

	jwp::Cat two;
	two.speak();

	cout << jwp::CATNAME << endl;
	cout << udemy::CATNAME << endl;

	return 0;
}
