//Advance binery search 1
//https://www.spoj.com/problems/EKO/
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<ll>
#define vectorpair  vector<pair<int, int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MOD         100000007
#define endll       "\n"
using ll = long long int;
vec ara;
ll n,m;
bool isheight(int h)
{
    ll total=0;
    rep(i,0,n)
    {
        total+=ara[i]-h>0?ara[i]-h:0;
    }
    return total>=m;
}
int main()
{
      cin>>n>>m;
      ara.assign(n,0);
      rep(i,0,n)
      {
        cin>>ara[i];
      }
      int low=0,high=1e9;
      int mid;
      while(high-low>1)
      {
          mid=(high+low)/2;
          if(isheight(mid))
          {
              low=mid;
          }
          else
          {
              high=mid;
          }
          cout<<high<<" "<<low<<endl;
      }
     if(isheight(high))
     {
         cout<<high<<endl;
     }
     else cout<<low<<endl;

}