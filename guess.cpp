#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[20],g[20],p;
	int i,j,n=3,k,count=0,c=0;
	string a;
    cout<<"ENTER THE STRING YOU WANT TO USE FOR GUESSING GAME :";
	cin>>g;
		cout<<"Enter the Clue You Want to Give To Player";
	cin>>a;
	k=strlen(g);
for(i=0;i<k;i++)
{
	s[i]='*';
}
s[i]='\0';
cout<<"THE STRING YOU ENTERED IS IN THE THE FORMAT:"<<s<<endl;
while(n>0&&c!=k)
{
	count=0;
	cout<<"Enter Your Guessing Letter:";
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
cout<<"Sorry! The Letter You Entered Doesn`t Match With Any Letter in the String"<<endl;
cout<<"Now You Have only "<<n-1<<" Chances to Win The Game"<<endl;
n--;
		
}
else 
{
cout<<"The String After Your GUESS:"<<s<<endl;
}
}	

return 0;	
}
