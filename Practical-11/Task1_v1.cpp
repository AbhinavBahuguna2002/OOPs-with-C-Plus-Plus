#include <iostream>
using namespace std;

class A {

	public: 
	int x;
	int y; 
};

class B: public A {

	public:
	
	void display () { 
	
	// accessing through inheritance 
	x=10;
	y=20; 

	cout << "Value of x: " << x << endl;
	cout << "Value of y: " << y << endl; 
	}
};

int main () {
	
	B obj;
	obj.display();
	
	return 0; 
} 
	
