//============================================================================
// Name        : Hello-World.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

void basic();
void multiArray();

int main() {
	//basic();
	multiArray();
	return 0;
}

void multiArray() {
	string animals[2][3] = {
			{"fox", "dog", "cat"},
			{"mouse", "squirrel", "parrot"}
	};

	for(int i=0; i<sizeof(animals)/sizeof(animals[0]); i++){
		for(int j=0; j<sizeof(animals[0])/sizeof(string); j++){
			cout << animals[i][j] << " " <<flush;
		}
		cout << endl;
	}

	cout << "==== sizeof ====" << endl;
	cout << "sizeof(string) = " << sizeof(string) << endl;
	cout << "sizeof(animals) = " << sizeof(animals) << endl;
	cout << "sizeof(animals[0]) = " << sizeof(animals[0]) << endl;
}

void basic() {
	int numberCats = 7;
		float fValue = 1.1;
		string text1;

		const int size = 5;
		double array1[size];
		int array[] = {3,43,12,2};

		cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
		cout << "number is " << numberCats << endl;
		//cout << "please input a string " << flush;
		//cin >> text1;
		//cout << "output is " << text1 << flush;

		cout << setprecision(10) <<fValue<< endl;

		cout << "uninitialized value: " << array1[0]<< endl;
		cout << array[0]<< endl;
		cout << "bad value: " << array[7]<< endl;

		cout << "===== sizeof =====" << endl;
		cout << sizeof(array) << endl;
		cout << "sizeof(array)/sizeof(int) = " << sizeof(array)/sizeof(int) << endl;
}
