#include <iostream>

using namespace std;

int main ()
{	
	int n, i, c=0; 
	cout << "Enter a number: ";
	cin >> n;
	
	for (i=2; i<n ; i++) { 
	
		if (n%i == 0) 
		c++;
	}
	
	if (c == 0) 
		cout << "It is a Prime No.\n";
	else 
		cout << "It is not a Prime No.\n";
		
	return 0;
} 

