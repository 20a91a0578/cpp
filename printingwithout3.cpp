#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,c=0,i,p,k;
	cout<<"enter the range:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		k=i/10;
	
		if((i%10==3 || i/10==3) ||k%10==3 ||i/100==3 ||i/1000==3)
		{
			c++;
			cout<<i<<" ";
		}
	}
	cout<<endl;
	cout<<c<<endl;
	cout<<n-c;
	return 0;
}
