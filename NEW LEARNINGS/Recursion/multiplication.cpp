#include<bits/stdc++.h>
using namespace std;
int pow(int n,int m)
{
    if(m==0)
        return 1;
    else if(m%2==0)
    {
        return pow(n*n,m/2);//2*2*2*2=2^4 or (2*2)^2=4^2
    }
    else if(m%2==1)
    {
        return n*pow(n*n,(m-1)/2);//2*2*2*2*2=2^5 or 2*2^4 or 2*(2*2)^4
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<pow(n,m);
}
