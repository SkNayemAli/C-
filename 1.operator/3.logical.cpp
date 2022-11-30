#include<iostream>
using namespace std;       //if both condition are true then  output will be -> 1. otherwise-> 0.
int main()
{
int a=4,b=5;
cout<<"The value of this logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;    // &&->this is logocal and  
cout<<"The value of this logical or operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;     //||->this is logical or
cout<<"The value of this logical not operator (!(a==b)) is: "<<(!(a==b))<<endl;                //  ! -> this is logical not     

}
