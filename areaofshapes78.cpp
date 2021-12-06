#include<iostream>
using namespace std;
class SHAPE
{
	public:
virtual void area()=0;
};
class CIRCLE:public SHAPE
{
public:
	int r;	
void area()
{
	cout<<"enter radius:";
		cin>>r;
		cout<<"area of circle = "<<3.14*r*r<<endl;
	}	
};
class SPHERE:public SHAPE
{
public:
	int r;
void area()
{
	cout<<"enter radius:";
		cin>>r;

	cout<<"area of sPHERE = "<<1.33*3.14*r*r<<endl;
	}	
};
int main()
{
	CIRCLE b,*bptr;
	SPHERE d,*dptr;
	bptr=&b;
	cout<<"FOR CIRCLE AREA:"<<endl;
	bptr->area();
	dptr=&d;
	cout<<"FOR SPHERE AREA:"<<endl;
    dptr->area();
   
    return 0;
}
