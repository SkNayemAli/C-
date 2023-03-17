#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the no of size: "<<endl;
    cin>>n;

    int i=1; //i is row
    while(i<=n){
        int j=1;  //j is column
        while (j<=i)
        {
            cout<<"*";
            j = j+1;
        }
        cout<<endl;

        i = i+1;
        
    }
}