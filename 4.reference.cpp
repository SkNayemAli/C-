#include<iostream> 

using namespace std;

int main(){
 // *************Reference Variables**************** 
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
    float x = 455;
     float &y = x;
     cout<<"X="<<x<<"..."<<endl;
     cout<<"Y="<<y<<"..."<<endl;
     
     return 0;
}
