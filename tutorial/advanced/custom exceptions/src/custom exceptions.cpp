//============================================================================
// Name        : custom.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <exception>
using namespace std;

class MyException: public exception { //inherit exception class
public:
	virtual const char* what() const throw(){
		return "something bad happened";
	}
};

class Test {
public:
	void goeswrong() {
		throw MyException();
	}
};

int main() {
	Test test1;
	try{
		test1.goeswrong();
	}
	catch(MyException &e){
		cout << e.what() << endl;
	}
	return 0;
}
