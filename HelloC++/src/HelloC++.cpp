//============================================================================
// Name        : HelloC++.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


namespace A{
}

class B {
	public:
	void test(){
		cout<< "test!!!!";
	}
};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	B b;
	b.test();
	return 0;
}


