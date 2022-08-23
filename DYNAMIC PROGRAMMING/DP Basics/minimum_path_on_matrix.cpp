//kosajaru's algo
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define all(x)      x.begin(),x.end()
#define vec         vector<int>
#define MAX         100000
#define MOD         1000000007
using ll = long long int;

int n, m, ara[100][100], inf = 1e9 + 7,mem[100][100];

int dp(int i, int j)
{
  if(mem[i][j]!=-1)return mem[i][j];
  if(i>=n || j>=m) return inf;
  if(i==m-1 and j==n-1)return ara[i][j];
  return mem[i][j]=ara[i][j] + min(dp(i + 1, j), dp(i, j + 1));
}

void path(int i,int j)
{
  cout<<i<<" "<<j<<endl;
  if(i==n-1  and j==m-1)return;
  int rightpath=dp(i,j+1);
  int downpath=dp(i+1,j);
  if(rightpath<=downpath)
    {
      path(i,j+1);
    }
    else
    {
      path(i+1,j);
    }
}
void solve()
{
  memset(mem,-1,sizeof mem);
  cin >> n >> m;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
    {
      cin >> ara[i][j];
    }
}

int main()
{
  solve();
  path(0,0);
}

