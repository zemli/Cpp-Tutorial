/*
 * Person.h
 *
 *  Created on: Jan 1, 2017
 *      Author: Zeming
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

namespace gt {

class Person {
private:
	std::string name;

public:
	Person();
	std::string toString();
	void setName(std::string);
	std::string getName();
};

} /* namespace gt */

#endif /* PERSON_H_ */
