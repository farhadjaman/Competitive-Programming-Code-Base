#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        int x; cin>>x; while(x--)
#define pii         pair<int,int>
#define pll         pair<long long int,long long int>
#define vec         vector<int>
#define vectorpair  vector<pair<int,int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         10007
#define MOD         1000000007
#define endll       "\n"
using ll = long long int;
template <typename T>
void vecprint(vector<T>&v1) {for (auto it : v1) cout << it << " "; cout << endl;}
//..............................................//
int mem[MAX];
int dp(ll i,ll n )
{
     //cout<<i<<endl;
     if(i>=n){
      return i-n;
   }
   if(mem[i]!=-1)return mem[i];
     if(i==2){
      return n/2+(n%2?1:0);
     }
     
    if(i<=0)return INT_MAX;
    ll cross=dp(i*2,n);
    ll minus=dp(i-1,n);
   // cout<<i<<" "<<cross<<" "<<minus<<endl;
     return mem[i]=1+min(cross,minus);
}


void solve()
{
   int i, n;
   cin>>i>>n;
   for(int i=0;i<MAX;i++){
      mem[i]=-1;
   }
   cout<<dp(i,n)<<endl;


}
int main()
{
   solve();
}

