//8.1)develop a c++ program to illustrate objectas an class memeber
//8.2)develop a c++ program to illustrate pointer to a  class
//8.3) develop  a c++ program to illustrate virtual base class
#include<iostream>
using namespace std;
class DOB
{
	private:
		int dd,mm,yy;
	public:
		void gets()
		{
			cout<<"enter date-month-year :";
			cin>>dd>>mm>>yy;
			
		}
		void show()
		{
			cout<<"date of birth :"<<dd<<"-"<<mm<<"-"<<yy<<endl;
		}
};
class student
{
	private:
		int pin;
		string name;
		DOB d;
	public:
		void get()
		{
			cout<<"enter name and pinno :";
			cin>>name>>pin;
			d.gets();
		}
		void display()
		{
			cout<<"name :"<<name<<endl<<"pinno :"<<pin<<endl;
			d.show();
		}
};
int main()
{
	student s;
	s.get();
	s.display();
	return 0;
}

