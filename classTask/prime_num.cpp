#include<iostream>
using namespace std;

class Prime{
	int a;
	public:
		int getData ()
		{
			cout<<"Enter the number u want ko check"<<endl;
			cin>>a;
			return a;

		}
		void over(int x){
			int i=0;
			int b=0,count=0;
			for(i=1;i<=x;i++){
				b=x%i;
				if(b==0){
					count ++;
				}
			}
			if (count == 2){
				cout<<"The number is prime number."<<endl;
			}
			else{
				cout<<"The number is not a prime number."<<endl;
			}
		}
};
int main(){
	Prime obj;
	obj.getData();
	obj.over();
	return 0;
}