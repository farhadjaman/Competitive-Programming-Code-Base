#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        int x; cin>>x; while(x--)
#define pii         pair<int,int>
#define pll         pair<ll,ll>
#define vec         vector<int>
#define vectorpair  vector<pll>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         1000000007
#define MOD         1000000007
#define endll       "\n"
using ll = long long int;
template <typename T>
void vecprint(vector<T>&v1) {for (auto it : v1) cout << it << " "; cout << endl;}
//------------------------------------------------------------//
int GCD(int a,int b)
{
   if(a==0)return b;
   if(b==0)return a;
   if(b>a)swap(a,b);
   GCD(a%b,b);

}
int32_t main()
{
  Fast_Read;
  int a,b;
  cin>>a>>b;
  cout<<GCD(a,b);
  return 0;
}