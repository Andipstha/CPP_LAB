//wap to sort n number in ascending using function template
#include<iostream>
using namespace std;

template <typename T>
T sort(T num)
{
 	T a[30];
 	T i=0,j=0,temp=0;
 	for(i=0;i<num;i++)
 	{
 		cin>>a[i];
	}
 	 for(i=0;i<=num;i++)
 	   {
 	   	for(j=i+1;j<=num;j++)
 	   	{
 	   	   	if(a[i]>a[j])
 	   	   	{
 	   	   	    temp=a[i];
 	   	   	   	a[i]=a[j];
 	   	   	    a[j]=temp;
			}			  	       
		}
	}
	cout<<"Ascending order of given input is :";
	for(i=0;i<num;i++)
	{
		cout<<a[i]<<endl;		
	}		
 }
 int main()
 {
    int n,result;
    cout<<"Enter how many number you wanna sort"<<endl;
    cin>>n;
    
    result=sort<int>(n);
 	
 	return 0;
 }
