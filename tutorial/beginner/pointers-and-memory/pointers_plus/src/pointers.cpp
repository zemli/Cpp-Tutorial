//============================================================================
// Name        : pointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void exchange1(int *u, int *v);//pointers as parameters, pass addr to them
void exchange2(int &u, int &v);//pass by reference, pass variable directly
void changeVal(int &val);
void changeAddr(int *u, int *v);

int main() {
	int *pint;
	int a = 3, b = 5;

	pint = &a;
	cout << "size of int (what pointer refers)" << sizeof(*pint)<<endl;
	cout << "size of pointer itself (addr) " << sizeof(pint)<<endl;

	cout << "before exchange "<< *pint <<endl;
	exchange1(&a, &b);
	cout << "after exchange1 "<< *pint <<endl;
	exchange2(a, b);
	cout << "after exchange2 "<< *pint <<endl;

	changeVal(b);
	cout << "after changeVal, b is "<< b << endl;
	changeAddr(&a, &b);
	cout << "after changeAddr, in main() a is still "<< a <<endl;
	//=================char and pointer===============//
	//char *pchar = "Hello World"; get a warning
	//char *pchar = new char[100];
	char charArray[100];
	char *pchar = charArray;
	cin >> pchar; //get input to pchar
	char c = *(pchar+1);
	cout << c << endl;
	//=================string and pointer===============//
	const char *pstring = "this is a string";
	string str(pstring);
	cout << str <<endl;

	return 0;
}

void exchange1(int *u, int *v){
	int temp;//int *temp
	temp = *u;//temp = u;
	*u = *v;
	*v = temp;
}

void exchange2(int &u, int &v){
	int temp;
	temp = u;
	u = v;
	v = temp;
}

void changeVal(int &val){
	val = 999;
}

void changeAddr(int *u, int *v){
	int *temp;
	temp = u;
	u = v;
	v = temp;
	cout << "after changeAddr, u is in changeAddr() "<< *u <<endl;
}




