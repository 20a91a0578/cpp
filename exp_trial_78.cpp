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
class b:public a
{
    protected:
		void showb()
		{
			
			cout<<"this is method of B"<<endl;
		}
};
class c:public a
{
	protected:
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
		showb();
		showc();
			cout<<"this is method of D"<<endl;
		}
};
int main()
{
	d D;
//D.show();
	D.showd();
	return 0;
}

