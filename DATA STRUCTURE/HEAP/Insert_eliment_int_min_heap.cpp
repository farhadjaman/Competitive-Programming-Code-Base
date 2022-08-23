#include<bits/stdc++.h>
using namespace std;
void insert(vector<int>&ara,int n)
{
    int temp=ara[n],i=n;
    while(i>0 && temp<ara[i/2] )
    {
        ara[i]=ara[i/2];
        i=i/2;
    }
    ara[i]=temp;
}
void createheap(vector<int>&ara)
{
    for(int i=1;i<ara.size();i++)
    {
        insert(ara,i);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>ara(n);
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        createheap(ara);
    }
    for(int i=0;i<n;i++)
    {
        cout<<ara[i]<<" ";
    }
    cout<<endl;


}