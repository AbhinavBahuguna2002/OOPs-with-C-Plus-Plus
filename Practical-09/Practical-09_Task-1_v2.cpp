#include <iostream>

using namespace std;
class student
{
    private:
    string name;
    int age;
    int year;
    char section;
    int marks;
    public:
    void getdata(string n,int x,int y,char z,int a)
    {
        name=n;
        age=x;
        year=y;
        section=z;
        marks=a;
    }
    void display()
    {
        cout<<"Name = "<<name<<" "<<"Age = "<<age<<" "<<"Year = "<<year<<" "<<"Section = "<<section<<" "<<"Marks = "<<marks<<endl;
    }
    
};


int main()
{
    int a,b,e;
    char c;
    string d;
    int n;
    cout<<"Enter how many Students details you want to enter = ";
    cin>>n;
    student obj[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Name = ";
        cin>>d;
        cout<<"Enter Age = ";
        cin>>a;
        cout<<"Enter Section = ";
        cin>>c;
        cout<<"Enter Marks = ";
        cin>>b;
        cout<<"Enter Year = ";
        cin>>e;
        sum+=b;
        obj[i].getdata(d,a,e,c,b);
    }
    for(int i=0;i<n;i++)
        obj[i].display();
    cout<<"Total marks of students inc college = "<<sum<<endl;
    return 0;
}
