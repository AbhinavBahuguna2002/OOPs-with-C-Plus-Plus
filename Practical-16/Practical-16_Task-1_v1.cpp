#include <iostream>
using namespace std;


template <typename T> 
T add (T x, T y) 
{
	return (x + y); 
}

int main ()
{
	cout << add <int> (1, 2) << endl; 
	return 0; 
}