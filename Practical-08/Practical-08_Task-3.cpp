#include <iostream>
using namespace std; 

int main ()
{
	int a = 10; 

	int *p; 
	p = &a; 
	
	int **q; // double pointer 
	cout << "Before change: " << *p << endl;
	
	q = &p;

	**q = 30;
	cout << "After change: " << a << endl;

	return 0;
}
 

