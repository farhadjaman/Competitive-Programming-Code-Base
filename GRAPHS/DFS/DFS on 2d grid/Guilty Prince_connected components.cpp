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
char grid[20][20];
int isvalid(int x,int y)
{

   if(vis[x][y]==1 || x<0 || y<0 || x>=row || y>=col || grid[x][y]=='#')
        return 1;
   else return 0;
}
void dfs(int x1,int y1)
{
    counter++;//counts connected components
    vis[x1][y1]=1;
    if(!isvalid(x1,y1+1))
        dfs(x1,y1+1);
    if(!isvalid(x1,y1-1))
        dfs(x1,y1-1);
    if(!isvalid(x1+1,y1))
        dfs(x1+1,y1);
    if(!isvalid(x1-1,y1))
        dfs(x1-1,y1);
}
int main()
{
    Fast_Read;
    int tc;
    cin>>tc;
    for(int case1=1; case1<=tc; case1++)
    {


        int n,m,x1,y1;
        cin>>m>>n;
        row=n;
        col=m;
        char ara[n][m];
        rep(i,0,n)
        rep(j,0,m)
        {
           cin>>ara[i][j];
           grid[i][j]=ara[i][j];
           if(ara[i][j]=='@')
               x1=i,y1=j;
        }

        dfs(x1,y1);
        cout<<"Case "<<case1<<": "<<counter<<endl;
        rep(i,0,20)
        rep(j,0,20)
        vis[i][j]=0;
        counter=0;
        row=0,col=0;
    }


}


