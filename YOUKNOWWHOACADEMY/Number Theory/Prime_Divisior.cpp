//FInd the prime divisor of a number
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        int x; cin>>x; while(x--)
#define pii         pair<int,int>
#define pll         pair<ll,ll>
#define vec         vector<ll>
#define vectorpair  vector<pll>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         1000000007
#define MOD         1000000007
#define endll       "\n"
using ll = long long int;
template <typename T>
void vecprint(vector<T>&v1) {for (auto it : v1) cout << it << " "; cout << endl;}
//------------------------------------------------------------//
void solve(){

  int n;
  vec divs;
  cin>>n;
  for(int i=2;i*i<=n;i++)
  {
    if(n%i==0)
    {
      divs.push_back(i);
      while(n%i==0)
      {
        n/=i;
      }
    }
  }
  if(n>1)divs.push_back(n);
  vecprint(divs);
  
}

int main()
{
  w(x)
  solve();
  
}