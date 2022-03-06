#include<iostream>
using namespace std;

class number
{
	private:
		int a;
		int b;
		int sum1;
		public:
			void getdata(int x,int y)
			{
				a=x;
				b=y;
			}
			void sum()
			{
				sum1=a+b;
			}
			void display()
			{
				cout<<"The sum is "<<sum1;
			}
};
main()
{
	int c,d;
	number obj1;
	cout<<"Enter the value of a and b";
	cin>>c>>d;
	obj1.getdata(c,d);
	obj1.display();
	
}
