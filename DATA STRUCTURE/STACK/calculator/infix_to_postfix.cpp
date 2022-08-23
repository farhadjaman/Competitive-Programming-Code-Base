#include<bits/stdc++.h>
#include "stack.h"
using namespace std;

int isoperand(char ch)
{
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/') return 0;
    else return 1;
}
int pre(char x)
{
    if(x=='+' || x=='-') return 1;
    else return 2;
}
string convert(string& infix)
{
    Stack st;
    string postfix;
    int i=0,j=0;
    while(i<infix.size())
    {
          if(!isoperand(infix[i]))
          {
              postfix.push_back(infix[i]);
              i++;
          }
          else
          {
              if(pre(infix[i]>pre(infix[st.stacktop()])))
              {
                  st.push(infix[i]);
    
              }
              else
              {
                  postfix.push_back(st.stacktop());
              }
          
          }
    }
    while(!st.isEmpty())
    {
        postfix.push_back(st.pop());
    }
    return postfix;
}
int main()
{
     
}