//WAP to take 10 employees details and calculate the highest salary using class and object concept (Use firend function)
#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	public:
		char name[20];
		int id;
		int salary;
	public:
		void getdata()
		{
			cout<<"\n Enter Employee Details";
            cout<<"\n -------------------------------------------";
			cout<<"\n Enter Employee Id           :  ";
			cin>>id;
			cout<<"\n Enter Employee Name     :  ";
            cin>>name;
			cout<<"\n Enter Salary                     :  ";
            cin>>salary;
			
		}
		void display()
		{

		}
		
};
int main()
{
	
	int i=0;
	string name;
	Employee *emp;
	for(i=0;i<10;i++)
	{
		emp[i].getdata();
	}
	return 0;
}
