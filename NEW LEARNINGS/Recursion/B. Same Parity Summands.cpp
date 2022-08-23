#include<bits/stdc++.h>
using namespace std;
#define rep(i,n)    for(long long int i=0;i<n;i++)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vi          vector<long long int>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
using ll = long long int;
ll maximum(ll ara[],ll n)
{
    ll max1=-100000;
    rep(i,n)
    {
        if(max1<ara[i])
            max1=ara[i];
    }
    return max1;
}
ll minimum(ll ara[],ll n)
{
    ll max1=-100000;
    rep(i,n)
    {
        if(max1>ara[i])
            max1=ara[i];
    }
    return max1;
}
//..............................................//
void solve()
{
    ll n,x,rem,div,l;
    cin>>n>>x;
    div=n/x;
    rem=n%x;
    l=x;

    if(div==1)
    {
        if(rem%2==0)
        {
            cout<<"YES"<<endl;
            l--;
            rep(i,l)
            {
                cout<<1<<" ";
            }
            cout<<1+rem<<endl;
        }
        else
            cout<<"NO"<<endl;

    }
    else if(rem%2==1 && x%2==1 && div>1)
    {
        cout<<"YES"<<endl;
        l--;
        rep(i,l)
        {
            if(i%2==0)
                cout<<div+1<<" ";
            else
                cout<<div-1<<" ";
        }
        cout<<div+rem<<endl;
    }
    else if((div%2==0 || div%2==1) && rem%2==0 && div>1)
    {
        cout<<"YES"<<endl;
        l--;
        rep(i,l)
        {
            cout<<div<<" ";
        }
        cout<<div+rem<<endl;
    }
    else
        cout<<"NO"<<endl;








}
int main()
{
    Fast_Read;
    w(testcase)
    solve();

}


