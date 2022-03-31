#include<iostream>
using namespace std;
class Time
{
	int hrs,min,sec;
	public:
		Time(int);
		void display();	
};
Time::Time(int t)
{
	hrs = t/3600;
	min = (t-(hrs*3600))/60;
	sec = t%60;
}
void Time::display()
{
	cout<<hrs<<" hours "<<min<<" min "<<sec<<" sec "<<endl;
}
int main()
{
	int s;
	cout<<"Enter the time in second"<<endl;
	cin>>s;
	Time obj1=s;
	obj1.display();
}
