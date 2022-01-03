#include <iostream> 
#include <fstream>
using namespace std; 

int main () 
{
	fstream new_file;
	new_file.open("abc.txt", ios::in);
	
	if (!new_file) 
	{
		cout << "No such file found.\n"; 
	}
	
	else 
	{
		char ch; 
		while (!new_file.eof()) {
			
			new_file >> noskipws >> ch;
			cout << ch; 
		} 
		new_file.close ();
	}
	
	return 0; 
} 

