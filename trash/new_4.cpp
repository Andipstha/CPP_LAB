#include<iostream>
using namespace std;

class Num
{
	public:
		int firstNum;
		int secondNum;
};

main()
{
	Num obj1;
	obj1.firstNum = 10;
	obj1.secondNum = 11;
	
//	cin>>"Enter firstNum: ">>firstNum;
//	cin>>"Enter secondNum: ">>secondNum;
	cout<<"First number is "<<obj1.firstNum<<endl; 
	cout<<"Second number is "<<obj1.secondNum<<endl;
	return 0;
}
