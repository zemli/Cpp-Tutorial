//============================================================================
// Name        : Arrays.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void show1(const int num, string str[]){
	//cout << "size of str: " << sizeof(str) << endl; //is 8, sizeof pointer
	for(int i=0; i<num; i++){
		cout << str[i] << " " << flush;
	}
	cout<<endl;
}

void show2(const int num, string *str){
	for(int i=0; i<num; i++){
		cout << str[i] << " " << flush;
	}
	cout << endl;
}

void show3(string (&str)[3]){
	for(int i=0; i<sizeof(str)/sizeof(string); i++){
		cout << str[i]<<" "<<flush;
	}

	cout << endl;
}

string *getArray() {
	string numbers[] = {"one", "two", "three"};
	return numbers;//cannot return pointers to local variables so get a warning,
	//because after return text no longer exist //could declare a global variable
}

char *getMem() {
	char *pMem = new char[100];

	return pMem;//can return an object created by new operator
}

void freeMem(char *pMem){
	delete [] pMem;
}

int main() {
	string text[] = {"apple", "orange", "banana"};
	cout << sizeof(text) << endl;

	show1(3, text);

	show2(3, text);

	show3(text);

	char *pMemory = getMem();
	freeMem(pMemory);

	return 0;
}
