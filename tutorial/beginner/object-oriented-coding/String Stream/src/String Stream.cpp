//============================================================================
// Name        : String.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
using namespace std;

int main() {
	string name = "Bob";
	int age = 32;

	stringstream ss;
	//string info ="Name: " + name + "; age: " + age; error
	ss << "Name is : ";
	ss << name;
	ss << "; Age is: ";
	ss << age;

	//cout << ss.str() <<endl;

	string info = ss.str();
	cout << info << endl;

	return 0;
}
