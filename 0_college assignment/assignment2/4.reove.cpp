#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int arr[100],size,i,ele,j,f=0;
	cout<<"Enter the size of array: "<<endl;
	cin>>size;
	
	cout<<"Enter the values of element:\n";             
	for(i=0;i<size;i++)
		cin>>arr[i];
		
	cout<<"Enter the element which you want to remove:\n";
	cin>>ele;
	for(i=0;i<size;i++)
	{
		if(arr[i]==ele)
		{
			for(j=i;j<(size-1);j++)
			arr[j]==arr[j+1];
			f=1;
			i--;
			size--;
		}
	}
	if(f==0)
		cout<<ele<<" this element is not founded in your array!!!"<<endl;	
		else
		{
			cout<<ele<<" this element is removed successfully!!!"<<endl;
			cout<<"Now the new array is: "<<endl;
			for(i=0;i<size;i++)
				cout<<arr[i]<<" ";
		}
		cout<<endl;
	return 0;
}
