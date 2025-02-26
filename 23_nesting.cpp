// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions
#include <iostream>
#include <string>
using namespace std;
int n=1;
class binary
{
private:
    string s;

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
    void chk_bin(void);
};

void binary::read(void)
{
    cout <<endl<< "Enter a binary number: " << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<endl<<"Incorrect binary format!!" << endl;
            cout<<endl;
            exit(0);
        }
    }
}

void binary::ones_compliment(void)
{
	cout<<endl<<"After ones_complement: ";
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
       else
        {
            s.at(i) = '0';
        }
    }
    cout<<endl;
}

void binary::display(void)
{
	if(n)
    cout<<endl<<"Displaying your binary number: "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
    n=0;
}

int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}

