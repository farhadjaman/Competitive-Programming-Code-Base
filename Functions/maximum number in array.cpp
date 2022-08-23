#include<iostream>
using namespace std;
int findmax(int,int);
int main()
{
    int i,n;
    cin>>n;
    int ara[100];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    int max=findmax(ara,n);
    cout<<max;
}
int findmax(int ara[],int n)
{
    int i;
    max=ara[0];
        for(i=1; i<n; i++)
    {
        if(max<ara[i])
        {
            max=ara[i];
        }

    }

    return max;
}
