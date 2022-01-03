#include <iostream> 
#include <fstream>
using namespace std; 

int main () 
{
	fstream file;
	file.open("xyz.txt", ios::app);
	
	file << "Adding this to the existing file.\n"; 
	
	file.close(); 
	
	return 0; 
} 

