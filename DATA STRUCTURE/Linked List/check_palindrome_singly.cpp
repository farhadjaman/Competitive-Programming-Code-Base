#include<iostream>
using namespace std;
class node{
	public:
	int value;
	node *next;
};
void print(node *first)
{
    node *temp2;
    temp2 = first;
    while (1)
    {
        cout << temp2->value << " ";
        if (temp2->next == NULL) break;    
        temp2 = temp2->next;
    }
    cout << endl;
}

node* input(int size)
{
    int x;
    node *first,*last;
    for(int i=0;i<size;i++)
    {
        node *temp=new node();
        cin>>x;
        temp->value = x;
        temp->next = NULL;
        if(i==0)
        {
           first=temp;
           last=first;
           continue;
        }
        last->next=temp;
        last=temp;
    }
    return first;
}
node* reverse(node* head)
{
    node *pt1,*pt2,*pt3;
    pt3=head;
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
bool ispalindrome(node* head)
{
    //partition
    node *p,*q,*first,*second;
    p=head;
    q=head;
    first=head;
    while(1)
    {
        p=p->next->next;
        if(p->next==NULL)//for odd
        {
            second=q->next;
            q->next=NULL;
            break;
        }
        if(p==NULL)//for even
        {
            second=q->next;
            q->next=NULL;
            break;

        }
        q=q->next;
    }
    second=reverse(second);
    while(second!=NULL)
    {
        if(second->value!=first->value)
         return 0;
        
        second=second->next;
        first=first->next;
    }
    return 1;
}
int main()
{
	int n;
    cout<<"Enter the size of the linked list"<<endl;
	cin>>n;
    cout<<"Enter the first Linked List's nodes"<<endl;
    node *first=input(n);
    
    bool flag= ispalindrome(first);
    if(flag) cout<<"Is Palindrome"<<endl;
    else cout<<"Is not a plaindrome"<<endl;
    
    

}