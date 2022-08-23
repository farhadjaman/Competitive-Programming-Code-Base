#include<iostream>
using namespace std;
int main()
{
    int x=5;
    int* p=&x;
    *p=6;
    int **q=&p;
    int ***r=&q;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;//address of x
    cout<<*p<<endl;//value of x
    cout<<*q<<endl;//value of p which is address of x
    cout<<*(*q)<<endl;//value of *p
    cout<<*(*r)<<endl;//value of *q which is address of x
    cout<<*(*(*r))<<endl;//value of **q
    ***r=10;
    cout<<x<<endl;


}
