#include <iostream> 

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
  first::add(5,12);
  second::add(4.0, 8.0);
  return 0;
} 
