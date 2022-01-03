#include <iostream> 
using namespace std; 

int main () 
{
	int x=40; 
	int y=0; 
	int z=0;

	try {

		if (y==0) {
			throw runtime_error ("Math error: Attempted divide by zero\n");
		}

		z= x/y; 
	}

	catch (runtime_error &e) {

		cout << "Exception Occurred\n" << e.what();
	}
}