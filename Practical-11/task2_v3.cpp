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

class B: private A {

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
	
// As x is inherited from A, and it is private in B, it won't be accessible from an Object of class B 
	// obj.x=10;

// 	y won't be accessible through an object as it is protected
//	obj.y=20;
/*
	z won't be visible to B  
	obj.z=30;
*/
	obj.display();
	
	return 0; 
} 
	
