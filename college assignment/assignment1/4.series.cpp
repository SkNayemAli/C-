#include<iostream>
using namespace std;

int main()
{
	int n,sum=0,i,j;
	cout<<"Enter the value of n: ";
	cin>>n;
	
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			sum = sum+j;
		}
	}
	cout<<"The total value of sum is = "<<sum;
	return 0;
}
