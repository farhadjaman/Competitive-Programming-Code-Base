#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<long long>
#define vectorpair  vector<pair<int, int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         1000007
#define MOD         1000000007
#define endl       "\n"
using ll = long long int;
template <typename T>
void vecprint(vector<T>&v1){for(auto it:v1) cout<<it<<" ";cout<<endl;}
//----------------------------------------------------------------------//

void solve()
{
    Fast_Read;
    vector<vec>dp;
    dp.assign(8,vec(MAX,0));
    //ll dp[8][MAX]={0};
    rep(j,0,8)
    rep(i,0,MAX)
    {
      if(i==0)
      {
          dp[j][i]=1;
      }
    }
    rep(i,1,MAX)
    rep(j,0,8)
    {
        if(j==0 || j==1 || j==4 || j==5 || j==6)
        {
            dp[j][i]=((((dp[0][i-1]%MOD+dp[2][i-1]%MOD)%MOD+dp[4][i-1]%MOD)%MOD+dp[5][i-1]%MOD)%MOD+dp[6][i-1]%MOD)%MOD;
        }
        
        else
        {
            dp[j][i]=((dp[1][i-1]%MOD+dp[3][i-1]%MOD)%MOD+dp[7][i-1]%MOD)%MOD;
        }
    }
    int n,x;
    cin>>n;
    rep(i,0,n)
    {
        cin>>x;
        cout<<(dp[1][x-1]%MOD+dp[3][x-1]%MOD)%MOD<<endl;
    }
    


}
int main()
{
   
        solve();
    
}