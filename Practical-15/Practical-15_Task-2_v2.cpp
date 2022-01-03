#include <iostream> 
#include <fstream>
using namespace std; 

int main () 
{
	fstream file;
	file.open("xyz.txt", ios::out);
	
	file << "First Line \n"; 
	file << "Second Line \n"; 
	file << "Third Line \n";

	file.close(); 
	
	return 0; 
} 

