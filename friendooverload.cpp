#include<iostream>
#include<stdlib.h>
using namespace std;
class loc
{
	int longitude,latitude;
	public:
		loc()
		{
	
		}
		loc(int lg,int lt)
		{
			longitude=lg;
			latitude=lt;
		}
		void show()
		{
			cout<<longitude<<" "<<latitude<<endl;
		}
		friend loc operator+(loc op1,loc op2);
		friend loc operator+(int op1,loc op2);
		friend loc operator+(loc op1,int op2);
		friend loc operator++(loc &op,int);
		loc operator -(loc op2);
		loc operator=(loc op2);
		loc operator+=(loc op2);
		friend loc operator++(loc &op);
		friend loc operator--(loc &op);
		void *operator new(size_t size);
		void operator delete(void *p);
				
};
void *loc::operator new(size_t size)
{
	void *p;
	cout<<"in overloaded new \n";
	p=malloc(size);
	if(!p)
	{
		bad_alloc ba;
		throw ba;
	}
	return p;
 }
 void loc::operator delete(void *p)
 {
 	cout<<"in overloaded delete\n";
 	free(p);
 }
 loc operator+(loc op1,int op2)
 {
 	loc temp;
 	temp.longitude=op1.longitude+op2;
 	temp.latitude=op1.latitude+op2;
 	return temp;
 }
 loc operator+(int op1,loc op2)
 {
 	loc temp;
 	temp.longitude=op1+op2.longitude;
 	temp.latitude=op1+op2.latitude;
 	return temp;
 	
 }
 loc operator+(loc op1,loc op2)
 {
 	loc temp;
 	temp.longitude=op1.longitude+op2.longitude;
 	temp.latitude=op1.latitude+op2.latitude;
 	return temp;
 }
 loc loc::operator=(loc op2)
 {
 	longitude=op2.longitude;
 	latitude=op2.latitude;
 	return *this;
 }
 loc loc::operator-(loc op2)
 {
 	loc temp;
 	temp.longitude=op2.longitude-longitude;
 	temp.latitude=op2.latitude-latitude;
 	return temp;
 }
 loc operator++(loc &op)
 {
 	op.longitude++;
 	op.latitude++;
 	return op;
 }
 loc operator++(loc &op,int)
 {
 	op.longitude++;
 	op.latitude++;
 	return op;
 }
 loc operator--(loc &op)
 {
 	op.longitude--;
 	op.latitude--;
 	return op;
 }
 loc loc::operator+=(loc op2)
 {
 	longitude+=op2.longitude;
 	latitude+=op2.latitude;
 	return *this;
 }
 int main()
 {
 	loc ob1(10,20),ob2(5,30),ob3(90,90);
 	loc *p1,*p2;
 	ob1.show();
 	ob2.show();
	++ob1;
	ob1.show();
	ob2=ob1++;
	ob1.show();
	ob2.show(); 
	--ob3;
	ob3.show();
	ob1=ob2=ob3;
	ob1.show();
	ob2.show();
	try
	{
		p1=new loc(10,20);
	}
	catch (bad_alloc xa)
	{
		cout<<"allocation error for p1.\n";
		return 1;
	}
	try
	{
		p1=new loc(-10,-20);
	}
	catch (bad_alloc xa)
	{
		cout<<"allocation error for p2.\n";
		return 1;;
	}
	p1->show();
	p2->show();
	delete p1;
	delete p2;
	return 0;
		
 }
   
