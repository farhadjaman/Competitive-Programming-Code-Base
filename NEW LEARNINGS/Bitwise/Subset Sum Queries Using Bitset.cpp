#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main()
{
    int i,j,n,m;
    int sum=0;
    cin>>n;
    cin>>m;
    int ara[n];
    int query[m];

 rep(i,n)
 {
    cin>>ara[i];
 }


  rep(i,n)
  {
     cin>>query[j];
  }


    bitset<200000>a1;
    a1[0]=1;
    rep(i,n)
    {
        a1|=(a1<<ara[i]);

    }
    rep(i,m)
    {
        if(a1[query[i]]==1)
            cout<<query[i]<<" can have subset sum"<<endl;
        else
            cout<<query[i]<<" can not have subset sum"<<endl;

    }

}
