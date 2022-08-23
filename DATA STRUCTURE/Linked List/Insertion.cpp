#include<iostream>
using namespace std;
class node{
	public:
	int value;
	node *next;
}*first=NULL,*last=NULL;
int n=0;
void input(int x)
{
	node *temp1=new node();
	temp1->value=x;
	temp1->next=NULL;
	last->next=temp1;
	last=temp1;

}
void insertion(int index,int value)
{
	node *new1=new node();
	new1->value=value;

     if(index==1)
      {
		  if(first==NULL)
		  {
		   new1->next=NULL;
		   first=new1;
		   last=first;
		  }
		  else
		  {
            new1->next=first;
		    first=new1;
		  }
		 
	  }
	  else if(index==n+1){
		 last->next=new1;
		 last=new1;
	  }
	  else
	  {
          node *temp2=first;
		  for(int i=1;i<index-1;i++)
		  {
			  temp2=temp2->next;
		  }
		  new1->next=temp2->next;
		  temp2->next=new1;
	  }
    n++;
}
int main()
{
	int x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
       cin>>x;
	   if(i==0)
	   {
		   node *temp1=new node();
		   temp1->value=x;
		   temp1->next=NULL;
		   first=temp1;
		   last=first;
	   }
	   else
	   {
		   input(x);
	   }
	}
	cout<<"Input you queries"<<endl;
	int q;
	int index;
	cin>>q;
	for(int i=1;i<=q;i++)
	{
		cin>>index>>x;
		insertion(index,x);
		node *temp2;
	    temp2=first;
	    while(1)
	         {
		         cout<<temp2->value<<" ";
		         if(temp2->next==NULL) break;
		         temp2=temp2->next;
	         }
        cout<<endl;
	}
	
}