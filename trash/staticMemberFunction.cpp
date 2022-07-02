#include<iostream>

using namespace std;

class Demo
{
	private:
		static int abc;
	public:
		void static setValue()
		{
			cout<<"The value is: "<<abc<<endl;
		}
		
};
int Demo::abc=10;

int main()
{
	Demo obj;
	obj.setValue;
	
	return 0;
}