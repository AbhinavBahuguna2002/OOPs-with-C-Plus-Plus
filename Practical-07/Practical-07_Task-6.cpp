#include <iostream>
using namespace std;

int main () 
{ 
	int i=0, j=0; 
	char arr[4][4];
	
	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++) 
		{ 
			if (j<i) 
			arr[i][j] = ' '; 
			
			else if ( (i==j) || (j>i) ) 
			arr [i][j] = '*'; 
		} 
	} 
	
	for (i=0; i<4; i++) 
	{ 
		for (j=0; j<4; j++) 
		{ 
			cout << arr[i][j]; 
		} 
		cout << endl; 
	} 
	return 0; 
} 

