#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> a={2,7,4,89,3,62,35,149};
    //v1-Insert elements into a int vector
    a.push_back(12);
    //v2-Iterate this vector using iterator and print it
    vector<int>::iterator i;
    cout<<"The vector is: ";
    
    for(i=a.begin();i!=a.end();i++)
    {
        cout<<*i<<" ";
    }
    //v3-Find size of a capacity and max size of a vector
    cout<<endl<<"Size of capacity : "<<a.capacity()<<endl;
    cout<<"Max size : "<<a.max_size()<<endl;
    //v4-Resize a vector
    a.resize(5);
    cout<<"The vector after resize of 5 is : ";
    for(i =a.begin();i!=a.end();i++)
    {
        cout<<*i<<" ";
    }
    //v5-Checks if the vector is empty or not
    if(a.empty())
        cout<<endl<<"The vector is empty."<<endl;
    else
        cout<<endl<<"The vector is not empty."<<endl;
    return 0;
}
