#include <iostream>
using namespace std; 

class ABC {
	
	private: 
	
	int a, b;
	
	public: 
		
	void setA (int x) 
	{
		a = x; 
	}
	
	int getA () 
	{
		return (a); 
	} 
}; 

int main () 
{
	ABC obj; 
	obj.setA (10); 
	
	cout << obj.getA() << endl; 
	
	return 0; 
} 

