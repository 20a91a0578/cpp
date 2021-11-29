//program to solve diamond problem
#include<iostream>
using namespace std;
class a
{
	protected:
		void show()
		{
			cout<<"this is method of A "<<endl;
		}
};
class b:virtual  public a
{
     protected:
		void showb()
		{
			show();
			cout<<"this is method of B"<<endl;
		}
};
class c:virtual public a
{
	public:
		void showc()
		{
			show();
			cout<<"this is method of C"<<endl;
		}
};
class d:public b,public c
{
	public:
		void showd()
		{showb();
		showc();
			cout<<"this is method of D"<<endl;
		}
};
int main()
{
	d D;
	D.showd();
	return 0;
}

