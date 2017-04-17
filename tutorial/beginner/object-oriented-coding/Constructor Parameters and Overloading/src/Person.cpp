/*
 * Person.cpp
 *
 *  Created on: Jan 2, 2017
 *      Author: Zeming
 */
#include <sstream>
#include "Person.h"

namespace tutorial {

Person::Person() {
	name = "Undefined";
	age = 0;

}

Person::Person(std::string newName, int newAge) {
	name = newName;
	age = newAge;
}

std::string Person::toString() {
	std::stringstream ss;

	ss<<"Name: ";
	ss<<name;
	ss<<"; Age: ";
	ss<<age;

	return ss.str();
}

} /* namespace tutorial */
