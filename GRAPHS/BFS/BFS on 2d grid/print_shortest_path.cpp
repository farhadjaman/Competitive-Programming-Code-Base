#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(long long int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<long long int>
#define vectorpair  vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         100000
#define MOD         1000000007
using ll = long long int;
int dist[10][10];
int vis[10][10];
int parentx[10];
int parenty[10];
map<pair<int,int>,pair<int,int>>mp;
int desx,desy;
int isvalid(int x,int y)
{

    if(vis[x][y]==1 || x<0 || y<0 || x>8 || y>8)
        return 0;
    else
        return 1;
}

void SearchDest(int x,int y)
{
    int dx[8]= {0,0,1,-1,1,-1,1,-1};
    int dy[8]= {1,-1,0,0,1,-1,-1,1};
    queue<pair<int,int>>q;
    dist[x][y]=0;
    mp[{x,y}]=make_pair(-1,-1);
    vis[x][y]=1;
    q.push({x,y});
    while(!q.empty())
    {
        int currx=q.front().first;
        int curry=q.front().second;
        q.pop();
        rep(i,0,8)
        {
            if(isvalid(currx+dx[i],curry+dy[i]))
            {
                q.push({currx+dx[i],curry+dy[i]});
                dist[currx+dx[i]][curry+dy[i]]=dist[currx][curry]+1;
                vis[currx+dx[i]][curry+dy[i]]=1;
                mp[{currx+dx[i],curry+dy[i]}]=make_pair(currx,curry);
            }
        }
    }

}


int main()
{
   
         rep(i,0,10)
         {
             rep(j,0,10)
             {
                dist[i][j]=0;
                vis[i][j]=0;
             }
             
         }
         int srcx,srcy;
         string s1,d1;
         vectorpair vp1;
         pair<int,int>p1;
         char x;
         cin>>s1>>d1;

         srcx=(s1[0]-96);
         srcy=s1[1]-'0';
         desx=(d1[0]-96);
         desy=d1[1]-'0';

         cout<<srcx<<" "<<srcy<<endl;
         cout<<desx<<" "<<desy<<endl;
        SearchDest(srcx,srcy);
   
        cout<<dist[desx][desy]<<endl;
        int x1=desx;
        int y1=desy;
        while(x1!=-1 && y1!=-1)
        {
            vp1.push_back({x1,y1});
            p1=mp[{x1,y1}];
            x1=p1.first;
            y1=p1.second;
            
        }
        for(auto it:vp1)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }

    }