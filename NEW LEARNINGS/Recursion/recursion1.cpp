#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    static int i=0;
    if(n>0)
    {

        i++;
        return fun(n-1)+i;

    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    cout<<fun(n)<<" ";
}
