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
node* mergelist(node* first,node* second)
{
    node *merged=NULL,*last=NULL;
    if((first->value)<=(second->value))
    {
        merged=first;
        last=merged;
        first=first->next;
        last->next=NULL;
    }
    else 
    {
        merged=second;
        last=merged;
        second=second->next;
        last->next=NULL;
    
    }

    while (first != NULL && second != NULL)
    {
        if (first->value <= second->value)
        {
            last->next = first;
            last = first;
            first = first->next;
            last->next = NULL;
        }
        else
        {
            last->next = second;
            last = second;
            second = second->next;
            last->next = NULL;
        }
    }
    
    if (first != NULL)
        last->next = first;
    else
        last->next = second;

    return merged;

}
int main()
{
	int n;
    cout<<"Enter the size of the first linked list"<<endl;
	cin>>n;
    cout<<"Enter the first Linked List's nodes"<<endl;
    node *first=input(n);
    cout<<"Enter the size of the second linked list"<<endl;
	cin>>n;
    cout<<"Enter the second Linked List's nodes"<<endl;
    node *second=input(n);
    node *merged;
    merged=mergelist(first,second);
    print(merged);

}