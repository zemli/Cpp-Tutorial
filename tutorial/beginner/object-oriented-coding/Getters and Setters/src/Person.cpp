/*
 * Person.cpp
 *
 *  Created on: Jan 1, 2017
 *      Author: Zeming
 */

#include "Person.h"

namespace gt {

Person::Person() {
	// TODO Auto-generated constructor stub
	name = "George";
}

std::string Person::toString() {
	return "Person's name is " + name;
}

void Person::setName(std::string newName) {
	name = newName;
}

std::string Person::getName() {
	return name;
}

} /* namespace gt */
