#include <iostream>
#include<string>
using namespace std;

class student
{
    private:
    int roll,phone;
    string name;
    public:
    void seta(int x,int y,string n)
    {
        roll=x;
        phone=y;
        name=n;
    }
    void display()
    {
        cout<<"Name = "<<name<<" "<<"Roll Number = "<<roll<<" "<<"Phone Number = "<<phone<<endl;
    }
};

int main()
{
    student s,j;
    s.seta(18,6352,"Sam");
    j.seta(28,8552,"John");
    s.display();
    j.display();
    
    return 0;
}
