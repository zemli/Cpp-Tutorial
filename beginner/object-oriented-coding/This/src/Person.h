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
	Person();
	Person(std::string name, int age);
	std::string toString();
};

} /* namespace gt */

#endif /* PERSON_H_ */
