#include <iostream> 
using namespace std; 

class base{

	public:

	base () 
	{
		cout << "Base Constructor" << endl; 
	}

	virtual ~base () 
	{
		cout << "Base Destructor"<< endl;
 	}
	
};

class child: public base {

	public: 
	child () 
	{
		cout << "Child Constructor" << endl; 
	}

	~child () 
	{
		cout << "Child Destructor"<< endl;
 	}
	
};

int main () {

	
	child c;
	base *p;
	p =&c; 

	delete p; 

	return 0; 
}
