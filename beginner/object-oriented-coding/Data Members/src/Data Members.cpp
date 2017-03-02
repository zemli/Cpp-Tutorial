//============================================================================
// Name        : Data.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
	Cat jim;

	jim.speak();
	//jim.happy = true; cannot. happy is a private property
	jim.speak();

	Cat bob;
	bob.speak();
	jim.makeSad();
	bob.makeHappy();
	jim.speak();
	bob.speak();

	return 0;
}
