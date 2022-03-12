//WAP to take 10 employees details and calculate the highest salary using class and object concept (Use firend function)
#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	public:
		string name;
		int id;
		int salary;
	public:
		void getdata()
		{
			cout<<"\n Enter Employee Details";
            cout<<"\n -------------------------------------------";
			cout<<"\n Enter Employee Id:";
			cin>>id;
            fflush(stdin);
			cout<<"\n Enter Employee Name:";
            getline(cin,name;)
            fflush(stdin);
			cout<<"\n Enter Salary:";
            cin>>salary;
            fflush(stdin);
			
		}
		Employee compare(employee,enployee){
			int i; 
			for(i=0;i<=1;i++){
				if(obj[i].salary<obj[i+1].salary){
					x=obj[i+1];
					obj[i+1]=obj[i];
					obj[i]=x;

				}
			}
			return obj[0];
		}
		void display(){
			cout<<"The details of the student is:-";
			cout<<"NAME:-"<<name;
			cout<<"ID:-"<<id;
			cout<<"Salary:-"<<salary;
			
		}
};
int main(){
	Employee obj[2];
	Employee x;
	int a=0;
	int i=0;
	for(i=0;i<=1;i++){
		obj[i].getdata();
	}
for(i=0;i<=1;i++){
	obj[i].compare(obj[i],obj[i+1]);
}
obj[0].display();

return 0;
}