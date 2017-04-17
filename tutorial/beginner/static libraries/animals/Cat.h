/*
 * Cat.h
 *
 *  Created on: Feb 22, 2017
 *      Author: Zeming
 */

#ifndef CAT_H_
#define CAT_H_

namespace example {

void saysth();

class Cat {
public:
	Cat();
	void speak();
	virtual ~Cat();
};

} /* namespace example */

#endif /* CAT_H_ */
