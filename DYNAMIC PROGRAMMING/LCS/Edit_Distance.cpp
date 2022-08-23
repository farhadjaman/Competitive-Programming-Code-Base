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
       int n,m;
	   string s1,s2;
       cin>>s1>>s2;
	   n=s1.size();
	   m=s2.size();

	   vector<vec>dp(n+1,vec(m+1,0));
       

	   rep(i, 0, n+1)
	   rep(j, 0, m+1)
		   {
			   if(i==0) dp[i][j]=j;
			   if(j==0) dp[i][j]=i;
		   }
    rep(i, 1, n+1)
	rep(j, 1, m+1)
		  {
			  if(s1[i-1]==s2[j-1])
			    dp[i][j]=dp[i-1][j-1];
			  else
			    dp[i][j]=1+min({dp[i-1][j-1],dp[i][j-1],dp[i-1][j]});
		  }

		  cout<<dp[n][m]<<endl;
	    
	//    rep(i, 0, n+1)
	//    {
	// 	   rep(j, 0, m+1)
	// 	   {
	// 		   cout<<dp[i][j]<<" ";
	// 	   }
	// 	   cout<<endl;
		   
	//    }
}