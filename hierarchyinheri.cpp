#include<iostream>
using namespace std;
class number
{
	private:
		int num;
	public:
		void getnumber(void)
		{
			cout<<"enter an number:";
			cin>>num;
		}
		int returnnumber(void)
		{
			return num;
		}
};
class square:public number
{
	public:
		int getsqr(void)
		{
			int num,sqr;
			num=returnnumber();
			sqr=num*num;
			return sqr;
		}
};
class cube:public number
{
	public:
		int getcube(void)
		{
			int num,cube;
			num=returnnumber();
			cube=num*num*num;
			return cube;
		}
};
int main()
{
	square obs;
	cube obc;
	int sqr,cube;
	obs.getnumber();
	sqr=obs.getsqr();
	cout<<"square of "<< obs.returnnumber()<<" is "<<sqr<<endl;
	obc.getnumber();
	cube=obc.getcube();
	cout<<"cube of "<<obc.returnnumber()<<" is "<<cube<<endl;
	return 0;
	
}
