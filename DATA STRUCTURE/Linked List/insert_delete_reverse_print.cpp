#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int value;
    node *next;
}*first=NULL;
node* reverse()
{
    node *pt1,*pt2,*pt3;
    pt3=first;
    pt2=NULL;
    pt1=NULL;
    while(pt3!=NULL)
    {
        
        pt1=pt2;
        pt2=pt3;
        pt3=pt3->next;
        pt2->next=pt1;
        

    }
    return pt2;
    
}
void insert(int index,int value)
{
    if(index!=0)
    {
        if(first==NULL)
        {
            
        }
    node *temp;
    temp=first;   
    node *temp1=new node();

    for(int i=1;i<index;i++)
    {
       temp=temp->next;
    }
    temp1->value=value;
    temp1->next=temp->next;
    temp->next=temp1;
    }
    else
    {
        node *temp=new node();
        temp->value=value;
        temp->next=first;
        first=temp;
    }
}
void Delete(int index)
{
    
    node *pt1=NULL,*pt2=NULL;
    pt2=first;

    for(int i=1;i<index;i++)
    {
       pt1=pt2;
       pt2=pt2->next;
    }
    pt1->next=pt2->next;
}
void printing(node* temp)
{
   while(1)
    {
       cout<<temp->value<<endl;
       if(temp->next==NULL) break;
       temp=temp->next;
        
    }
}

int main()
{
    int n,x,count1=0,index;
    first=new node();
    cout<<"Enter First Node"<<endl;
    cin>>x;
    first->value=x;
    first->next=NULL;
    cout<<"How many node you want to Insert"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Insert Index and value"<<endl;
        cin>>index;
        cin>>x;
        insert(index,x);
    }
    cout<<"Inserted eliment"<<endl;
    printing(first);
    first=reverse();
    cout<<"reversed element"<<endl;
    printing(first);
    cout<<"Which Index you want to delete"<<endl;
    cin>>x;
    Delete(x);
    cout<<"Element after deletion"<<endl;
    printing(first);
     
    
   
}