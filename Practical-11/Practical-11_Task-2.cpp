#include <iostream>
using namespace std; 

class Mammals {
	
	public: 
	void display () {
	
	cout << "I am a mammal." << endl;
	
	}
}; 

class Marineanimals {

	public: 
	void display() {
	
	cout << "I am a marine animal." << endl; 
	
	} 
	
}; 

class BlueWhale: public Mammals, public Marineanimals {

	public: 
	void display () {

		cout << "I belong to both categories: Mammals as well as Marine animals." << endl; 
	}

};

int main () {

	Mammals obj1;
	obj1.display(); 

	Marineanimals obj2;
	obj2.display();

	BlueWhale obj3;
	obj3.display();

	/*
	Accessing display function from a specific base class using derived class object~

	ObjectName.classname::functionName(...);

	*/
	obj3.Mammals::display();
	obj3.Marineanimals::display();

	return 0;

}