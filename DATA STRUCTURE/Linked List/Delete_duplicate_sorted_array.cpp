#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int value;
    node *next;
}*first=NULL,*last=NULL;

void insert(int value)
{
  
    node *temp=new node();
    temp->value=value;
    temp->next=NULL;
    last->next=temp;
    last=temp;

}
void deleteduplicate()
{
    node *pt1,*pt2;
    pt1=first;
    pt2=first->next;
    while(pt2!=NULL)
    {
        if(pt1->value==pt2->value)
        {
             pt1->next=pt2->next;
             pt2=pt2->next;

        }
        else
        {
            pt1=pt2;
            pt2=pt2->next;
        }
    }
}
int main()
{
    int n,x;
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
            last=first;
            continue;
        }
        cin>>x;
        insert(x);
    }
    deleteduplicate();
    node *temp;
    temp=first;

    while(1)
    {
       cout<<temp->value<<endl;
       if(temp->next==NULL) break;
       temp=temp->next;
        
    }
}