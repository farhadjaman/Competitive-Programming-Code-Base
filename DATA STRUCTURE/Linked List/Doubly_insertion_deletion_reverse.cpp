#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int value;
    node *next;
    node *prev;
}*first=NULL,*last=NULL;

void Create(int value)
{
    

    node *temp=new node();
    temp->value=value;
    temp->next=NULL;
    temp->prev=last;
    last->next=temp;
    last=temp;
}
void insert(int index,int value)
{
    node *temp=new node();
    temp->value=value;
    if(index==0)
    {
        temp->next=first;
        temp->prev=NULL;
        first->prev=temp;
        first=temp;

    }
    else
    {
        node *temp1=first;
        for(int i=0;i<index-1;i++)
        {
            temp1=temp1->next;
        }
        temp->next=temp1->next;
        temp->prev=temp1;
        if(temp->next!=NULL)
        {
            (temp->next)->prev=temp;
        }
        temp1->next=temp;
    }
}
void Delete(int index)
{
    if(index==0)
    {
         first=first->next;
         first->prev=NULL;
    }
    else
    {
        node *temp1;
        temp1=first;
        for(int i=0;i<index-1;i++)
        {
            temp1=temp1->next;
        }
        (temp1->prev)->next=temp1->next;
        if(temp1->next!=NULL)
        {
            (temp1->next)->prev=temp1->prev;
        }
    }
}
void reverse()
{
    node *temp1=NULL,*temp2=NULL;
    temp1=first;
    while(temp1)
    {
         temp2=temp1->next;
         temp1->next=temp1->prev;
         temp1->prev=temp2;
         temp1=temp1->prev;
         if(temp1->next==NULL)
         {
             temp1=first;
         }

    }
}
int main()
{
    int n,x,count1=0;
    first=new node();
    last=first;
    cout<<"Enter how many number you want to add"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            cin>>x;
            first->value=x;
            first->next=NULL;
            first->prev=NULL;
            last=first;
            
            continue;
        }
        cin>>x;
        Create(x);
    }
    node *temp;
    temp=first;

    while(1)
    {
       cout<<temp->value<<" ";
       if(temp->next==NULL) break;
       temp=temp->next;
        
    }
    cout<<endl;
    temp=last;
    while(1)
    {
       cout<<temp->value<<" ";
       if(temp->prev==NULL) break;
       temp=temp->prev;
        
    }
    cout<<endl;

}