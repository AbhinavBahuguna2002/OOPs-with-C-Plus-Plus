#include <iostream> 
using namespace std; 

class base{

	public:

	// Due to virtual keyword, compiler will ignore this at run-time. 
	virtual int add (int a, int b) {

		return (a+b); 
	}
	
	// abstraction is implemented here
	virtual int multi (int a, int b) = 0; // pure virtual function. 
	//Due to abstraction compiler will not bind this function at compile time. 
	
	int sub (int a, int b); 
};

class child: public base {

	public: 
	
	int add (int a , int b) {

		return (a+b+1);
	}
	
	// During run time this definition will be followed. 
	int multi (int a, int b) {

		return (a*b); 
	} // abstraction is implemented here
};

int main () {

	
	child c;
	//base b;
	base *p;

	p=&c; 
	cout << p->multi (2, 3) << endl; 
	cout << p->add (1,2) << endl; 
	return 0; 
}


