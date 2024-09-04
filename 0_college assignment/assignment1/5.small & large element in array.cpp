#include<iostream>
using namespace std;

int small(int x[],int n)
{
	int i,j;
	int small = x[0];
	for(i=0;i<n;i++)
	{
		if(x[i]<small)
		{
			small=x[i];
		}
	}
	return small;
}

int large(int x[],int n)
{
	int i,j;
	int large = x[0];
	for(i=0;i<n;i++)
	{
		if(x[i]>large)
		{
			large=x[i];
		}
	}
	return large;
}

int main()
{
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"The smallest element of this array is = "<<small(arr,n)<<endl;
	cout<<"The largest element of array this  is = "<<large(arr,n)<<endl;
	
	return 0;
}
