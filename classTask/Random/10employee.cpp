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
            getline(cin,name);
            fflush(stdin);
			cout<<"\n Enter Salary:";
            cin>>salary;
            fflush(stdin);
			
		}
		friend Employee compare(employee,employee){
			int i;
			Employee temp;
			for(i=0;i<=1;i++){
				if(obj[i].salary<obj[i+1].salary){
					temp=obj[i+1];
					obj[i+1]=obj[i];
					obj[i]=temp;

				}
			}
			return obj[0];
		}
		void display(){
			cout<<"The details of the student is:-"<<endl;
			cout<<"NAME:-"<<name<<endl;
			cout<<"ID:-"<<id<<endl;
			cout<<"Salary:-"<<salary<<endl;
			
		}
};
int main(){
	Employee obj[2];
	int a=0;
	int i=0;
	for(i=0;i<=1;i++){
		obj[i].getdata();
	}
	for(i=0;i<=1;i++){
		obj[0]=compare(obj[i],obj[i+1]);
	}
	obj[0].display();

return 0;
}