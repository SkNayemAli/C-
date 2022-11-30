#include <iostream>
using namespace std;
#define n 10

class queue {
	int front;
	int rear;
    int arr[n];
public:
    queue(){
    rear=-1;
    front=-1;
    }
int isempty();
int isfull();
int insert(int item);
void display();
};

int queue :: isempty(){
	if(rear==rear)
	return 1;
	return 0;	
}

int queue :: isfull(){
	if(rear==n-1)
	return 1;
	return 0;	
}

int queue :: insert(int item){
	if(rear==n-1){
	cout<<"Stack overflow"<<endl;
	return 0;	
	}
	rear++;
	arr[rear]=item;
}

void queue :: display(){
	if(! isempty()){
		for(int i=front+1;i<=rear;i++)
		cout<<arr[i]<<" "<<endl;
	}
}

int main()
{
	class queue q;
	int item;
	int ch;
	while(1){
		
		cout<<"Click 1 for check isempty array"<<endl;
		cout<<"Click 2 for check isfull array"<<endl;
		cout<<"Click 3 for check insert array"<<endl;
		cout<<"Click 4 for check diplay array"<<endl;
		cout<<"Choose an option"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				if(q.isfull()==1)
				cout<<"Queue is full"<<endl;
			break;
			case 2:
				if(q.isempty()==1)
				cout<<"Queue is empty"<<endl;
			break;
			case 3:
				cout<<"Enter the item you want to insert: "<<endl;
				cin>>item;
				q.insert(item);
			break;
			case 4:
				cout<<"The present queue is->"<<endl;
				q.display();
			break;
			default:
				cout<<"ERROR!!"<<endl;
		}
	}
}


