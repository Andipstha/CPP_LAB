#include<iostream>
using namespace std;
class X{
	int  hh, mm, ss;
	public:
	X(int);
	void conversion();
};
X::X(int t){
	hh = t/3600;
	 mm = (t- hh*3600)/60;
	 ss = t - hh*3600 - mm*60;
}
void X::conversion(){
	cout<<hh<<"hrs:"<<mm<<"minutes:"<<ss<<"sec"<<endl;

	 
}
int main(){
	int sec;
	cout<<"Enter second u want to covert"<<endl;
	cin>>sec;
	X obj1=sec;
	obj1.conversion();
return 0;


}

