#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int value;
    node *next;
}*first=NULL,*last=NULL;
void insert(int value)
{
     node* temp=new node();
     temp->value=value;
     temp->next=NULL;
     last->next=temp;
     last=temp;
}
void deletemiddlelement(int index,int n)
{
   
      node *pt1,*pt2,*pt3;
      
      if(n%2==1)
      {
          pt2=first;
          pt1=NULL;
          for(int i=0;i<=index;i++)
      {
          pt1=pt2;
          pt2=pt2->next;
      }
      pt1->next=pt2->next;

      }
      else
      {
           pt1=NULL;
           pt2=NULL;
           pt3=first;
           for(int i=0;i<=index;i++)
           {
               
               pt1=pt2;
               pt2=pt3;
              
               pt3=pt3->next;
           }
           pt1->next=pt3->next;
      }



}

int main()
{
    int n,x;
    first=new node();
    last=first;
    cout<<"How many value you want to add"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(i==0)
        {
            last->value=x;
            last->next=NULL;
        }
        else
        {
            insert(x);
        }
    }
    if(n==0 || n==1)
    {
        cout<<"NULL"<<endl;
    }
    else{
           deletemiddlelement(n/2,n);
    }
    node*temp;
    temp=first;
    while(1)
    {
        cout<<temp->value<<endl;
        if(temp->next==NULL) break;
        temp=temp->next;
    }
}