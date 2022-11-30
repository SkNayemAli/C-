#include<iostream>
#include<iomanip>

using namespace std;

int main(){
//******************* Operator Precedence***********   Actually it's work for which calcualtion is start first.....
    int a =3, b=4;
    //int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87);
    cout<<"Now c = "<<c;
    return 0;
}

