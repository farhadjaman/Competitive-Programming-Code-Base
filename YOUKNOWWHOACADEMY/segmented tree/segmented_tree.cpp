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
vec ara,t;
void build(int node,int l,int r)
{
    if(l==r){
      t[node]=ara[l];
      return;
    }
    int leftN=node<<1;
    int rightN=(node<<1)+1;
    int mid=l+((r-l)>>1);
    build(leftN,l,mid);
    build(rightN,mid+1,r);
    t[node]=t[leftN]+t[rightN];


}
int rangeSum(int node,int i,int j,int l,int r)
{
     if(i>=l && j<=r)return t[node];
     if(j<l || i>r) return 0;
     
    int leftN=node<<1;
    int rightN=(node<<1)+1;
    int mid=i+((j-i)>>1);
    return rangeSum(leftN,i,mid,l,r)+rangeSum(rightN,mid+1,j,l,r);
}
void update(int node,int i,int j,int idx,int val)
{
    if(idx<i || idx>j)return;
    if(i==j && i==idx) {
      t[node]=val;
      return;
    }
    int leftN=node<<1;
    int rightN=(node<<1)+1;
    int mid=i+((j-i)>>1);
    update(leftN,i,mid,idx,val);
    update(rightN,mid+1,j,idx,val);
    t[node]=t[leftN]+t[rightN];
}

int main()
{

  int n,q,x,a,b;
  cin>>n>>q;
  ara.assign(n+1,0);
  t.assign(4*n+4,0);
  rep(i,1,n+1)cin>>ara[i];
  build(1,1,n);

  rep(i,0,q)
  {
      
      cin>>x>>a>>b;
      if(x==1)
      {
         update(1,1,n,a+1,b);
      }
      else
      {
        cout<<rangeSum(1,1,n,a,b)<<endl;
     }
  }

  
}
