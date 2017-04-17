//============================================================================
// Name        : const.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal{
private:
	string name;
public:
	void setName(string name) {this->name = name;};
	void speak() const {cout << "My name is: " << name << endl;}//dosen't change anything
};

int main() {
	const double PI = 3.14159265;//cannot be changed
	cout << PI <<endl;

	Animal one;
	one.setName("Fred");
	one.speak();

	int value = 8;
	int *p = &value;
	cout << *p << endl;
	value = 10;
	cout << *p << endl;//changed

	int num = 77;
	p = &num;//change the pointer
	cout << *p << endl;

	*p = 100;
	cout << num << endl;//use pointer change the original variable

	const int *cp1 = &num;
	cp1 = &value;//can change the reference
	//*cp1 = 111;//cannot change the value
	int *const cp2 = &num;
	*cp2 = 111;//can change the value
	//cp2 = &value;//cannot change the reference
	const int *const cp3 = &num; //cannot be changed at all

	return 0;
}
