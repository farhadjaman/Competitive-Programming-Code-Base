#include<bits/stdc++.h>
using namespace std;

void add(int x,int y)
{
    cout<<x+y<<endl;
}
void sub(int x,int y)
{
    cout<<x-y<<endl;
}
void mult(int x,int y)
{
    cout<<x*y<<endl;
}
void divi(int x,int y)
{
    cout<<x/y<<endl;
}

void square0fmult(void (*mult) (int x,int y))
{
    print()
}

int main()
{
    int n,x,y;
    void (*calculate[4]) (int,int)={add,sub,mult,divi};
    cout<<"enter two numbers"<<endl;
    cin>>x>>y;
    cout<<"Enter 1 for addition 2 subtraction 3 Multiplication 4 Divition "<<endl;
    cin>>n;
    (calculate[n-1]) (x,y);
}
