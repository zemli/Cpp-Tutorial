//============================================================================
// Name        : Inheritance.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Machine {
private:
	int id;
public:
	Machine(): id(0) {
		cout << "Machine no-argument constructor"<<endl;
	}
	Machine(int id): id(id){
		cout << "Machine one-argument constructor"<<endl;
	}
	void info() {
		cout << "ID: " << id << endl;
	}
};

class Vehicle: public Machine { //cannot refer id in Vehicle, because it is private
public:
	Vehicle() {
		cout << "Vehicle no-argument constructor"<< endl;
	}
	Vehicle(int id): Machine(id){//can call Machine(id)
			cout << "Vehicle one-argument constructor"<< endl;
		}
};

class Car: public Vehicle {
public:
	Car(): Vehicle(777) { //call the constructor in superclass and pass an argument//cannot call Machine(id)
		cout << "Car no-argument constructor"<< endl;
	}

};

int main() {
	Machine m;
	Machine m2(17);
	Vehicle v;//also calls the constructor in the superclass
	v.info();//although id defined in superclass, v can has a id
	//Vehicle v2(18); //constructor cannot be automatically inherited in C++. triggers an error if no one-argument constructor defined
	Vehicle v3(19);//creates a constructor for Vehicle, can call Machine(id)
	v3.info();
	Car c;
	c.info();


	return 0;
}
