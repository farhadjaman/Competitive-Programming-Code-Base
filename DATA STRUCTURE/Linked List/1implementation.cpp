#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int value;
    node *next;
}*first=NULL,*last=NULL;//defining the first and last node

void insert(int value)
{
    // here last is the current node and we are going to create a new temp
    // node so that we can put another value and connect last and temp using
    // last's next pointer and than we will declare temp as the last current node

    node *temp=new node();//create a temporary node that's we are going to use t store our new value
    temp->value=value;
    temp->next=NULL;//temp is the last node of the linkedlist so temp->next=null
    last->next=temp;//now previous last eliment pointing to current last eliment(temp)
    last=temp;//temp is the current last eliment

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
            first->value=x;//defining the first eliment with value x
            first->next=NULL;//for now this is the only eliment(means last eliment that why next is null)
            last=first;//"first" is the current last eliment
            continue;
        }
        cin>>x;
        insert(x);
    }
    node *temp;
    temp=first;

    while(1)
    {
       cout<<temp->value<<endl;
       if(temp->next==NULL) break;
       temp=temp->next;
        
    }
}