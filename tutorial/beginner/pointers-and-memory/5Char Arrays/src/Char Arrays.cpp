//============================================================================
// Name        : Char.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//===3 ways to creat a char string===
	string text1 = "hello";

	cout << text1 << endl;

	char text2[] = {'h', 'e', 'l', 'l', 'o'};
	char text3[] = "hello";
	cout << text2 << endl;
	cout << text3 << endl;
	//===output 1===
	for(int i=0; i<sizeof(text3); i++) {
		cout << i << ": " <<(int)text3[i] <<endl;
	}
	//6 elements in the array. append a 0 at the end, to find out where the string end
	//===output 2===
	int k = 0;
	while(true) {
		if(text3[k] == 0)
			break;
		cout << text3[k] << flush;
		k++;
	}
	return 0;
}
