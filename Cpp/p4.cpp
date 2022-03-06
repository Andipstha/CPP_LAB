//by using constructor and passing two parameter
#include<iostream>
using namespace std;

class number
{
	public:
		int a;
		int b;
		int sum1;
		number(int x,int y)
		{
			a=x;
			b=y;
		}
		void sum()
		{
			sum1=a+b;
		}
};
main()
{
	number obj1(50,33);
	obj1.sum();
	cout<<"The sum is "<<obj1.sum1;
	
}
