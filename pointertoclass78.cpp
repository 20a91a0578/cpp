#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void show()
		{
			cout<<"show() of class A"<<endl;
		}
};
class Derived:public Base
{
public:
void show()
{
	cout<<"show() of class B"<<endl;
	}	
};
int main()
{
	Base a,*aptr;
	Derived b;
	aptr=&a;
	aptr->show();
	aptr=&b;
    aptr->show();
    return 0;
}
