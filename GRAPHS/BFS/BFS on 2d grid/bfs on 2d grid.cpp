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
int vis[1001][1001]= {0};
int  row,col;
char grid[1001][1001];
int dist[1001][1001]= {0};

int isvalid(int x,int y)
{

    if(vis[x][y]==1 || x<0 || y<0 || x>row || y>col )
        return 1;
    else
        return 0;
}
void BFS(int srcX,int srcY)
{
    int x[4]= {0,0,1,-1};
    int y[4]= {1,-1,0,0};
    queue<pair<int,int>>Qpair;
    Qpair.push({srcX,srcY});
    vis[srcX][srcY]=1;
    dist[srcX][srcY]=0;
    while(!Qpair.empty())
    {
        int currX=Qpair.front().first;
        int currY=Qpair.front().second;
        Qpair.pop();

        for(int i=0; i<4; i++)
        {
            if(isvalid(currX+x[i],currY+y[i])==0)
            {
                int newX=currX+x[i];
                int newY=currY+y[i];
                vis[newX][newY]=1;
                Qpair.push({newX,newY});
                dist[newX][newY]=dist[currX][currY]+1;
            }

        }
    }


}
void print_distance(int row,int col)
{

    rep(i,0,row)
    {
       rep(j,0,col)
       cout<<dist[i][j]<<" ";
       cout<<endl;
    }



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
        //char ara[n][m];
        //rep(i,0,n)
       // rep(j,0,m)
       // cin>>ara[i][j];
        BFS(0,0);
        print_distance(n,m);
        rep(i,0,n)
        rep(j,0,m)
         vis[i][j]=0;
        counter=0;
    }


}

