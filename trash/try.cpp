#include<iostream>
using namespace std;
class X{
	public:
		int b=2;
	
	protected:
		int a;
	public:
		void sum(){
			int sum=a+b;
			cout<<"The sum is "<<sum;
		}

};
class Y : public X{
	public:
	int getData(int x){
		a=x;
	
		return a;
	}
	
};
int  main(){
	Y obj1;

	obj1.getData(3);
	obj1.sum();

	return 0;
}
