#include <iostream>
using namespace std; 

class A {

	public:
	int k; 

};

class B: public A {

	public:

	void display () {

		cout << "Value of k= " << k << endl;
	}

};

class C: public A {

	public:

	void display () {

		cout << "Value of k= " << k << endl;
	}

};

class D: public B, public C {


};

int main () {

	B obj1; 
	obj1.k=10;
	obj1.display();

	C obj2;
	obj2.k=20;
	obj2.display();

	D obj3;
	obj3.k=30; // Error! 
	/* As both class B and class C have access to k, ambiguity is created.
	The compiler does not know which copy of k to access, either from B or C*/  
	
	return 0;
}
