#include<iostream>
using namespace std;
class CIRCLE
{
public:
	int r;
	virtual void area()
	{
		cout<<"enter radius:";
		cin>>r;
		cout<<"area of circle = "<<3.14*r*r<<endl;
	}
};
class RECTANGLE:public CIRCLE
{
public:
int l,b;	
void area()
{
	cout<<"enter length and breadth";
	cin>>l>>b;
	cout<<"area of rectangle = "<<l*b<<endl;
	}	
};
class square:public CIRCLE
{
public:
int s;
void area()
{
	cout<<"enter length:";
	cin>>s;
	cout<<"area of square = "<<s*s<<endl;
	}	
};
int main()
{
	CIRCLE a,*aptr;
	RECTANGLE b;
	square d;
	aptr=&a;
	cout<<"FOR CIRCLE AREA:"<<endl;
	aptr->area();
	aptr=&b;
		cout<<"FOR RECTANGLE AREA:"<<endl;
    aptr->area();
    aptr=&d;
    	cout<<"FOR SQUARE AREA:"<<endl;
    aptr->area();
    return 0;
}
