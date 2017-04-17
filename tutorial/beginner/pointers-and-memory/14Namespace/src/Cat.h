/*
 * Cat.h
 *
 *  Created on: Jan 18, 2017
 *      Author: Zeming
 */

#ifndef CAT_H_
#define CAT_H_

#include<iostream>
using namespace std;

namespace udemy {

const string CATNAME = "CATCAT";

class Cat {
public:
	Cat();
	virtual ~Cat();

	void speak();
};

}

#endif /* CAT_H_ */
