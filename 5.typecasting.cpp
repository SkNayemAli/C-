#include<iostream> 

using namespace std;

int main()
{
	// *************Typecasting**************** 
    int a = 45.5;  
    float b = 45.46;
    cout<<"The value of a is "<<(int)a<<endl;
    cout<<"The value of a is "<<int (a)<<endl;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;
    
    cout<<"\nThe value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
	cout<<"The value of b is "<<(float)b<<endl;
	cout<<"The value of a is "<<float(b)<<endl;
   
    int c = int(b);
    int d = float(b);
    
	cout<<"\nThe value of c is "<<c<<endl;
	cout<<"The value of c is "<<c<<endl;
	cout<<"The value of d is "<<d<<endl;
    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + float(b)<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;


    return 0;
}

