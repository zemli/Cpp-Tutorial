/*
 * Person.h
 *
 *  Created on: Jan 2, 2017
 *      Author: Zeming
 */

#ifndef PERSON_H_
#define PERSON_H_

namespace tutorial {

class Person {
private:
	std::string name;
	int age;
public:
	Person();
	Person(std::string newName) { name = newName; age = 0;}; //defined inline
	Person(std::string newName, int newAge);
	std::string toString();
};

} /* namespace tutorial */

#endif /* PERSON_H_ */
