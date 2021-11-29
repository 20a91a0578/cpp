//program to solve diamond problem
#include<iostream>
using namespace std;
class a
{
	public:
		void show()
		{
			cout<<"this is method of A "<<endl;
		}
};
class b:virtual  public a
{
     public:
		void showb()
		{
			cout<<"this is method of B"<<endl;
		}
};
class c:virtual public a
{
	public:
		void showc()
		{
			cout<<"this is method of C"<<endl;
		}
};
class d:public b,public c
{
	public:
		void showd()
		{
			cout<<"this is method of D"<<endl;
		}
};
int main()
{
	d D;
	D.show();
    D.showb();
	D.showc();
	D.showd();
	return 0;
}

