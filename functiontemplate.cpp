#include<iostream>
using namespace std;
template<typename t>
void get(t f,t b)
{

cout<<"the data you entered"<<endl;

cout<<f<<" + "<<b<<" = "<<f+b<<endl;	
}
int main()
{
	get(6,9);
	get(2.4,6.9);

	
}
