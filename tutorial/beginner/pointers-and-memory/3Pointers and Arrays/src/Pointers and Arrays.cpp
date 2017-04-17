//============================================================================
// Name        : Pointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string text[] = {"one", "two", "three"};

	string *pText = text;//point to the addr of the first element

	cout << "size: " << sizeof(text)/sizeof(string) << endl;//3
	//====1====
	for(int i = 0; i < sizeof(text)/sizeof(string); i++){
		cout << text[i] << " " << flush;
	}
	cout << endl;
	//====2====
	for(int i = 0; i < sizeof(text)/sizeof(string); i++){
		cout << pText[i] << " " << flush;
	}
	cout << endl;
	//====3====
	for(int i = 0; i < sizeof(text)/sizeof(string); i++, pText++){
		cout << *pText << " " << flush;
		//pText++; //can be moved to if condition statement
	}
	//after iteration, pText points to the end of array
	cout << endl;
	//====4====
	string *pElement = &text[0];
	string *pEnd = &text[2]; //note &

	while(true){
		cout << *pElement << " " << flush;

		if(pElement == pEnd) {
			break;
		}
		pElement++;
	}

	return 0;
}
