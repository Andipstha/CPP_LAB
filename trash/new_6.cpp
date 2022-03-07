#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
        public: 
                int eno;
                char ename[100];
                float salary;
        public:
                void accept_details()
                {
                        cout<<"\n Enter Employee Details";
                        cout<<"\n -------------------------------------------";
                        cout<<"\n Enter Employee Id           :  ";
                        cin>>eno;
                        cout<<"\n Enter Employee Name     :  ";
                        cin>>ename;
                        cout<<"\n Enter Salary                     :  ";
                        cin>>salary;
                }
                int search(int empno);       //Function Overloading
                int search(char *empname); //search() function is overloaded
                int search(float empsalary);
};
int Employee :: search(int empno)
{
        if(eno==empno)
        {
                cout<<"\n Displaying Information \n";
                cout<<"\n Employee Name       :   "<<ename;
                cout<<"\n Salary                       :   "<<salary<<endl;
        }
        return 0;
}
int Employee :: search(char *empname)
{
        if(strcmp(ename,empname)==0)
        {
                cout<<"\n Displaying Information \n";
                cout<<"\n Employee Id         :   "<<eno;
                cout<<"\n Salary                   :   "<<salary;
        }
        return 0;
}
int Employee :: search(float empsalary)
{
        if(salary==empsalary)
        {
                cout<<"\n Displaying Information \n";
                cout<<"\n Employee Id             :   "<<eno;
                cout<<"\n Employee Name       :   "<<ename;
        }
        return 0;
}
int main()
{
        Employee *emp;
        int cnt, i, max;
        char name[100];
        int eno;
        float sal;
        cout<<"\n Enter No. of Employee Details You Want  :  ";
        cin>>cnt;
        emp=new Employee[cnt];
        for(i=0;i<cnt;i++)
        {
                emp[i].accept_details();
        }
        cout<<"\n -------------------------------------------";
        cout<<"\n\n Search Employee by Id         :   ";
        cin>>eno;
        for(i=0;i<cnt;i++)
        {
                emp[i].search(eno);
        }
        cout<<"\n -------------------------------------------";
        cout<<"\n\n Search Employee by Name       :   ";
        cin>>name;
        for(i=0;i<cnt;i++)
        {
                emp[i].search(name);
        }
        cout<<"\n -------------------------------------------";
        cout<<"\n\n Search Employee by Salary     :   ";
        cin>>sal; 
        for(i=0;i<cnt;i++)
        {        emp[i].search(sal);
        }
        max=emp[0].salary;
        for(i=0;i<cnt;i++)
        {
                if(emp[i].salary>max)
                {
                        max=emp[i].salary;
                }
        }
        for(i=0;i<cnt;i++)
        {
                if(emp[i].salary==max)
                {
                        cout<<"\n ------------------------------------------------\n";
                        cout<<"\n Maximum Salary of Employee Name is : "<<emp[i].ename;
                        cout<<"\n And Salary is : "<<emp[i].salary;
                }

        }
        return 0;
}