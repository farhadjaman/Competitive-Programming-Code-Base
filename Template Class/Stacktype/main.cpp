#include<iostream>
#include<string>
#include"stacktype.cpp"
using namespace std;

void print(StackType<char>&st1)
{
    while(!st1.IsEmpty())
    {cout<<st1.Top()<<" ";
    st1.Pop();
    }
}

 void insert(StackType<char>&st1,char c)
 {
     if(st1.IsEmpty())
     {
         st1.Push(c);
         return;
     }
     int temp=st1.Top();
     st1.Pop();
     insert(st1,c);
     st1.Push(temp);


 }
 void reverse(StackType<char>&st1)
 {
    if(st1.Size()==1)
    {
        return;
    }
      

      int temp=st1.Top();
      st1.Pop();
      reverse(st1);
      insert(st1,temp);
 }
int main()
{
    StackType<char>ob1;
    StackType<char>ob2;
    string s;
    cout<<"Input Your String You want to reverse"<<endl;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
         ob1.Push(s[i]);
    }
    reverse(ob1);
}