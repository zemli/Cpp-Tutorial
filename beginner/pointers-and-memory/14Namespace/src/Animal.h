/*
 * Animal.h
 *
 *  Created on: Jan 18, 2017
 *      Author: Zeming
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include<iostream>

using namespace std;

namespace jwp {

const string CATNAME = "ANIMAL";

class Cat {
public:
	Cat();
	virtual ~Cat();

	void speak();
};

} /* namespace jwp */

#endif /* ANIMAL_H_ */
