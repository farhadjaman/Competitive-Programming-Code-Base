#include<iostream>
using namespace std;
double add(int,int);

int main()
{
    double a,b,c;
    cin>>a>>b;
    c = add(a,b);
    cout<<c;
    return 0;
}
double add(int n1,int n2)
{
    double sum;
    sum=n1+n2;
    return sum;
}
