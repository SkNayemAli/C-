#include<iostream>
using namespace std;

int odd(int x[],int n){
	int i,j,sumodd=0;
	for(i=0;i<n;i++){
		if(x[i]%2!=0){
			sumodd = sumodd + x[i];	
				}
	}

return sumodd;
}

int even(int x[],int n){
	int i,j,sumeven=0;
	for(i=0;i<n;i++){
		if(x[i]%2==0){
			sumeven = sumeven + x[i];	
				}
	}

return sumeven;
}

int main()
{
	int n;
	cout<<"Enter the no. of size of the array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sumeven = even(arr,n);
	int sumodd = odd(arr,n);
	cout<<"The sum of even numers is = "<<sumeven<<endl;
	cout<<"The sum of odd numers is = "<<sumodd<<endl;
	
	return 0;
	
}

