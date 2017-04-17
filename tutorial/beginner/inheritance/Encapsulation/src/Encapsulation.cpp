//============================================================================
// Name        : Encapsulation.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Frog {
private:
	string name;
	int age;

private:
	int getAge() {return age;}

public:
	Frog(string name, int age): name(name), age(age) {}
	string getName() {
		return name;
	}
	void info() {
		cout << "My name is: " << getName() << endl; //can access to getName() without creating an object
		cout << "My age is: " << getAge() << endl;//can access to private function in the class
	}
};

int main() {
	Frog frog("Fred", 7);

	cout << frog.getName() << endl;
	frog.info();

	return 0;
}
