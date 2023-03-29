#include<iostream>
using namespace std;

int main(){
     
     int i=5;
     //create a ref variable..

     int& j=i;
     
     cout<<"i="<<i<<endl;
     i++;
     cout<<"i="<<i<<endl;
     j++;
     cout<<"i="<<i<<endl;
}