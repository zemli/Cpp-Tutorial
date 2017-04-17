//============================================================================
// Name        : static.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// .h header file
class Test {
private:
	static int num;
	int id;
public:
	static int count; //with a static, all the objects in the same class have the same variable
					  //which means it can be accessed by all objects, not shared by
					  //it associate with the class not with the particular object
	static int const MAX = 99;//initialization of const must be done in public
public:
	Test(){
		id = ++count;
	}
	static void showInfo(){
		cout<<num<<endl;
	}
	static void showCount(){
		cout << count << endl;
	}
	int getId(){
		return id;
	}

};

// .cpp file
int Test::count = 0;
int Test::num = 10;

int main() {

	Test::showInfo();
	cout << Test::MAX << endl;

	cout<<"original count: " << Test::count << endl;//don't have to create an object to access to static variables/functions
	Test test1;
	cout << "object1 id: " << test1.getId() << endl;
	Test test2;
	cout << "object2 id: "<< test2.getId() << endl;
	Test::showCount();

	return 0;
}
