#include<bits/stdc++.h>
using namespace std;
//..............................................//
class node{
    public:
    int data;
    node* next;
};

class Stack{
    private:
    node* first;
    node* top=NULL;
    public:
    Stack create(int x);
    void push(int x);
    int pop();
    void isEmpty();
    void print();

};
Stack Stack::create(int x)
{
    first=new node();
    first->data=x;
    top=first;
    top->next=NULL;

}
void Stack::push(int x)
{
    node* temp=new node();
    temp->data=x;
    temp->next=top;
    top=temp;
}
void Stack::print()
{
      node* temp=top;
      while(1)
      {
          cout<<temp->data<<endl;
          if(temp->next==NULL)break;
          temp=temp->next;
      }
}   
int Stack::pop(){
    int x=top->data;
    node* temp=top;
    top=top->next;
    free(temp);
    return x;

}
void Stack::isEmpty()
{
   if(first==NULL) cout<<"Stack is Empty"<<endl;
   else cout<<"Stack is not empty"<<endl;
}


