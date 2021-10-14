// INCOMPLETE 

#include <iostream>
#include <string.h> 
#include <ctime>
using namespace std;

int main()
{	
	int i=0, sp=0, pos=0; 
	
	time_t curr_time;
	curr_time = time(NULL);

	char *tm = ctime(&curr_time);
	cout << "Today is : " << tm;
	
	string s1; 
	
	// Trasnferring the entire string with time in it to s1.
	while (*(tm+i) != '\0') {
		s1 = s1+ *(tm+i);
		i++; 
	}  
	i=0; 
	
	string day, month, yr; 
	char ch;
	
	// Loop for extracting day, month and year. 
	while (*(tm+i) != '\0') 
	{
		if (*(tm+i) == ' ') 
		{ 
			if (sp == 0) {
			  day = s1.substr(0, i); 
			  pos =i+1; 
			}
			
			if (sp == 1) { 
			  month = s1.substr(pos, i);
		    }
		    
			sp++; 
		}
		i++;
	}  
	cout << day << endl;
	cout << month << endl;  
	return 0;
}
