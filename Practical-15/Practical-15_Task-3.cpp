#include <iostream> 
#include <sstream>
#include <iomanip>
using namespace std; 

int main () 
{ 
	int n =50; 
	
	cout << dec << "Decimal: " << n << endl; 
	cout << hex << "Hex: " << n << endl; 
	

	cout << "\nUsing skipws~" << endl; 
	char a, b, c;

  	std::istringstream iss ("  123");
  	iss >> std::skipws >> a >> b >> c;
  	std::cout << a << b << c << '\n';
  	
  	cout << "\nUsing noskipws~" << endl; 
  	std::istringstream p ("  123");
  	p >> std::noskipws >> a >> b >> c;
  	std::cout << a << b << c << '\n';

  	cout << "\nUsing 'ws'- it discards leading whitespaces~" << endl; 
  	std::istringstream s ("    This is a test."); 
  	string line; 
  	getline (s >> ws, line); 
  	cout << line << endl; 

  	cout << "\nUsing endl, ends, flush~" << endl; 
  	/*
  		Null is represented by - 0x00
  		AKA The 0x00 byte is used as a sentinel to mark the end of the string in C. 
  	*/
  	cout << "ABC"; 
  	cout << "EFG" << endl; 
  	cout << "HIJ" << ends; 
  	cout << "KLM" << flush; 

  	cout << "\n\nUsing setW, setPrecision~" << endl; 
  	double f = 3.14159; 
  	cout << setprecision (5) << f << endl; 
  	cout << setw(14) << f << endl; 

  	return 0;
  	
 }
