#include <iostream>
using namespace std;


template <typename T1, class T2, class T3> 
T3 add (T1 x, T2 y) 
{
	return (x + y); 
}

int main ()
{
	cout << add <int, float, double > (1, 2.5f) << endl; 
	return 0; 
}