#include <iostream> 
using namespace std; 

class A {

     public: 
     int a;
     
     protected: 
     int b;
     
     private: 
     int c; 
     
}; 

class B: public A {

     public: 

};

int main () { 

     B obj;
     obj.a=10;
     // obj.b=20; 
     /* 
       As b is a protected member of the base class, it cannot be accessed 
       by an object of the derived class.  
             
     */ 
     cout << "Value of a=" << obj.a << endl; 
     // cout << "Value of b=" << obj.b << endl; 
     return 0;
     
} 


