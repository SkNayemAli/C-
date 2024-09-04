#include<iostream>
#include<stdlib.h>
using namespace std;
int arr[100];
int n;


void readArray(){
	cout<<"Enter the number of elements: ";
	cin>>n;
	cout<<"\nEnter elements...\n";
	for(int i=0;i<n;i++)
	cin>>arr[i];
}

void showArray(){
	cout<<"....Array elements are....\n";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	
	cout<<endl;
}

void insertArray(int pos,int ele){
	n++;
	for(int i=n;i>=pos-1;i--)
	arr[i]=arr[i-1];
	arr[pos-1]=ele;
}

int main(){
	readArray();
	
	while(1){
		cout<<"1:INSERT"<<endl;
		cout<<"2:DISPLAY"<<endl;
		int ch;
		cout<<"Enter your choice: ";
		cin>>ch;
		switch(ch){
			case 1:  int pos,ele;
				cout<<"Enter position: ";
				cin>>pos;
				cout<<"Enter element: ";
				cin>>ele;
				insertArray(pos,ele);
				break;
			case 2: showArray();
				break;
			
			default: exit(1);
		}
		
	}
	
	return 0;
}
