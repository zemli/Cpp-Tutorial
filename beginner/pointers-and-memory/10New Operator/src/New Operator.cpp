//============================================================================
// Name        : New.cpp
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

	void setName(string name) {this->name = name;};
	void speak() const {cout << "My name is: " << name << endl;}//dosen't change anything
};

int main() {
	Animal cat;
	cat.setName("Tom");
	cat.speak();

	Animal *pCat = new Animal();//allocate memory on the heap
	pCat->setName("Tommy");
	(*pCat).setName("Tommy H");//another way to refer
	pCat->speak();
	delete pCat;//when allocate a object using "new", need to delete the object manually

	Animal *pCat2 = NULL;
	pCat2 = new Animal();
	delete pCat2;

	cout << sizeof(pCat) <<endl;

	return 0;
}
