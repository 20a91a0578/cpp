#include<iostream>
using namespace std;
class sample
{
	private:
		int x;
	public:
		sample()
		{
			cout<<"enter x:";
			cin>>x;
		}
		void show()
		{
			cout<<"x = "<<x<<endl;
		}
		friend void operator++(sample &s);
};
void operator++(sample &s)
{
	s.x=++s.x;
}
int main()
{
	sample s;
	s.show();
	cout<<"after operator overloading"<<endl;
	++s;
	s.show();
	return 0;
}
