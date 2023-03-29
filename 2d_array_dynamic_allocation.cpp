#include<iostream>
using namespace std;

int main(){

    int row;
    cout<<"Enter the size of row: "<<endl;
    cin>>row;


     int col;
    cout<<"Enter the size of col: "<<endl;
    cin>>col;


    //creating a 2D array..
    int** arr = new int*[row];
    for(int i = 0; i < row; i++){
        arr[i]=new int[col];
    }

    //taking input..
    cout<<"Enter the elements: "<<endl;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    //taking output..
    cout<<"The matrix is: "<<endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
     }

 return 0;   
}