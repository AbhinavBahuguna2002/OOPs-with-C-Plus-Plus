#include <iostream>
using namespace std;

int fact (int x) 
{
	int f=1, i;
	for (i=1; i<=x; i++) 
	{
		f = f*i; 
	} 
	return f; 
}
	
int main ()
{
	int n; 
	cout << "Enter a number: "; 
	cin >> n; 

	int result = fact (n); 
	cout << "\nFactorial: " << result << endl;
	return 0;
} 
 
	
