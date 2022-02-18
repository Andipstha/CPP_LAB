#include<iostream>
using namespace std;

int prime(int n);
int main()
{
	int num;
	cout<<"Enter the positive integer to check: ";
	cin>>num;
	
//	prime();
	prime(num);
	return 0;
}

int prime(int n)
{
	int i,flag = 0;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			flag==1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<n<<" is not a prime number";
	}
	else
	{
		cout<<n<<" is a prime number";
	}
}
