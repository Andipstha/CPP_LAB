//wap to use ascending number using templet
#include<iostream>
using namespace std;

class Number
{
template <typename T>
void sort(T getnum)	
	T i,j,temp;
	{
		
		for(i=1;i<=num;i++)
		{
			for(int j=i;j<=i;j++)
			{
				if(getnum[i]<getnum[j])
				{
					temp[i]=getnum[i];
					getnum[i]=getnum[j];
					getnum[j]=temp;
				}
			}
			
		}
		
	}
};
int main()
{
	int num;
	cout<<"Enter the value of n: "<<endl;
	cin>>num;
	cout<<"Enter the number"<<endl;
	for(i=1;i<=num;i++)
	{
		cin>>getnum[i];
	}
	sort<int>(getnum);
	return 0;
}
