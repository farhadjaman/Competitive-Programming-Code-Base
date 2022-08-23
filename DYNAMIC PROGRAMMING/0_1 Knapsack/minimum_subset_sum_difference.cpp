//we have given an array and a value.So we have to divide the array into two subset
//such that there sum difference is minimum return the minumum value
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
#define MAX         1010
#define MOD         1000000007
#define endll       "\n"
using ll = long long int;

int main()
{
    Fast_Read;
    int tc;
    cin >> tc;
    for(int case1=1; case1<=tc; case1++)
    {
        int x,n,value,totalsum=0,subset_sum;
        cin>>n;
        vec ara(n);
        
        rep(i,0,n)
        {
            cin>>x;
            ara[i]=x;
            totalsum+=x;
        }
        value=(totalsum+value)/2;
        int dp[i+1][value+1];
        rep(i,0,n+1)
        rep(j,0,value+1)
        {
            if(i==0) dp[i][j]=0;
            if(j==0) dp[i][j]=1;
        }
        rep(i,1,n+1)
        rep(i,1,value+1)
        {
            if(ara[i-1]<=j)
            dp[i][j]=dp[i-1][j-ara[i-1]] || dp[i-1][j];
            else
            dp[i][j]=dp[i-1][j];

        }

        rep(j,0,value)
         {
             if(dp[n][j]==1)
              subset_sum=j;
         }
         cout<<"minimum difference :"<<totalsum-(2*subset_sum)<<endl;
    }
}
