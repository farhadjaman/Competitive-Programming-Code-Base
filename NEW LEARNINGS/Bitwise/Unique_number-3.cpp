//Each number except one number will appear three times
#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main()
{
    int bits[32]={0};
    int n,x,sum=0;
    cin>>n;
    int ara[n];
    rep(i,n)
    {
        cin>>ara[i];
        x=ara[i];
        for(int j=0;x!=0;j++)
        {
           if(x&1==1)
           {
              bits[j]++;

           }
           x=x>>1;
        }
    }
    rep(i,31)
    {
        if(bits[i]!=0)
        {
           bits[i]=bits[i]%3;
           if(bits[i]==1)
           {
               cout<<i<<endl;
              sum+=(1<<i);
           }
        }


    }


    cout<<sum<<endl;

}

