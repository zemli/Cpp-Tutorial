//============================================================================
// Name        : Pointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void manipulate(int value) {
	cout << "1. value in manipulate(): " << value << endl;
	value = 10;
	cout << "2. new value in manipulate(): " << value << endl;
}

void pmanipulate(int* pvalue) {
	cout << "4. value in manipulate(): " << *pvalue << " at addr " << pvalue << endl;
	cout << "the pointer is at addr " << &pvalue << endl;
	cout << "sizeof(pvalue): " << sizeof(pvalue)<< "; sizeof(*pvalue): " << sizeof(*pvalue) << endl;
	*pvalue = 10;//change the value in an addr
	cout << "5. new value in manipulate(): " << *pvalue << endl;
}

int main() {

	int nValue = 8;

	int* pnValue = &nValue;

	cout << "Int value: " << nValue << endl;
	cout << "Pointer to int address: " << pnValue << endl;
	cout << "Int value via pointer: " << *pnValue << endl;
	cout << "Pointer address: " << &pnValue << endl;

	cout << "==========================" << endl;
	manipulate(nValue);
	cout << "3. nValue after manipulate(): " << nValue << endl;

	pmanipulate(&nValue);
	cout << "6. nValue after manipulate(): " << nValue << " at addr " << &nValue << endl;
	cout << "sizeof(&nValue): " << sizeof(&nValue) << endl;
	cout << "sizeof(nValue): " << sizeof(nValue);
	return 0;
}
