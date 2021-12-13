#include<iostream>
using namespace std;
class date
{
	public:
		void show(int dd,int mm,int yy)
		{
			cout<<"current date:";
			cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
		}
		void show(int dd,string mm,int yy)
		{
			cout<<"current date:";
			cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
		}
};
int main()
{
	date s;
	s.show(27,02,2002);
	s.show(27,"feb",2002);
	return 0;
}
