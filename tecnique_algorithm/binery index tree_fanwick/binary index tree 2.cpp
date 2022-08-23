#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)    for(long long int i=a;i<n;i++)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define Vector          vector<long long int>
#define Vectorpair      vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
using ll = long long int;
ll maximum(ll ara[],ll n)
{
    ll max1=-100000;
    rep(i,0,n)
    {
        if(max1<ara[i])
            max1=ara[i];
    }
    return max1;
}
int responsibilty(int x)
{

    //cout<<(x&-x)<<endl;
    return x&(-x);

}
//..............................................//
int main()
{
    Fast_Read;
    int tc;
    cin>>tc;
    for(int case1=1; case1<=tc; case1++)
    {
        ll i,j,n,x,max1;
        cin>>n;
        ll ara[n];
        rep(i,0,n)
        cin>>ara[i];

        max1=maximum(ara,n);

        int BIT[max1+1]= {0};


        for(i=0; i<n; i++)
        {
            for(j=ara[i]; j<=max1; j=j+responsibilty(j))
            {
                BIT[j]++;
            }

        }
        for(auto it:BIT)
            cout<<it<<" ";


    }


}


