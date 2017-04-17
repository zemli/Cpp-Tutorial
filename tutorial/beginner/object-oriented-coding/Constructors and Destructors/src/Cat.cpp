/*
 * Cat.cpp
 *
 *  Created on: Dec 17, 2016
 *      Author: Zeming
 */

#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() {
	// TODO Auto-generated constructor stub
	cout << "a Cat created!" <<endl;

	happy = true;
}

Cat::~Cat() {
	// TODO Auto-generated destructor stub
	cout << "Cat destroyed" << endl;
}

void Cat::speak() {
	if(happy){
		cout << "Meouw" <<endl;
	} else{
		cout << "sssss" <<endl;
	}

}

void Cat::makeHappy() {
	happy = true;
}

void Cat::makeSad() {
	happy = false;
}
