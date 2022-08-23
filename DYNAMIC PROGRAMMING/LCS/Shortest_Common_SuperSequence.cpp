//we will be given two string we have to merge the two string and create a shortest sequence
//so that both of the string is present at the sequence 
//for example "geek" and "eke" we can create a shortest super sequence like "geeke"
//both geek and eke is present at the sequence
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        int x; cin>>x; while(x--)
#define vec         vector<int>
#define vectorpair  vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         1000000007
#define mod         1000000007
#define endl       "\n"
using ll = long long int;

//..............................................//
int main()
{
    w(x)
    {
        int n, m, a;
        cin >> n >> m;
        vec v1(n), v2(m);
        int dp[n+1][m+1];
        rep(i, 0, n)
        {
            cin >> a;
            v1[i] = a;
        }

        rep(i, 0, m)
        {
            cin >> a;
            v2[i] = a;
        }

        rep(i,0,n+1)
        rep(j,0,m+1)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }
        }
        rep(i,1,n+1)
        rep(j,1,m+1)
        {
            if(v1[i-1]==v2[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
        cout<<dp[n][m]<<endl;
    }
}