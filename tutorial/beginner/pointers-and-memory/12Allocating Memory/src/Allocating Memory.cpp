//============================================================================
// Name        : Allocating.cpp
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
	Animal() {
		cout << "an animal created" << endl;
	};
	Animal(const Animal &other): name(other.name) {
		cout << "animal copying" <<endl;
	};
	~Animal() {
		cout << "Destructor called" << endl;
	};

	void setName(string name) {
		this->name = name;
	};
	void speak() const {
		cout << "My name is: " << name << endl;
	}//dosen't change anything
};

int main() {
	int *pInt = new int;
	*pInt = 7;
	cout << *pInt << endl;
	delete pInt;

	Animal *pAnimal = new Animal[3];//creat 3 objects
	pAnimal[2].setName("George");//note:use . rather ->
	pAnimal[2].speak();
	delete []pAnimal;//destruct 3 objects

	char *pChar = new char[100];
	delete [] pChar;

	//set string to single character(s)
	char c = 'a';
	string name(5,c);//create a string with five characters 'a'
	cout << name <<endl;

	return 0;
}
