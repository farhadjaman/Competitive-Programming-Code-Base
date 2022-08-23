//https://codeforces.com/contest/1559/problem/B

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
string s;
int n;
vector<vec>dp;
vector<vector<bool>>check1;
string ans;
int memo(int pos,int prev)
{
	if(pos <0) return 0;
    if(check1[pos][prev]!=0) return dp[pos][prev];
    
	if(s[pos]=='?')
	{
		int val1=memo(pos-1,1);
		int val2=memo(pos-1,2);
		dp[pos][prev]=min((prev==1)+val1,(prev==2)+val2);
	}
	else
	{
		int val=memo(pos-1,(s[pos]=='B'?1:2));
		if(s[pos]=='B')
		{
			dp[pos][prev]=(prev==1?1+val:val);
		}
		else if(s[pos]=='R')
		{
			dp[pos][prev]=(prev==2?1+val:val);
		}
		else
		{
			dp[pos][prev]=val;
		}
	}
	
    check1[pos][prev]=1;
	return dp[pos][prev];


}

void print(int pos,int prev)
{
	if(pos<0) return ;

	if(s[pos]=='?')
	{
		if((prev==1)+memo(pos-1,1)<(prev==2)+memo(pos-1,2))
		{
              ans+='B';
			  print(pos-1,1);
		}
		else
		{
			ans+='R';
			print(pos-1,2);
		}

	}
	else
	{

		ans+=s[pos];
		print(pos-1,(s[pos]=='B'?1:2));
	}
}
int main()
{
      int tc;
	  cin>>tc;
	  while(tc--)
	  {
		  cin>>n;
		  cin>>s;
		  dp.assign(n+1,vec(3,0));
		  check1.assign(n+1,vector<bool>(3,0));
		  print(n-1,0);
		  reverse(all(ans));
		  cout<<ans<<endl;
		  ans.clear();


	  }
}