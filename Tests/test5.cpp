#include<bits/stdc++.h>
using namespace std;
#define mx 1000007
#define rep(i,a,n)  for(int i=a;i<n;i++)
using ll = long long int;
vector<ll> ara;
struct info{
public:
     ll prop,sum;

}t[4*mx];

void update(ll node,ll i,ll j,ll l,ll r,ll x)//l,r given range i,j curent node range,x update value
{
    //cout<<node<<" "<<i<<" "<<j<<endl;
    if(i>r || j<l) return;
    if(i>=l && j<=r)
    {
     
     t[node].sum+=((i-j)+1)*x;
     t[node].prop+=x;
     return;
    }
    ll lnode=node<<1;
    ll rnode=(node<<1)+1;
    ll mid=i+((j-i)>>1);
    update(lnode,i,mid,l,r,x);
    update(rnode,mid+1,j,l,r,x);
    t[node].sum=t[lnode].sum+t[rnode].sum+(i-j+1)*t[node].prop;
}
ll rangequery(ll node,ll i,ll j,ll l,ll r,long long carry)
{
    if(i>r || j<l) {
     return 0;
}
    if(i>=l && j<=r)
    {
     return t[node].sum+carry*(i-j+1);
    }
    ll lnode=node<<1;
    ll rnode=(node<<1)+1;
    ll mid=i+((j-i)>>1);

    ll p=rangequery(lnode,i,mid,l,r,carry+t[node].prop);
    ll q=rangequery(rnode,mid+1,j,l,r,carry+t[node].prop);
    return p+q;
}
int main()
{
     ll n,m,x,y;
     cin>>n>>m;
     ara.assign(n,0);
     //build(1,0,n-1);
     rep(i,0,m){
      cin>>x;
      if(x==1)
      {
        ll l,r,v;
        cin>>l>>r>>v;
        update(1,0,n-1,l,r-1,v);
      }
      else
      {
        cin>>y;
        cout<<rangequery(1,0,n-1,y,y,0)<<endl;
      }
  

}
}