//Wap to take the input of the 10 employee
#include<iostream>
using namespace std;
class x{
	
	int b;
	public:
			int input(int b){
				string name;
				int salary;
				cout<<"Enter the name of the employeee"<<endl;
				getline(cin,name);
				fflush(stdin);
				cout<<"Enter the salary"<<endl;
				cin>>salary;
				fflush(stdin);
				return 0;
			}
};
int main(){
	int i=0;
	for(i=0;i<=5;i++){
		string name;
				int salary;
				cout<<"Enter the name of the employeee"<<endl;
				getline(cin,name);
				fflush(stdin);
				cout<<"Enter the salary"<<endl;
				cin>>salary;
				fflush(stdin);
	}
 
return 0;
}
