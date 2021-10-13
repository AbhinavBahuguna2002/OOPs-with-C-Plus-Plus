/* This program prints Year, Month or Day as per user's choice using a switch manually (without ctime) */

#include <iostream> 
using namespace 

int main ()
{	
	int n;
	cout << "What do you want to print?\n"; 
	cout << "1. Year\n2. Month\n3. Day\n" << endl;
	cout << "Enter your choice: "; 

	cin >> n;

	switch (n) 
	{
		case 1: cout << "2021\n";
		break;
		
		case 2: cout << "October\n";
		break;
		
		case 3: cout << "Wednesday\n"; 
		break; 

		default: cout << "Not applicable. Try again.\n";
	} 

	return 0;	
}
