/*Definition:-
A structure is a grouping of variables of various data types referenced by the same name.
In C++, a class is defined as a collection of related variables and functions contained within a single structure.
Basic:-
If no access specifier is specified in structure, all members are set to 'public'.
If no access specifier is defined in class, all members are set to 'private'.
Declaration	:-
                Structure
struct structure_name{
type struct_member 1;
type struct_member 2;
type struct_member 3;
.
type struct_memberN;
};
                Class
class class_name{
data member;
member function;
};
Instance:-
Structure instance is called the 'structure variable'.
A class instance is called 'object'.
Inheritance:-
Structure does not support inheritance.
Class supports inheritance.
Memory Allocation:-
Structure - Memory is allocated on the stack.
Object - Memory is allocated on the heap.
Nature:-
Structure - Value Type
Class - Reference Type
Purpose:-
Structure - Grouping of data	
Class - Data abstraction and further inheritance.
*/

#include<iostream>
using namespace std;

struct student {
    int age;
    string name;
    int marks;
    char section;
};

class college
{
    private:
    struct student a;
    public:
    void seta(int x,string n,int m,char s)
    {
        a.age=x;
        a.name=n;
        a.marks=m;
        a.section=s;
    }
    void display()
    {
        cout<<"Name = "<<a.name<<" "<<"Age = "<<a.age<<" "<<"Marks = "<<a.marks<<" "<<"Section = "<<a.section<<endl;
    }
};

int main()
{
    college obj;
    obj.seta(18,"Anil",85,'V');
    obj.display();
    return 0; 
}
