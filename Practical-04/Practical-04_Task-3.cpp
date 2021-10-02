#include <iostream> 
using namespace std;

namespace first {
  int add (int a, int b) { 
    return (a+b);
  } 
}

namespace second { 
  float add (float a, float b) { 
    return (a+b); 
  }  
} 

int main () { 
  cout << add(5,12); 
  cout << "\n";
  
  cout << add(4.0, 8.1);
  cout << "\n";
   
  cout << add(5.5, 2);
  cout << "\n";
  return 0;
} 
