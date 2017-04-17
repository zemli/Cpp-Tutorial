//============================================================================
// Name        : Constructors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
	cout << "!!! Starting !!!" << endl;

	{
		Cat bob;
		bob.speak();
	}//bob destroyed here(when hit the curly bracket).
	//or it will destroyed when main() ends
	cout << "!!! Ending !!!" << endl;
	return 0;
}
