//Demo inheritance
#include<iostream>
using namespace std;
class X
{
	private:
		int p;
	protected:
		int m;
	public:
		void setvalue(int z)
		{
			p=z;
		}
		void output()
		{
			cout<<"Value of p is: "<<p;
		}
};
class Y:public X
{
	private:
		int o;
	public:
		void setvalue(int w)
		{
			m=w;
		}
};
int main()
{
	X obj1;
	obj1.setvalue(100010);
	obj1.output();
	
}
