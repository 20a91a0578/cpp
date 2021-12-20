#include<iostream>
using namespace std;
#include"node.h"
template<class t>
class linked
{
	private:
		node<t> *start;
		public:
			linked()
			{
				start=NULL;
			}
			void insert()
			{
				t ele;
				cout<<"enter the value";
				cin>>ele;
				node<t> *newnode=new node<t>;
				node<t> *ptr=new node<t>;
				newnode->data=ele;
				newnode->next=NULL;
				if(start==NULL)
				{
					start=newnode;
				}
				else
				{
					ptr=start;
					while(ptr->next!=NULL)
					ptr=ptr->next;
					ptr->next=newnode;
				}
			}
			void del()
			{
				node<t> *ptr=new node<t>;
				node<t> *preptr=new node<t>;
				ptr=start;
				while(ptr->next!=NULL)
				{
					preptr=ptr;
					ptr=ptr->next;
					
				}
				preptr->next=NULL;
				cout<<"deleted element is "<<ptr->data<<endl;
				delete ptr;	
			}
			void display()
			{
					node<t> *ptr=new node<t>;
					ptr=start;
					while(ptr!=NULL)
					{
						cout<<ptr->data;
						ptr=ptr->next;
					}
			}
};
int main()
{
	linked <int>l;
	int n,i;
	cout<<"enter how many elements you want to insert :";
	cin>>n;
	for(i=0;i<n;i++)
	l.insert();
	l.display();
	l.del();
	l.display();
	return 0;
}
