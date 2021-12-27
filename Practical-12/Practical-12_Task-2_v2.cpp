#include <iostream> 
using namespace std; 

class A { 
     
     protected:
     int i; 
     
     public: 
     A (int x) 
     {    
          i=x; 
          cout << "Class A Constructor"  << endl; 
     } 
     
     ~A () 
     {
          cout << "Class A Destructor" << endl; 
     }
}; 

class B: public A {
     
     private: 
     int j; 
     
     public: 
     
     // Derived class B constructor uses int a; int b is passed along to base class A's constructor   
     B (int a, int b) : A(b) 
     {    
          j = a; 
          cout << "Class B Constructor" << endl; 
     } 
     
     ~B () 
     {
          cout << "Class B Destructor" << endl; 
     }
     
     void display () {
          cout << "x = " << i << endl; 
          cout << "y = " << j << endl;  
     }
};



int main () { 

     B obj (4, 5);
     obj.display(); 
     
     return 0; 
} 

          
