#include<iostream>
using namespace std;
int main()
{
	try
	{
		int i,a[5];
		cout<<"enter array elements :";
		for(i=0;i<5;i++)
		cin>>a[i];
		int index;
		cout<<"enter index you want to add new element:";
		cin>>index;
		if(index>=5)
		{
			throw index;
		}
		else if(index<0)
		{
			throw "Array Index Shold not be a Negative ";
		}
		else
		{
			cout<<"enter the data you wnat to enter:";
			int m;
			cin>>m;
			a[index]=m;
			cout<<"array elements are:";
				for(i=0;i<5;i++)
		         cout<<a[i];
		}
	}
	catch(int x)
	{
		cout<<"INDEX IS OUT OF RANGE / BOUNDS"<<endl;
	}
	catch(const char *s)
	{
		cout<<s<<endl;
	}

}
