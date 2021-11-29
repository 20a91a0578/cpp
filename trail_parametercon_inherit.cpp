#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
	public:
		A(int m)
		{
			x=m;
			cout<<"the value of x = "<<x<<endl;
		}
};
class B:public A
{
	protected:
		int y;
	public:
		B(int n):A(98)
		{
			y=n;
			cout<<"the value of y = "<<y<<endl;
		}
};
class C:public B
{
	private:
		int Z;
	public:
		C(int n):B(48)
		{
			Z=n;
			cout<<"the value of y = "<<Z<<endl;
		}
};
int main()
{
	C n(9);
  return 0;
	
}
