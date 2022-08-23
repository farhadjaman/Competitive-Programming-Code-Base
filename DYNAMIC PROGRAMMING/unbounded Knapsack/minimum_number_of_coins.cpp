//minimum number of coins we need to make a sum
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<int>
#define vectorpair  vector<pair<int, int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         1000
#define MOD         1000000007
#define endll       "\n"
using ll = long long int;

int main()
{
    int n,sum;
    cin>>n>>sum;
    int coins[n];
    rep(i,0,n)
    cin>>coins[i];

    int dp[n+1][sum+1];
    rep(i,0,n+1)
    rep(j,0,sum+1)
    {
        if(i==0) dp[i][j]=INT_MAX-1;
        if(j==0) dp[i][j]=0;
        if(i==1)
        {
            if(j%coins[i-1]==0) dp[i][j]=j/coins[i-1];
            else dp[i][j]=INT_MAX-1;
        }
    }
    rep(i,2,n+1)
    rep(j,1,sum+1)
    {
        if(coins[i-1]<=j)
        {
            dp[i][j]=min(dp[i][j-coins[i-1]]+1,dp[i-1][j]);
        }
        else
        {
            dp[i][j]=dp[i-1][j];
        }
    }

    rep(i,0,n+1)
    // {rep(j,0,sum+1)
    // {
    //       cout<<dp[i][j]<<" ";
    // }cout<<endl;}
    cout<<dp[n][sum]<<endll;


}