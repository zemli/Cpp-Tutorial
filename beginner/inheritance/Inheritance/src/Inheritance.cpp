//============================================================================
// Name        : Inheritance.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal { //superclass
public:
	void speak() {cout << "Grrrr" <<endl;};
};

class Cat: public Animal { //subclass, extends class Animal
public:
	void jump(){
		cout << "Cat jumping" << endl;
	}
};

class Tiger: public Cat { //subclass of Cat and Animal
public:
	void attack() {
		cout << "Tiger attacking !!!" <<endl;
	}
};

int main() {
	Animal a;
	a.speak();

	Cat meo;
	meo.speak();
	meo.jump();

	Tiger t;
	t.speak();
	t.jump();
	t.attack();


	return 0;
}
