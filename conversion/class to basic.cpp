//WAP to where user input hrs,min & sec and the output is displays in seconds.
#include<iostream>
using namespace std;
class Time
{
	int hrs,min,sec;
	public:
		Time(int hh,int mm,int ss)
		{
			hrs = hh;
			min = mm;
			sec = ss;
		}
		operator int() //casting operator
		{
			return hrs*3600+min*60+sec;
		}
	
};
int main()
{
	int h,m,s,result;
	cout<<"Enter the Time in hrs,min & sec: "<<endl;
	cin>>h>>m>>s;
	Time obj1(h,m,s);
	result=obj1;
	cout<<"The total second is "<<result;
	return 0;	
	
}
