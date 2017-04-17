/*
 * Person.cpp
 *
 *  Created on: Jan 1, 2017
 *      Author: Zeming
 */

#include "Person.h"
#include <sstream>
namespace tutorial {

/*constructor initialization list can also be done in header file
Person::Person(): name("undefined"), age(0) {
	//name = "undefined";
	//age = 0;
}
*/
Person::Person(std::string newName, int newAge): name(newName), age(newAge) {
	//this->name = name;
	//this->age = age;
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
