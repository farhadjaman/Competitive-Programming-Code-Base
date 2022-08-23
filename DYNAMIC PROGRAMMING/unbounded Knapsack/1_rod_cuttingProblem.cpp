// Given a rod of length n inches and an array of prices that 
// includes prices of all pieces of size smaller than n.
// Determine the maximum value obtainable by cutting up the
// rod and selling the pieces
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

int main() {
    Fast_Read;
    int tc;
    cin>>tc;
    while(tc--)
    {
        int length;//length of the rod
        cin>>length;
        int price[length];//prices of the pieces of n length
        rep(i,0,length)
        {
              cin>>price[i];
        }
        int dp[length+1][length+1];
        rep(i,0,length+1)
        rep(j,0,length+1)
        if(i==0 || j==0)dp[i][j]=0;

        rep(i,1,length+1)
        rep(j,1,length+1)
        {
            if(i<=j)
            {
                dp[i][j]=max((price[i-1]+dp[i][j-i]),dp[i-1][j]);
            }
            else dp[i][j]=dp[i-1][j];

        }
        rep(i,0,length+1)
        {rep(j,0,length+1)
        {
            cout<<dp[i][j]<<" ";
        }cout<<endl;
        }

        cout<<dp[length][length]<<endl;
    }
}