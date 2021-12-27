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
     
     void display () 
     { 
           a=10;
           b=20;
        // c=30; 
        // c is private 
         
          cout << "Value of a=" << a << endl; 
          cout << "Value of b=" << b << endl; 
       // cout << "Value of c=" << c << endl; 
       // c is private 
     } 
};

int main () { 

     B obj;
     obj.display (); 
     
     return 0;
     
} 
