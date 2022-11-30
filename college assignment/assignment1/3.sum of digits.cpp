#include<iostream>
using namespace std;
int main()
{
	int x,n,sum=0;
	cout<<"Enter the  value of n: ";
	cin>>n;
	
	while(n>0)
	{
		x=n%10;
		n=n/10;
		sum = x+sum;
	}
	cout<<"The total number of sum is = "<<sum<<endl;
	return 0;
}
