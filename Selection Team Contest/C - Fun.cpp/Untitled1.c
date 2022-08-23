#include<iostream>
using namespace std;
int bin_search(int ara[],int n,int find)
{
    int i=0,m,l=n-1,count1=0,count2=0;
    while(i<=l)
    {
        m=n/2;
        if(ara[m]==find)
        return m;

        else if(ara[m]>find)
        {

           l=m-1;
        }
        else if(ara[m]<find)
        {
            i=m+1;
        }

    }
    return m;
}
int main()
{
    int n,m,i,find;
    cin>>n;
    int ara1[n],ara11[n];
    for(i=0;i<n;i++)
    {
        cin>>ara1[i];
        cin>>ara11[n];
    }
    reverse(ara11, ara11 + n);


    cin>>m;
    int ara2[m];

        for(i=0;i<n;i++)
        cin>>ara2[i];


for(i=0;i<m;i++)
{
    Index=bin_search(ara[n],n,find);
}

}
