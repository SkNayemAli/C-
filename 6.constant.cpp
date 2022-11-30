#include<iostream>
#include<iomanip>

using namespace std;
    //*************Constants in C++********************
int main(){
	int  a = 34; //if here we put int const a = 4...then line no. 9 will be an error..
    cout<<"The value of a was: "<<a<<endl;
	a = 45; 
    cout<<"The value of a is: "<<a<<endl;
 	//const int a = 3;
    //cout<<"The value of a was: "<<a<<endl;
    a = 40; // You will get an error because a is a constant
    cout<<"The value of a is: "<<a<<endl;
    
    return 0;
}
