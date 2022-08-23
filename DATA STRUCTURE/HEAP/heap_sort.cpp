#include<bits/stdc++.h>
using namespace std;
void heapify(int ara[],int n,int i)
{
    int largest=i;
    int l=2*i;
    int r=2*i+1;
    if(l<=n && ara[l]>ara[largest])
    {
        largest=l;
    }
    if(r<=n && ara[r]>ara[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        swap(ara[i],ara[largest]);
        heapify(ara,n,largest);
    }
}
void creatingHeap(int ara[],int n)
{
   for(int i=n/2;i>=1;i--)
    {
        heapify(ara,n,i);
    }
}
void sortingArray(int ara[],int n)
{
   for(int i=n;i>=1;i--)
    {
        swap(ara[1],ara[i]);
        heapify(ara,i-1,1);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<ara[i]<<" ";
    }
    cout<<endl;
}
heapsort(int ara[],int n)
{
    //for sorting the tree
    creatingHeap(ara,n);
    //for deleting/getting the value in sorted manner
    sortingArray(ara,n) ;  
}
int main()
{
   int n;
   cin>>n;
   int ara[n+1];

   for(int i=1;i<=n;i++)
   {
    cin>>ara[i];
   }
   heapsort(ara,n);
}