#include<iostream>
#include<stdlib.h>
using namespace std;
int arr[100];
int n;


void readArray(){
	cout<<"Enter the number of elements: ";
	cin>>n;
	cout<<"Enter elements: ";
	for(int i=0;i<n;i++)
	cin>>arr[i];
}

void showArray(){
	cout<<"\n....Array elements....\n";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	
	cout<<endl;
}

void updateArray(int pos,int ele){
	if(pos-1<0 || pos-1>n-1){
		cout<<"ERROR!!! Out of range!!"<<endl;
		return ;
	}
	arr[pos-1]=ele;
}

int main(){
	readArray();
	
	while(1){
		cout<<"1:INSERT"<<endl;
		cout<<"2:DISPLAY"<<endl;
		cout<<"3:UPDATE"<<endl;
		int ch;
		cout<<"Enter your choice: ";
		cin>>ch;
		switch(ch){
			case 1:
				break;
			case 2: showArray();
				break;
			case 3: int pos,ele;
				cout<<"Enter position: ";
				cin>>pos;
				cout<<"Enter element: ";
				cin>>ele;
				updateArray(pos,ele);
					break;
			default: exit(1);
		}
		
	}
	
	return 0;
}
