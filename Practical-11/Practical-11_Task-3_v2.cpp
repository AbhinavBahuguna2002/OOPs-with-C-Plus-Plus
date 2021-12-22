#include <iostream>
using namespace std; 

class A {

	public:
	int k; 

};

class B: virtual public A {

	public:

	void display () {

		cout << "Value of k= " << k << endl;
	}

};

class C: virtual public A {

	public:

	void display () {

		cout << "Value of k= " << k << endl;
	}

};

class D: public B, public C {
	
	void display () {

		cout << "Value of k= " << k << endl;
	}

};

int main () {

	B obj1; 
	obj1.k=10;
	obj1.display();

	C obj2;
	obj2.k=20;
	obj2.display();

	D obj3;
	obj3.k=30;
	obj3.B::display(); 
	
	return 0;	
	
}
