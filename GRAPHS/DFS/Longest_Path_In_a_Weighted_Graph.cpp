#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        int x; cin>>x; while(x--)
#define vec         vector<int>
#define vectorpair  vector<pair<int,int>>
#define Fast_Read   ios_base::sync_wchildh_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         30000
#define MOD         1000000007
using ll = long long int;
//..............................................//
vec edges[MAX];
map<pair<int,int>,int>mp;
vec vis;
int max1=-1;
int maxnode;
void dfs(int node,int weight)
{

    if(weight>max1)
    {
        max1=weight;
        maxnode=node;
    }   
    vis[node]=1;
    for(auto child:edges[node])
    {
        if(!vis[child])
        {

            int total=weight+mp[{child,node}];

            dfs(child,total);
        }
        
    }

}

int main()
{
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++){
        ll x,y,n,maximum,weight;
    cin>>n;
    vis.resize(n+1,0);
    rep(i,0,n-1)
    {
        cin>>x>>y>>weight;
        edges[x].push_back(y);
        edges[y].push_back(x);
        mp[{x,y}]=weight;
        mp[{y,x}]=weight;
    }
    dfs(0,0);
    max1=-1;
    rep(i,0,n+1) vis[i]=0;
    dfs(maxnode,0);
    cout<<"Case "<<t<<": "<<max1<<endl;

    }
    

}



