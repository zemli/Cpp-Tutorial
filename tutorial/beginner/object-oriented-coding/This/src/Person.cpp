/*
 * Person.cpp
 *
 *  Created on: Jan 1, 2017
 *      Author: Zeming
 */

#include "Person.h"
#include <sstream>
namespace tutorial {

Person::Person() {
	name = "undefined";
	age = 0;
}

Person::Person(std::string name, int age) {
	this->name = name; //this is a pointer variable
	this->age = age;

	std::cout << "memory location of object: " << this << std::endl;
}

std::string Person::toString() {
	std::stringstream ss;

		ss<<"Name: ";
		ss<<name;
		ss<<"; Age: ";
		ss<<age;

		return ss.str();
}




} /* namespace gt */
