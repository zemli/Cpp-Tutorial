//============================================================================
// Name        : Copy.cpp
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
	Animal() {cout << "an animal created" << endl;};
	//Animal(const Animal &other) { name = other.name; cout << "animal copying" <<endl;};
	//use a list:
	Animal(const Animal &other): name(other.name) { cout << "animal copying" <<endl;};

	void setName(string name) {this->name = name;};
	void speak() const {cout << "My name is: " << name << endl;}//dosen't change anything
};

int main() {
	Animal animal1;
	animal1.setName("Fred");//the default constructor is called

	Animal animal2 = animal1;//use Animal(const Animal &other)
	//if there is no Animal(const Animal &other), animal2 has name Fred

	animal1.speak();
	animal2.speak();

	animal2.setName("Bob");

	animal1.speak();//doesen't change the name of animal1
	animal2.speak();

	Animal animal3(animal1);
	animal3.speak();

	return 0;
}
