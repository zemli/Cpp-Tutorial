/*
 * Cat.cpp
 *
 *  Created on: Feb 22, 2017
 *      Author: Zeming
 */

#include "Cat.h"
#include <iostream>

namespace example {

void saysth() {
	std::cout << "Hi there" << std::endl;
}

Cat::Cat() {
	// TODO Auto-generated constructor stub

}

void Cat::speak() {
	std::cout << "Meoouw" << std::endl;
}

Cat::~Cat() {
	// TODO Auto-generated destructor stub
}

} /* namespace example */
