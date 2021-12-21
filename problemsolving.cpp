//Input: arr[] = {10, 3, 5, 6, 2} Output: prod[] = {180, 600, 360, 300, 900}
#include<iostream>
using namespace std;
int main()
{
	int arr[5],pro[5];
	int i,j,prod;
		for(i=0;i<5;i++)
	cin>>arr[i];
	for(i=0;i<5;i++)
	{
		prod=1;
		
		for(j=0;j<5;j++)
		{
			if(i==j)
			{
				continue;
			}
			else
			{
				prod=prod*arr[j];
			}
		}
		pro[i]=prod;
	}
	cout<<"arr[] = {";
	for(i=0;i<5;i++)
	{
		cout<<arr[i];
		if(i!=4)
		{
			cout<<",";
		}
	}
	cout<<"}";
	cout<<endl;
	cout<<"pro[] = {";
	for(i=0;i<5;i++)
	{
		cout<<pro[i];
			if(i!=4)
		{
			cout<<",";
		}
	}
	cout<<"}";
}
