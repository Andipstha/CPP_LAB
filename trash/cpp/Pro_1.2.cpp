#include<iostream>
using namespace std;
class X
{
	private:
		int a;
	public:
		int getData(int x)
		{
			a=x;
			return x;
		}
	
};
int main()
{
	int y;
	X obj1;
	
	y=obj1.getData(2);
	cout<<"the number is "<<y;
	
}
