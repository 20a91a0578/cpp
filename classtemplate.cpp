#include<iostream>
using namespace std;
template<class t1,class t2>
class add
{
	private:
		t1 s;
		t2 f;
	public:
		void get()
		{
			cin>>s;
			cin>>f;
		}
		void show()
		{
			cout<<"Addition of mixed data types variables:"<<endl;
			cout<<s+f;
		}
};
int main()
{
	add <int,float>a;
	cout<<"enter integer&float variable:";
	a.get();
	a.show();
	add <float,double>b;
	cout<<"enter float& double variables:";
	b.get();
	b.show();
	add <string,string>c;
	cout<<"enter strings variables:";
	c.get();
	c.show();
	
return 0;	
}
