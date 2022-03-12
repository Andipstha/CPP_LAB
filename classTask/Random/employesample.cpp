#include<iostream>
using namespace std;
class employe
{
	int id;
	int salary;
	string name;
	public:
		void input(string name3,int id3,int salary3)
		{
			name=name3;
			id=id3;
			salary=salary3;
		}
		void details()
		{
			cout<<"The details of highest salary person is:"<<endl;
			cout<<"Name = "<<name<<endl;
			cout<<"id = "<<id<<endl;
			cout<<"salary = "<<salary<<endl;
		}
		friend employe output(employe obj3[],int x)
		{
			employe obj4;
			int j=0,k=0;
			for(j=0;j<x;j++)
			{
				for(k=j+1;k<x;k++)
				{
					if(obj3[j].salary>obj3[k].salary)
					{
						obj4=obj3[j];
						obj3[j]=obj3[k];
						obj3[k]=obj4;
					}
				}
			}
		return obj4;
		}
};
int main()
{
	int i=0,y;
	string name2;
	int id2,salary2;
	cout<<"Enter how many details you want:  ";
	cin>>y;
	fflush(stdin);
	employe obj[y];
	employe obj2;
	cout<<"Enter the details: "<<endl;
	for(i=0;i<y;i++)
	{
		cout<<"Enter the name: ";
		getline(cin,name2);
		fflush(stdin);
		cout<<"Enter the id: ";
		cin>>id2;
		fflush(stdin);
		cout<<"Enter the salary: ";
		cin>>salary2;
		fflush(stdin);
		obj[i].input(name2,id2,salary2);
	}
	obj2=output(obj,y);
	obj2.details();

}