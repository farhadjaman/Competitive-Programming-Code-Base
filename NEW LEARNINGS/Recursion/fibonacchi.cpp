#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)      for(long long int i=a;i<n;i++)
#define all(x)          x.begin(),x.end()
#define allara(x,n)     x,x+n
#define w(x)            long long int x; cin>>x; while(x--)
#define Vector          vector<long long int>
#define Vectorpair      vector<pair<long long int,long long int>>
#define Fast_Read       ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
using ll = long long int;
int ara[2000000]={0};
//..............................................//

int fib(int n)
{
    if(n==1)
    {
        ara[n]=n;
        return n;
    }
    else
    {
        if(ara[n-2]==0)
        {
            ara[n-2]=fib(n-2);
        }
        if(ara[n-1]==0)
        {
            ara[n-1]=fib(n-1);
        }
        return ara[n-2]+ara[n-1];
    }
}
int main()
{
    Fast_Read;
    int i,j,n,x,div;
    cin>>n;

    x=fib(n);

    rep(i,0,n)
    cout<<ara[i]<<endl;


}


