#include<iostream>
using namespace std;

class student
{
 private:
        int a1, b1, c1;
    public:
        int d1, e1;
        void setData(int a, int b, int c); // Declaration
        void getData(){
            cout<<"The value of a1 is "<<a1<<endl;
            cout<<"The value of b1 is "<<b1<<endl;
            cout<<"The value of c1 is "<<c1<<endl;
           	cout<<"The value of d1 is "<<d1<<endl;
        	cout<<"The value of e1 is "<<e1<<endl;
        }	
};

void student::setData(int a, int b, int c)
	{
		a1=a;
		b1=b;
		c1=c;
	}
	
int main()
{
	student nayem;
	
	nayem.d1=90;
	nayem.e1=99;
	nayem.setData(2,4,6);
	nayem.getData();
	return 0;
}

