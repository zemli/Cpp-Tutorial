/*
 * Person.h
 *
 *  Created on: Jan 1, 2017
 *      Author: Zeming
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

namespace tutorial {

class Person {
private:
	std::string name;
	int age;

public:


	Person():name("undefined"), age(0) {};//constructor initialization list. don't forget {}
	Person(std::string name, int age);

	std::string toString();
};

} /* namespace tutorial */

#endif /* PERSON_H_ */
