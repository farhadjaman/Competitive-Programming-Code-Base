#include<iostream>
using namespace std;
void bubble_sort(int ara[],int n)
{
    int i,round,temp;
    for(round=1; round<=(n-1); round++)
    {
        for(i=0; i<n-1-round; i++)
            if(ara[i]>ara[i+1])
            {
                temp=ara[i];
                ara[i]=ara[i+1];
                ara[i+1]=temp;


            }
    }
}

int main()

{
    int n,i;
    cin>>n;
    int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    bubble_sort(ara,n);
    for(i=0; i<n; i++)
    {
        cout<<ara[i];
    }



}


