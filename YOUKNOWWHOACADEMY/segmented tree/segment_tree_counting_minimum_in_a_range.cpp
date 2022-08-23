#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        int x; cin>>x; while(x--)
#define pii         pair<int,int>
#define pll         pair<long long int,long long int>
#define vec         vector<ll>
#define vectorpair  vector<pair<int,int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         1000000007
#define MOD         1000000007
#define endll       "\n"
using ll = long long int;
template <typename T>
void vecprint(vector<T>&v1){for(auto it:v1) cout<<it<<" ";cout<<endl;}
vec ara,t,count1;
void build(ll node,ll l,ll r)
{
 
    if(l==r){
      t[node]=ara[l];
      count1[node]=1;
      return;
    }
    ll  leftN=node<<1;
    ll rightN=(node<<1)+1;
    ll mid=l+((r-l)>>1);
    build(leftN,l,mid);
    build(rightN,mid+1,r);
    t[node]=min(t[leftN],t[rightN]);

    if(t[leftN]==t[rightN])count1[node]=count1[leftN]+count1[rightN];
    else if(t[leftN]<t[rightN])count1[node]=count1[leftN];
    else count1[node]=count1[rightN];
    return;
 
}
 
void update(ll node,ll i,ll j,ll idx,ll val)
{
    
    if(idx<i || idx>j)
      {
       return ;
      }
    if(i==j && i==idx) {
      t[node]=val;
      return ;
    }
    ll leftN=node<<1;
    ll rightN=(node<<1)+1;
    ll mid=i+((j-i)>>1);
    update(leftN,i,mid,idx,val);
    update(rightN,mid+1,j,idx,val);
    t[node]=min(t[leftN],t[rightN]);
    if(t[leftN]==t[rightN])count1[node]=count1[leftN]+count1[rightN];
    else if(t[leftN]<t[rightN])count1[node]=count1[leftN];
    else count1[node]=count1[rightN];
}
 
ll rangemini(ll node,ll i,ll j,ll l,ll r)
{
     if(i>=l && j<=r)
      return t[node];
 
    if(j<l || i>r) return INT_MAX;
     
    ll leftN=node<<1;
    ll rightN=(node<<1)+1;
    ll mid=i+((j-i)>>1);
 
    ll x=rangemini(leftN,i,mid,l,r);
    ll y=rangemini(rightN,mid+1,j,l,r);
    return min(x,y);
}
ll rangecount(ll node,ll i,ll j,ll l,ll r,ll mini)
{

     if(i>=l && j<=r)
     {
      if(mini==t[node])
      return count1[node];
      else return 0;
      }
 
    if(j<l || i>r){ 
      return 0;
         }
    ll leftN=node<<1;
    ll rightN=(node<<1)+1;
    ll mid=i+((j-i)>>1);
 
    ll x=rangecount(leftN,i,mid,l,r,mini);
    ll y=rangecount(rightN,mid+1,j,l,r,mini);

    return x+y;
} 
int main()
{
 
  ll n,q,x,a,b,c;
  cin>>n>>q;
  ara.assign(n+1,0);
  t.assign(4*n+4,0);
  count1.assign(4*n+4,0);
  rep(i,1,n+1)cin>>ara[i];
  build(1,1,n);
  rep(i,0,q)
  {
      
      cin>>x>>a>>b;
      if(x==1)
      {
         // cout<<"node "<<t[5]<<endl;
          update(1,1,n,a+1,b);
          //cout<<"node1 "<<t[2]<<endl;
      }
      else
      {
        c=rangemini(1,1,n,a+1,b);
        cout<<c<<" "<<rangecount(1,1,n,a+1,b,c)<<endl;
     }
  }
 
  
}