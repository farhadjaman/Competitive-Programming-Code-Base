//Basically we will be given an string we have to delete minimum number of charecter to
//make it a palindrome so basically what we have to do i s we have to find the longest
// subsequence palindrome length and we have to delete it from the total length of the 
// subsequence
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
        int n, a;
        cin >> n;
        vec v1(n), v2(n);
        int dp[n+1][n+1];
        rep(i, 0, n)
        {
            cin >> a;
            v1[i] = a;
            v2[i]=a;
        }
        reverse(all(v2));


        rep(i,0,n+1)
        rep(j,0,n+1)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }
        }
        rep(i,1,n+1)
        rep(j,1,n+1)
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
        cout<<n-dp[n][n]<<endl;
    }
}