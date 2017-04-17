//============================================================================
// Name        : Pointer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	const int NSTRINGS = 5;

	string text[NSTRINGS] ={"one", "two", "three", "four", "five"};

	string *pText = text;

	pText += 3;
	cout << *pText <<endl;

	string *pEnd = &text[NSTRINGS];
	pText = &text[0];

	while(pText != pEnd) {
		cout << *pText << " " <<flush;
		pText++;
	}
	cout << endl;

	//set pText back to start
	pText = &text[0];
	long element = pEnd - pText;
	cout << element <<endl;

	return 0;
}
