#include <iostream> 
using namespace std; 

class base{

	public:
	int add (int a, int b) {

		return (a+b); 
	}
	
	float add (float a, float b) {

		return (a+b);

	}
	/*
	Within the base class overloading is taking place. In the child class, the methods of the base class 
	are being overridden. 
	*/
};

class child: public base {

	public: 
	
	int add (int a , int b) {

		return (a+b+1);
	}
	
	float add (float a, float b) {

		return (a+b+1);

	}
};

int main () {

	child c; 
	cout << c.add(2.5f, 4.5f) << endl;

	base b; 
	cout << b.add(1,2) << endl; 

	return 0;
}

/*

When running this program without 'using' keyword, then overridden methods of base class:- 

int add (int , int) and float add (float, float) will be overshadowed. 

*/