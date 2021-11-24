#include <iostream>
using namespace std;

class ABC {
	
	public: 
	
	int a, b;
	
	ABC (int x, int y) 
	{
		a = x;
		b = y; 
	}
};

int main () {
	
	ABC obj (10, 20); 
	cout << obj.a << endl;
	cout << obj.b << endl; 
	
	return 0; 
} 

