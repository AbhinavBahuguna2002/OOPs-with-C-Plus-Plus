/* This program prints the reverse of the array using the traditional method */ 

#include <iostream> 
using namespace std;

int main () 
{ 
	int arr [3][3], i, j;
	cout << "Enter the values in the array~\n"; 
	
  // taking input in the array 
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++) 
		cin >> arr[i][j];
	} 
	
	cout << "\nThe resversed array is~\n"; 

	for (i=2; i>=0; i--) 
	{
 		for (j=2; j>=0; j--) 
			cout << arr[i][j] << " "; 
		cout << endl; 
	} 
	
	return 0; 
} 
