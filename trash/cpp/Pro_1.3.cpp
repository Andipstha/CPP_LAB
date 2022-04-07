#include<iostream>
using namespace std;
class Task
{
	int firstNo;
	public:
		int getData(int x_No)
		{
			firstNo=x_No;
			return firstNo;
		}
};
int main()
{
	int y_No;
	Task obj1;
	y_No=obj1.getData(10);
	cout<<"The number is "<<y_No;
}
