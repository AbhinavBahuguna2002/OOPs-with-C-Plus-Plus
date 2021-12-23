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
	
};

class child: public base {

	public: 

	using base::add;

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
	cout << c.add(1,3) << endl; 

	base b; 
	cout << b.add(1,3) << endl; 

	return 0;

}
/*
	Even when using the 'using' keyword, int add (int , int) method of the base class will not be seen by the 
	object of the child class. 
*/ 

