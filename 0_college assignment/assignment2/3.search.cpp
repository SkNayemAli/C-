#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int arr[100],i,n,j,f,c=0;
	cout<<"Enter the size of array: "<<endl;
	cin>>n;
	
	cout<<"Enter the values of element:\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element which you want to found:\n";
	cin>>f;
	
	for(j=0;j<n;j++)
	{
		if (f==arr[j])
		{
		cout<<f<<" is founded in array\n";
		cout<<"The position of "<<f<<" is: "<<j;
		c++;
	}
	}
	if(c==0)
	cout<<f<<" is not founded in array\n";
	
	return 0;
}
