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
#define MAX         10007
#define MOD         1000000007
#define endl       "\n"
using ll = long long int;
int mem[MAX][MAX];
int vis[MAX][MAX];
int recur(vec &ara1,vec &ara2,int n,int m)
{
    if(n==0 || m==0) return 0;
    
    if(vis[n][m]==1) return mem[n][m];

    if(ara1[n-1]==ara2[m-1])
    {
        vis[n][m]=1;
        mem[n][m]=1+recur(ara1,ara2,n-1,m-1);
    }
    else
    {
        vis[n][m]=1;
        mem[n][m]=0;
    }
          return mem[n][m];
}

int main()
{
  
        int n, m, a;
        cin >> n >> m;
        vec v1(n), v2(m);

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

        cout<<recur(v1,v2,n,m);

}
