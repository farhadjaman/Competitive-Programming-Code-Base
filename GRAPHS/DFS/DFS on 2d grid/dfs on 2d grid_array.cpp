#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(long long int i=a;i<n;i++)
#define brep(i,a)  for(long long int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<long long int>
#define vectorpair  vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         1000000007
#define MOD         1000000007
using ll = long long int;
//..............................................//
int counter=0;
int vis[20][20]= {0};
int  row,col;
int isvalid(int x,int y)
{

   if(vis[x][y]==1 || x<0 || y<0 || x>row || y>col )
        return 1;
        else return 0;
}
void dfs(int x,int y)
{
    counter++;//counts connected components
    vis[x][y]=1;
    if(!isvalid(x,y+1))
        dfs(x,y+1);
    if(!isvalid(x,y-1))
        dfs(x,y-1);
    if(!isvalid(x+1,y))
        dfs(x+1,y);
    if(!isvalid(x-1,y))
        dfs(x-1,y);
}
int main()
{
    Fast_Read;
    int tc;
    cin>>tc;
    for(int case1=1; case1<=tc; case1++)
    {


        int n,m;
        cin>>n>>m;

        row=n-1;
        col=m-1;
        char ara[n][m];
        rep(i,0,n)
        rep(j,0,m)
        cin>>ara[i][j];

        dfs(0,0);
        cout<<counter<<endl;
        vis[20][20]= {0};
        counter=0;
    }


}

