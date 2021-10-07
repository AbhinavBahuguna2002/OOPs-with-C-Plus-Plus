#include <bits/stdc++.h> 
using namespace std;

int main () 
{   
    char a = 'A'; 
    char b = 'E'; 
    
    string s1 = "ABC"; 
    string s2 = "ABC";
    
    int x = int (a-b);
    int y = s1.compare(s2);

    cout << "Comparison of 'A' & 'E': " << x << endl;
    
    cout << "Comparison of ABC & ABC: ";  
    if (y == 0) { cout << "Equal" << endl; } 
    if (y > 0) { cout << "S1 is greater than S2" << endl; } 
    if (y < 0) { cout << "S1 is smaller than S2" << endl; }  
    
    return 0;
} 
