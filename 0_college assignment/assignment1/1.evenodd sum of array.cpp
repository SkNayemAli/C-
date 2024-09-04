#include<iostream>
using namespace std;

int main()
{
	int i,a[100],evensum=0,oddsum=0,size;
	cout<<"Enter the no. of size of the array: ";
	cin>>size;
	
	cout<<"Enter the no. of element: ";
	{
		for(i=0;i<size;i++)
		cin>>a[i];
		
		for(i=0;i<size;i++)
		{
			if(a[i]%2==0){
				evensum = evensum + a[i];
			}
			else{
				oddsum = oddsum + a[i];
			}
		}
	}
	
	cout<<"Sum of your even number of array is = "<<evensum<<endl;
	cout<<"Sum of your odd number of array is = "<<oddsum<<endl;
	return 0;
}
