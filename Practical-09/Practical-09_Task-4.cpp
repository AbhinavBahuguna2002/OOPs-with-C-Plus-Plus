#include <iostream>
using namespace std;

int total_marks;

class abc
{
 
private:
  int  age,marks;
  string name;
  //int total_marks;
 
public:
 void  setvalue()
 {
    while( getchar() != '\n' );
    cout<<"Enter Name ";
    getline(cin,name);
    
    cout<<"Enter Age ";
    cin>>age;
    
    cout<<"Enter Marks ";
    cin>>marks;
 }
 
 friend void sum_of_all_marks(abc);


};

//int abc::total_marks = 0; 

void sum_of_all_marks(abc obj)
{
    //static int total_marks=0;
    total_marks+=obj.marks;
}

int main()
{
    int n;
    cout<<"ENTER THE NUMBER OF STUDENTS : ";
    cin>>n;
    abc s[n];
    
    for(int i=0;i<n;i++)
    {
      s[i].setvalue();
    }
    
    for(int i=0;i<n;i++)
    {
      sum_of_all_marks(s[i]);
    }
    
    cout<<"\nTOTAL NUMBER OF MARKS "<<total_marks;
    
return 0;
}


