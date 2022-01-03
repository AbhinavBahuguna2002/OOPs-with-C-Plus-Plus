#include <iostream> 
#include <fstream> 
using namespace std; 

int main () 
{ 
	ofstream wr; 
	wr.open("first.txt");
	wr << "Lab Practical 15\n";
	wr.close(); 

	string st; 
	ifstream rd;
	rd.open("first.txt"); 

	while (getline(rd, st)) 
	{ 
		rd >> st; 
		cout << st << endl; 
	} 

	rd.close(); 

	return 0; 
} 
