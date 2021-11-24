#include <iostream>
using namespace std;

class area
{
    public:
    void areafind(int s)
    {
        cout<<"Area of square = "<<s*s<<endl;
    }
    void areafind(int l,int b)
    {
        cout<<"Area of rectangle = "<<l*b<<endl;
    }
};

int main()
{
    area obj1;
    obj1.areafind(25);
    obj1.areafind(10,20);

    return 0;
}
