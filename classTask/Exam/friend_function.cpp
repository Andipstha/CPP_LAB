//WAP to find the largest number of two class using friend function
#include<iostream>
using namespace std;
class X
{
	private:
		int x;
	public:
		void input()
		{
			cout<<"Enter the value of x : ";
			cin>>x;	
		}	
		friend void find(X );
		
};
class Y
{
	private:
		int y;
	public:
		void input()
		{
			cout<<"Enter the value of y ";
			cin>>y;	
		}
};

