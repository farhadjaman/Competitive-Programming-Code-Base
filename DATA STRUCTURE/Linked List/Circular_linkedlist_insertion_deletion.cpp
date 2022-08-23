#include<iostream>
using namespace std;
class node{
	public:
	int value;
	node *next;
};
void print(node *first)
{
    node* temp=first;
    do{
         cout<<temp->value<<endl;
         temp=temp->next;
    }
    while(temp!=first);
}
node* Insert(int index,int value,node *head)
{
    node* temp=new node();
    temp->value=value;
    node *temp1;
    temp1=head;
    if(index==0)
    {
       while(temp1->next!=head)
       {
           temp1=temp1->next;
       }
       temp1->next=temp;
       temp->next=head;
       head=temp;
    }
    else
    {
        for(int i=0;i<index-1;i++)
        {
            temp1=temp1->next;
        }
        temp->next=temp1->next;
        temp1->next=temp;

    }
}
node* Delete(int index,node *head)
{
   
    node *temp1,*temp2;
    temp1=head;
    if(index==0)
    {
       while(temp1->next!=head)
       {
           temp1=temp1->next;
       }
       if(temp1==head)
       {
           head=NULL;
       }
       else
       {temp1->next=head->next;
       head=head->next;}
    }
    else
    {
        for(int i=0;i<index-2;i++)
        {
            temp1=temp1->next;
        }
        temp2=temp1->next;
        temp1->next=temp2->next;
        

    }
    return head;
}