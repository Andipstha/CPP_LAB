/*#include<iostream>
using namespace std;
class z{
	int a,b;
	//int sum;
	public:
		int askValue(int a,int b)
		{
			cout<<"Enter any two number."<<endl;
			cin>>a>>b;
		}
};
int main(){
	int x,y;
	z obj1;
	obj1.askValue(x,y);
	cout<<"The number u enter is:-"<<x <<y;
	return 0;
}
*/
#include<iostream>
using namespace std;
class Add {
	public:
		int sum;
		int a;
		int b;
	public:
		void input(int x,int y){
			cout<<"Enter the numbers"<<endl;
			cin>>x>>y;
			a=x;
			b=y;
			sum=a+b;
		}
};
int main(){
	Add obj;
	obj.input(0,0);
	cout<<"The sum of the number is :-"<<obj.sum;
	return 0;
}
    
    
    
    
    
    
    
    
    
    
