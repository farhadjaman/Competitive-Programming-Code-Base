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

int main()
{
  int n,count1=0,total=1;
  vec divs;
  cin>>n;
  for(int i=2;i*i<=n;i++)
  {
    if(n%i==0)
    {
      count1=1;
      while(n%i==0)
      {
        n/=i;
        count1++;
      }
      total*=(pow(i,count1)-1)/(i-1);
    }
  }
  if(n>1)total*=(pow(n,2)-1)/(n-1);
  cout<<total<<endl;
  
}