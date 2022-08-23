#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int value;
    node *next;
    node *prev;
}*first=NULL,*last=NULL;

void insert(int value)
{
    

    node *temp=new node();
    temp->value=value;
    temp->next=NULL;
    temp->prev=last;
    last->next=temp;
    last=temp;
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
        insert(x);
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