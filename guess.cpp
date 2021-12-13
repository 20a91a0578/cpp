#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[20],g[20],p;
	int i,j,n=3,k,count=0,c=0;
    cout<<"enter guessing string";
	cin>>g;
	k=strlen(g);
for(i=0;i<k;i++)
{
	s[i]='*';
}
s[i]='\0';
cout<<"output :"<<s<<endl;
while(n>0&&c!=k)
{
	count=0;
	cout<<"Enter your character:";
	cin>>p;
	for(j=0;j<k+1;j++)
	{
		if(g[j]==p)
		{
			s[j]=p;
		count++;
		c++;
	    }
    }
if (count==0)
{	
cout<<"sorry! the character is not existing. you still have "<<n-1<<" chances"<<endl;
n--;
		
}
else 
{
cout<<"output :"<<s<<endl;
}
}	

return 0;	
}
