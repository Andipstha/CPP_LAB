//wap to use ascending number using templet
#include<iostream>
using namespace std;


template <typename T>
T sort(T num)	
{
	T getnum[30];
	T i=0,j=0,temp=0;
	{
		cout<<"Enter the number"<<endl;
		for(i=0;i<num;i++)
		{
			cin>>getnum[i];
		}
		for(i=0;i<=num;i++)
		{
			for(int j=i+1;j<=num;j++)
			{
			if(getnum[i]>getnum[j])
				{
					temp=getnum[i];
					getnum[i]=getnum[j];
					getnum[j]=temp;
				}
			}	
		}
		
	}
	for(i=0;i<num;i++)
	{
		cout<<getnum[i]<<" ";
	}
}
int main()
{
	int num,result;
	cout<<"Enter the value of n: "<<endl;
	cin>>num;

	result=sort<int>(num);
	return 0;
}
