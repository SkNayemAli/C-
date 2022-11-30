 #include<iostream> 

using namespace std;

int main(){
 // ************* Float-> 4 bytes, double->8 bytes and long double-> 16 bytes Literals****************
     float d=34.4F;
     double e = 34.4L; 
     cout<<"The size of 34.4 is: "<<sizeof(34.4)<<endl;
     cout<<"The size of 34.4f(float) is: "<<sizeof(34.4f)<<endl;
     cout<<"The size of 34.4F(float) is: "<<sizeof(34.4F)<<endl;
     cout<<"The size of 34.4l(double) is: "<<sizeof(34.4)<<endl;
     cout<<"The size of 34.4l(long double) is: "<<sizeof(34.4l)<<endl;
     cout<<"The size of 34.4L(long double) is: "<<sizeof(34.4L)<<endl;
     cout<<"The value of d is: "<<d<<endl;
	 cout<<"The value of e is "<<e<<endl;  
     
     return 0;
}
