//============================================================================
// Name        : standard.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class GoesWrong {
public:
	GoesWrong() {
		char *pMemory = new char[999999999999999];
		delete [] pMemory;
	}
};

int main() {
	try {
		GoesWrong wrong;
	}
	catch(bad_alloc &e) {
		cout << "Caught exception" << e.what() << endl;
	}


	return 0;
}
