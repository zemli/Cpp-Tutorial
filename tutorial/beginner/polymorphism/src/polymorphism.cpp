//============================================================================
// Name        : polymorphism.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal { //base class
public:
	virtual void speak() = 0;//virtual function in base class
	void introduce() {cout << "this is an Animal" << endl;}
	virtual ~Animal(){};
};

class Cat: public Animal { //sub class
public:
	virtual void speak(){cout << "Meooow" << endl;}
	void introduce() {cout << "this is a Cat" << endl;}
	virtual ~Cat(){};
};

class HouseCat: public Cat { //sub class
public:
	virtual void speak(){cout << "Oh Meeouww" << endl;};
	void introduce() {cout << "this is a HouseCat" << endl;}
	virtual ~HouseCat(){};
};

int main() {
	Animal *pAnimal1 = new Cat;
	pAnimal1->speak();//pAnimal is actually a cat. speak() in class Animal is virtual.
					//so speak() in Cat is called
	pAnimal1->introduce();//introduce() is not a virtual function, introduce() in Animal is called.

	Animal *pAnimal2 = new HouseCat;
	pAnimal2->speak();
	pAnimal2->introduce();

	delete pAnimal1;
	delete pAnimal2;

	return 0;
}
