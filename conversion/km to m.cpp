//WAP to convert distance into km into m where user gives the m
#include<iostream>
using namespace std;
class Distance
{
	int km,m;
	public:
		Distance(int kk,int mm)
		{
			km = kk;
			m = mm;
		}
		operator int() //casting operator
		{
			return km*1000+m;
		}
	
};
int main()
{
	int kmi,mi,result;
	cout<<"Enter the Distance in km and meter: "<<endl;
	cin>>kmi>>mi;
	Distance obj1(kmi,mi);
	result=obj1;
	cout<<"The total Distance is "<<result<<" m";
	return 0;	
	
}
