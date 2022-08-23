#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    char value;
    node *next;
    node *prev;
}*first=NULL,*last=NULL;

void insert(char value)
{
    

    node *temp=new node();
    temp->value=value;
    temp->next=NULL;
    temp->prev=last;
    last->next=temp;
    last=temp;
}
int is_palindrome()
{
    node *temp1=first;
    node *temp2=last;
    while(temp1!=temp2)
    {
        if(temp1->value!=temp2->value)
        {
            return 0;
        }
        temp1=temp1->next;
        temp2=temp2->prev;
    }
    return 1;
}
int main()
{
    int n;
    char x;
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
    int check=is_palindrome();
    (check==1)?cout<<"array is a palindrome"<<endl:cout<<"array is not a palindrome"<<endl;

}