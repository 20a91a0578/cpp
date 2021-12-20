#include<iostream>
using namespace std;
template<typename t1>
void get(t1 f,t1 b)
{

cout<<"the data you entered"<<endl;

cout<<f<<" + "<<b<<" = "<<f + b<<endl;	
}
int main()
{
	get(6,9);
	get(2.4,6.9);
	get(4567.555,45536475.556);
	return 0;
}
