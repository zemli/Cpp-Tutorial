//============================================================================
// Name        : Returning.cpp
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

Animal create1() {
	Animal a;//create a temporary object(local variable in stack)
	a.setName("Amy");
	return a;//return an object
}

Animal &create2() {
	Animal b;
	b.setName("Berry");
	return b;
}

Animal *create3(){
	Animal *p = new Animal();//the object won't be deallocated until delete. diff from &create2()
	p->setName("charlie");
	return p;
}

int main() {
	Animal frog = create1();
	frog.speak();

	Animal &dog = create2();//return a reference, but the temp object b dosen't exist after return
	dog.speak();

	Animal *pCat = create3();//return an addr(8 bytes) into pointer variable
	pCat->speak();
	delete pCat;

	return 0;
}
