//============================================================================
// Name        : postfix.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int value = 8;

	cout << value++ << endl;
	cout << ++value << endl;

	int num = value++;

	cout << "num is " << num <<endl;
	cout << "value is " << value << endl;

	return 0;
}
