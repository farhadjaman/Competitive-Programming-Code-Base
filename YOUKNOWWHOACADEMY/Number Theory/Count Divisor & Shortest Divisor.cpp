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
vec numbers(104,0);
vec SPF(100,INT_MAX);
void count_divisor(){
  int n=100;
  for(int i=1;i<=n;i++)
  {
    for(int j=i;j<=n;j+=i)
    {
      numbers[j]++;
    }
  }
  vecprint(numbers);
  

}
void shortest_divisor()
{
  int n=100;
  SPF[0]=0;
  SPF[1]=1;
  for(int i=2;i<=n;i++)
  {
    for(int j=i;j<=n;j+=i)
    {
      SPF[j]=min(SPF[j],i);
    }
  }
  vecprint(SPF);
  //Finding the divisors of a number
  int x=91;
  vec result;
  while(x>1)
  {
    result.push_back(SPF[x]);
    x/=SPF[x];
  }
  cout<<endll;
  vecprint(result);
}
int32_t main()
{
  Fast_Read;
  auto st=clock();
  w(x)
  shortest_divisor();
  cerr<<1.0*(clock()-st)<<"ms"<<endll;
  return 0;
}