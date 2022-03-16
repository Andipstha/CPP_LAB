//WAP to find the largest number of two class using friend function
#include<iostream>
using namespace std;
class Y;
class X
{
	
	friend class Y;
	public:
		int a;
		void getData(){
			cout<<"enter the number."<<endl;
			cin>>a;
		}
};
class Y{
	public:
	int y;
	void getData(){
		cout<<"Enter the number"<<endl;
		cin>>y;
	}
	friend void compare(X obj2,Y obj3);
};
	void compare(X,Y){
		if(){

		}
		
	}
int main(){
	X obj;
	Y obj1;
	obj.getData();
	obj1.getData();
	compare(obj.a,obj1.y);

}