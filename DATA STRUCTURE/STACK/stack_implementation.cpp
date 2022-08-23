#include<bits/stdc++.h>
using namespace std;
//..............................................//
class Stack{
    private:
    int size;
    int top=-1;
    int *ara;
    public:
    Stack create(int x);
    void push(int x);
    int pop();
    void isEmpty();
    void isFull();
    void print();
    int peep(int x);

};
Stack Stack::create(int x)
{
   Stack s1;
   s1.size=x;
   s1.ara=new int[ s1.size ];
   return s1;
}
void Stack::push(int x)
{
    if(top==size-1){
    cout<<"stack is full"<<endl;
    return ;}
    top++;
    ara[top]=x;
}
void Stack::print()
{
    if(top==-1)cout<<"Stack is empty"<<endl;
    for(int i=0;i<size && i<=top;i++)
    {
         cout<<ara[i]<<" ";
    }
    cout<<endl;
}
int Stack::pop(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
        return -1 ;
    }
    int x=ara[top];
    top--;
    return x;

}
void Stack::isEmpty()
{
   if(top==-1) cout<<"Stack is Empty"<<endl;
}
void Stack::isFull(){
    if(top==size-1)cout<<"Stack is Full"<<endl;
}
int Stack::peep(int x)//finding a value in a given position
{
     if(x>top+1)
      cout<<"Stack Overflow"<<endl;
      else
      return ara[top+1-x];

}
int main()
{
   
    Stack s1;
    int x;
    cin>>x;
    s1=s1.create(x);
    s1.push(5);
    s1.push(10);
    x=s1.pop();
    s1.print();
    cout<<x<<endl;


}

//cout<<"Case "<<case1<<": "<<s<<endl;

