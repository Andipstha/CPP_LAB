#include<iostream>
using namespace std;
class S
{
	public:
		int a,b,sum;
	public:
		S(int x, int y)
			{
	
				a=x;
				b=y;
				sum=a+b;
				cout <<"The sum is "<<sum;
			
			}
};

int main(){
	S obj(3,4);
	return 0;
}
