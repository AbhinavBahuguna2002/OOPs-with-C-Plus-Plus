#include <iostream> 
using namespace std; 

class A { 
     
     public: 
     
     A () 
     {
          cout << "Class A Constructor" << endl; 
     } 
     
     ~A () 
     {
          cout << "Class A Destructor" << endl; 
     }
}; 

class B: public A {
     
     public: 
     
     B () 
     {
          cout << "Class B Constructor" << endl; 
     } 
     
     ~B () 
     {
          cout << "Class B Destructor" << endl; 
     }
};

class C: public B {
     
     public: 
     
     C () 
     {
          cout << "Class C Constructor\n" << endl;
     }
     
     ~C ()
     {
          cout << "Class C Destructor" << endl;  
     }
}; 


int main () { 

     C obj3;
     
     return 0; 
     
} 

          
