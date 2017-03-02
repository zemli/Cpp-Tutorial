/*
 * Cat.h
 *
 *  Created on: Dec 17, 2016
 *      Author: Zeming
 */

#ifndef CAT_H_
#define CAT_H_

class Cat {

private:
	bool single = true; //c++11
	bool happy; //local variables are  initialized with a random value.
public:


	Cat();
	virtual ~Cat();
	void speak();
	void makeHappy();
	void makeSad();
};

#endif /* CAT_H_ */
