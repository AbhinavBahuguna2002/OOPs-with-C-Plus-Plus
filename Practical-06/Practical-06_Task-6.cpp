#include <iostream>

using namespace std;

int main () 
{
    string s = "Hello";
    cout << "Address before change: " << &s << endl; 
    
    s[0] = 'J';
    cout << s << endl;
    
    cout << "Address after change: " << &s <<endl; 
    return 0;
} 
