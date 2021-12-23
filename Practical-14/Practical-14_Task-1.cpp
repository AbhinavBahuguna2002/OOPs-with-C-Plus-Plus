#include <iostream> 
using namespace std; 

class base{

	public:

	
	virtual int add (int a, int b) {

		return (a+b); 
	}
	
	
	int multi (int a, int b) {

		return (a*b); 
	}
	
	
};

class child: public base {

	public: 
	
	int add (int a , int b) {

		return (a+b+1);
	}
	
};

int main () {

	
	child c;
	base *p;
	p =&c; 

	cout << p-> add(1,2) << endl; // dynamic binding
	cout << p-> multi(1,2) << endl; // compile time binding 
	return 0; 
}
