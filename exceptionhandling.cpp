//11.1) Develop a C++ program for handling Exceptions. 
#include<iostream>
using namespace std;
int main()
{
	try
	{
		int a,b;
		cout<<"enter a,b values :";
		cin>>a>>b;
		if(b==0)
		{
			throw b;
		}
		else
		{
			cout<<"Division of "<<a<<" / "<<b<<" = "<<a/b;
		}
	}
	catch(int x)
	{
		cout<<"ZERO DIVISION ERROR OCCURED"<<endl;
		cout<<"Because You Entered Denominator as ZERO";
	}

}
