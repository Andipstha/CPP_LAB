#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

class student

{
   public:
   int roll;
   char name[15],f_name[20];
   void put();
   void get();
   void switch_case();
  }; student s;

 void student::put()
  {
   
   fstream file;
   cout<<"Enter roll no:  ";
   cin>>roll;
   fflush(stdin);
   cout<<"Enter name: ";
   gets(name);
   fflush(stdin);
   cout<<"Enter father name: ";
   gets(f_name);
   fflush(stdin);
   file.open("stu.dat",ios::out|ios::app);
//  file.seekp(0,ios::beg);
   file.write((char *)this,sizeof(student));
   file.close();

   s.switch_case();
  }

  void student::get()
  {
   int temp;
   
   cout<"Enter roll no: ";
   cin>>temp;
   fstream file;
   file.open("stu.dat",ios::in);
   file.seekg(0,ios::beg);
   while(file.read((char *)this,sizeof(student)));
    {
    if(roll==temp)
    {
    cout<<"roll no. "<<roll<<endl;
    cout<<"stu name:  "<<name<<endl;
    cout<<"father name: "<<f_name;
   }
   }
    file.close();

    s.switch_case();
   }

  void student::switch_case()
   {
    int i;
    cout<<"Enter your choice (1-Read, 2-Write, 3-exit): ";
    cin>>i;
    switch(i)
    {
    case 1:
	  s.put();
	  break;

    case 2:
	  s.get();
	  break;

    case 3:
	  exit(0);

    default:
	  cout<<"wrong choice ";
    }
    }

  int main()
    {
     
     s.switch_case();
     return 0;
    }
