#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        int x; cin>>x; while(x--)
#define pii         pair<int,int>
#define pll         pair<long long int,long long int>
#define vec         vector<int>
#define vectorpair  vector<pair<int,int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         100000
#define MOD         1000000007
#define endll       "\n"
using ll = long long int;
template <typename T>
void vecprint(vector<T>&v1){for(auto it:v1) cout<<it<<" ";cout<<endl;}
vector<int>edge[MAX];
vec vis(MAX,0);
vec current_cc;//current connected compnents;
bool cycle_detection(int node,int parent)
{
    bool isloop=false;
     vis[node]=1;
     current_cc.push_back(node);
     for(auto child:edge[node])
     {
         if(vis[child])
         {
             if(child!=parent) return true;
             else continue; 
         }
         isloop |= cycle_detection(child,node);

     }
     return isloop;
}

int main()
{
    int nodes,edges,x,y;
    cin>>nodes>>edges;
    rep(i,0,edges)
    {
       cin>>x>>y;
       edge[x].push_back(y);
       edge[y].push_back(x);
    }
    bool isloop=false;
    rep(i,0,MAX)
    {
       if(vis[i]==0)
       {
           isloop|=cycle_detection(i,-1);
       }
    }
    if(isloop)cout<<"Cycle Exist in the graph"<<endl;
    else cout<<"Loop Doesn't exists in the graph"<<endl;


}