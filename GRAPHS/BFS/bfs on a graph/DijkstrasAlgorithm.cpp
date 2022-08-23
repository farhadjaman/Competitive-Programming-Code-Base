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
#define MOD         1000000007
#define endll       "\n"
using ll = long long int;
const int MAX=1e7;
vec dist;//distance of each node from source
vector<pair<int,int>>edges[MAX];
typedef pair<int, int> Max;
struct Compare {
    bool operator()(Max a, Max b) {
        return a.second < b.second;
    }
};
void dijkstras(int node)
{
    priority_queue<pair<int,int>,vectorpair,Compare >pq;
    int currnode,W;
    //currnode->current node
    //W->current node distance
    
    pq.push({node,0});//0 is distance of the first node
    dist[1]=0;
    while(!pq.empty())
    {
        currnode=pq.top().first;
        W=pq.top().second;
        pq.pop();
        if(W>dist[currnode])continue; //if current node distance is greater than 
                                      //the dist array current node distance then we won't process that node
        
        for(auto child:edges[currnode])
        {
            if(W+child.second<dist[child.first])
            {
                dist[child.first]=W+child.second;
                pq.push({child.first,dist[child.first]});
            }
        }
    }
}
int main()
{
      int n,m,x,y,w;
      cin>>n>>m;//n-number of nodes/m-number of edges
      dist.resize(n+1,MAX);
      while(m--)
      {
           cin>>x>>y>>w;
           edges[x].push_back({y,w});
          // edges[y].push_back({x,w});
      }
      dijkstras(1);
      rep(i,1,dist.size())
      {
          cout<<dist[i]<<" ";
      }
      cout<<endl;

}