#include<bits/stdc++.h>
using namespace std;
int n;
void deletion(vector<int>&ara,int k)
{
    int x,i=0,j,val;
    x=ara[i];
    ara[i]=ara[k];
    j=2*i;
    while(j<k)
    {
        if(ara[j+1]>ara[j])
        {
            j=j+1;
        }
        if(ara[i]<ara[j])
        {
            swap(ara[i],ara[j]);
            i=j;
            j=2*i;
        }
        else break;
    }
    ara[k]=x;

    
}
void insert(vector<int>&ara,int k)
{
    int temp=ara[k],i=k;
    while(i>0 && temp>ara[i/2] )
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

    cin>>n;
    vector<int>ara(n);
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        createheap(ara);
    }
    cout<<"Printing the heap array after creating"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ara[i]<<" ";
    }
    cout<<endl;
    //for deletion
    // deletion(ara);
    // deletion(ara);
    // cout<<"Printing the heap array after deletion"<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<ara[i]<<" ";
    // }
    // cout<<endl;

    //if we keep deleting and putting the last value at nth position we will get a sorted array
     
     //creating heap sort
     for(int i=n-1;i>0;i--)
     {
         deletion(ara,i);
     }
     cout<<endl;
     for(int i=0;i<ara.size();i++)
       cout<<ara[i]<<" ";
       cout<<endl;

}