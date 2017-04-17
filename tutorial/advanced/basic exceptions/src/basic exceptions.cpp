//============================================================================
// Name        : basic.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void mightGoWrong(){
	bool error1 = false;
	bool error2 = true;

	if(error1){
		//throw 1;
		throw "something went wrong";
		//once one exception is threw, the following code won't be executed
	}
	if(error2){
		throw string("something else went wrong");
	}
}

void useMightGoWrong(){
	mightGoWrong();//nested function. pass exception to main()
}

int main() {

	try{
		useMightGoWrong();
	}
	catch(int e) {
		cout << "Error code: " << e<< endl;
	}
	catch(char const *e) { //can catch different kinds of errors
		cout << "Error message: " << e << endl;
	}
	catch(string &e){ //string is an object. so need to pass by reference
		cout << "string error message: " << e<< endl;
	}

	cout<<"still running" << endl;
	return 0;
}
