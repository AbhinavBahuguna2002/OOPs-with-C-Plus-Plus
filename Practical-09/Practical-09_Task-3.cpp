#include <iostream>
using namespace std;

class Human
{
    public:
        static int count;
        Human()
        {
            count++;
        }
};
int Human::count=0;

int main()
{
    Human anil;
    Human a;
    Human l;
    Human m;
    
    cout<<"Count = "<<Human::count;

    return 0;
}
