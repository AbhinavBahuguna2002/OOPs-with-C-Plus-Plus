#include <iostream>
using namespace std;

class A {

	public: 
	int x;
	
	protected: 
	int y;
	
	private: 
	int z;

};

class B: public A {

	public:
	
	void display () { 
	
	// accessing through inheritance 
	x=10;
	y=20;
 
// 	z won't be visible to B  
//	z=30; 

	cout << "Value of x: " << x << endl;
	cout << "Value of y: " << y << endl; 
//	cout << "Value of z: " << z << endl; 
	}
};

int main () {
	
	B obj;
	obj.x=10;

// 	y won't be accessible through an object as it is protected
//	obj.y=20;
/*
	z won't be visible to B  
	obj.z=30;
*/
	obj.display();
	
	return 0; 
} 
	
