#include<iostream>

using namespace std;

class Demo
{
	public:
	static int abc;
};
int Demo::abc=10;

int main()
{
	Demo obj;
	obj.abc;
	cout<<"The value is: "<<obj.abc<<endl;
	return 0;
}