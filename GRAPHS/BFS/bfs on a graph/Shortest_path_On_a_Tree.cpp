//Shortest_Path and Shortest dist from source
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
int visited[MAX];
int dist[MAX];//it will give me the shortest dist from source node to n;
int parent[MAX];//it will give the parent of all the node
void bfs(int node,int numnodes)
{
    
    queue<int>q;
    visited[node]=1;
    parent[node]=-1;//there is no parent of source vartex so -1;
    dist[node]=0;//source vertex dist to itself is zero
    q.push(node);
    while(!q.empty())
    {
        int current=q.front();
        q.pop();
        for(auto child:edges[current])
        {
            if(!visited[child])
            {
                visited[child]=1;
                q.push(child);
                dist[child]=dist[node]+1;
                parent[child]=current;

            }
        }
    }
    //path till destination


}

int main()
{
    int x,y,numnodes,numedges;
    cin>>numnodes>>numedges;
    while(numedges--)
    {
         cin>>x>>y;
         edges[x].push_back(y);
         edges[y].push_back(x);
         
    }
    
    int source=0;
    bfs(source,numnodes);

    //now we will find the shortest path
    //lets take destination is 5
    int dest=5;
    if(visited[5]==0)
       cout<<"There is no path"<<endl;
    else
       {
           vec path;
           int x=dest;
           while(x!=-1)
           {
               path.push_back(x);
               x=parent[x];
           }
           reverse(all(path));
       }
       
}