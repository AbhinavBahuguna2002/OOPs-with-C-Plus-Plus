#include<iostream>
#include<ctime>
using namespace std;
int main()
{
int n;
time_t ttime = time(0);
char* dt = ctime(&ttime);

tm *gmt_time = gmtime(&ttime);
dt = asctime(gmt_time);

tm *local_time = localtime(&ttime);

cout<<"Enter a number : ";
cin>>n;
switch(n)
{
case 1: cout << "The current local date and time is : " << dt << endl;
		break;
case 2: cout << "Year: "<< 1900 + local_time->tm_year << endl;
		break;
case 3: cout << "Month: "<< 1 + local_time->tm_mon<< endl;
		break;
case 4: cout << "Day: "<< local_time->tm_mday << endl;
		break;
case 5: cout << "Time: "<< 1 + local_time->tm_hour << ":";
                 cout << 1 + local_time->tm_min << ":";
                 cout << 1 + local_time->tm_sec << endl;
                 break;
		
default : cout<<"Not Applicable"<<endl;
}
}
