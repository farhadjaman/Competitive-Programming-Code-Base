//Permutation with lower case
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
int visited[10][10];
int Distance[10][10];
int dx[]={-2,-1,1,2,2,1,-1,-2};
int dy[]={1,2,2,1,-1,-2,-2,-1};
int targetX;
int targetY;
bool isvalid(int x,int y)
{
    if(x<1 || x>8 || y<1 || y>8 || visited[x][y]==1)
      return false;
    else
      return true;
}
int getX(char ch)
{
    return ch-'a'+1;
}
int BFS(int x,int y)
{
    
    queue<pair<int,int>>Q;
    Q.push({x,y});
    visited[x][y]=1;
    Distance[x][y]=0;
    if(x==targetX && y==targetY)
    {
        return Distance[x][y];
    }
    while(!Q.empty())
    {
        int currentX=Q.front().first;
        int currentY=Q.front().second;
        Q.pop();
        for(int i=0;i<8;i++)
        {
            if(isvalid(currentX+dx[i],currentY+dy[i]))
            {
                x=currentX+dx[i];
                y=currentY+dy[i];
                Distance[x][y]=Distance[currentX][currentY]+1;
                visited[x][y]=1;
                Q.push({x,y});
                if (x == targetX && y == targetY)
                {
                    return Distance[x][y];
                }
            }
        }
    }
    


}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int sourceX, sourceY;
        rep(i, 1, 9)
            rep(j, 1, 9)
                visited[i][j] = 0;

        char a, b;
        cin>>a>>b;
        sourceX=getX(a);
        sourceY=b-'0';
        cin>>a>>b;
        targetX=getX(a);
        targetY=b-'0';
        int steps=BFS(sourceX,sourceY);
        cout<<steps<<endl;


    }
    



}