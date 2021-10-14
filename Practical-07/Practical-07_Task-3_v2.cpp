/* This program prints the reverse of the array by subtracting 10 from each element */ 

#include <iostream> 
using namespace std;

int main () 
{ 
	int arr [3][3], i, j;
	cout << "Enter the values in the array~\n"; 
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++) 
		cin >> arr[i][j];
	} 
	
	cout << "\nThe resversed array is~\n"; 

	for (i=0; i<3; i++) 
	{
 		for (j=0; j<3; j++) 
			cout << (10-arr[i][j]) << " "; 
		cout << endl; 
	} 
	
	return 0; 
} 
