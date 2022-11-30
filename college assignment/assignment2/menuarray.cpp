#include <iostream>
#define len 100
using namespace std;

class Array {
    int arr[len];
    int size;
public:
    Array(int n) {
        size=n;
        cout<<"Enter the array elements = \n";
        for(int i=0;i<size;i++) {
            cin>>arr[i];  
        }
    }
    void change(int x, int k);
    void insert(int x, int k);
    int search(int x);
    void remove(int x);
    void display();
};

void Array::change(int x, int k) {
    if(k<1 || k>size) {
        cout<<"Position out of array"<<endl;
        return;
    }
    arr[k-1]=x;
    cout<<"Change successful"<<endl;
    return;
}

void Array::insert(int x, int k) {
    if (k<1 || k>size+1) {
        cout<<"Position out of array"<<endl;
        return;
    }
    
    else {
        for(int i=size;i>=k;i--) {
            arr[i]=arr[i-1];
        }
        arr[k-1]=x;
        size++;
        cout<<"Insertion successful"<<endl;
        return;
    }
}

int Array::search(int x ) {
    int i;
    for(i=0;i<size;i++) {
        if (arr[i]==x)
            break;
    }
    if (i==size)
        return -9999;
    else
        return i;
}

void Array::remove(int x) {
    int pos=search(x);
    if(pos==-9999) {
        cout<<"item not found"<<endl;
        return;
    }
    else {
        for(int i=pos;i<size-1;i++) {
            arr[i]=arr[i+1];
        }
        size--;
        cout<<"Removal successful"<<endl;
        return;
    }
}

void Array::display() {
    cout<<"Array elements = \t";
    for(int i=0;i<size;i++)
    cout<<arr[i]<<"   ";
    cout<<endl;
    return;
}

int main() {
    int n,ele,pos;
    char ch;
    cout<<"Enter the size of array = ";
    cin>>n;
    Array a1=Array(n);
    while(true) {
        cout<<"\nEnter your choice\n1. update an element\n2.insert and element\n3. search an element\n4. remove an element\n5. display all element\nany other key: to exit"<<endl;
        cin>>ch;
        switch(ch) {
            case '1':
                cout<<"Enter the element and position = \n";
                cin>>ele>>pos;
                a1.change(ele,pos);
                break;
            case '2':
                cout<<"Enter the element and position = \n";
                cin>>ele>>pos;
                a1.insert(ele,pos);
                break;
            case '3':
                cout<<"Enter the element = ";
                cin>>ele;
                if(a1.search(ele)==-9999)
                    cout<<"Item not found";
                else
                    cout<<"Seach successful";
                break;
            case '4':
                cout<<"Enter the element = ";
                cin>>ele;
                a1.remove(ele);
                break;
            case '5':
                a1.display();
                break;
            default:
                return 0;
        }
    }
}

