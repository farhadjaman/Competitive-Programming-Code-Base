//kosajaru's algo
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(long long int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<int>
#define vectorpair  vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         100000
#define MOD         1000000007
using ll = long long int;
vector <int> Edges[MAX];
vector <int> transposed[MAX];
int visited[MAX]={0};
vec order_list;//increasing nodes list respect to it outtime
vec scc;//strongly connected component;
void dfs(int node)
{
    visited[node] = 1;
    for (auto it : Edges[node])
    {
        if (visited[it]==0)
            dfs(it);
    }
    order_list.push_back(node);
}
void transposed_dfs(int node)
{
    visited[node] = 1;
    for (auto it : transposed[node])
    {
        if (!visited[it])
            transposed_dfs(it);
    }
    scc.push_back(node);
}

int main()
{
    int nodes, numEdges, x, y,count=1;;
    cin >> nodes >> numEdges;
    rep(i, 1, nodes+1)
    {
        Edges[i].clear();
        transposed[i].clear();
        visited[i] = 0;
        order_list.clear();
    }
    rep(i, 0, numEdges)
    {
        cin >> x >> y;
        Edges[x].push_back(y); //edge from x to y
        transposed[y].push_back(x);
    }
    rep(i, 1, nodes + 1)
    {
        if (visited[i]==0)
            dfs(i);
    }
    rep(i, 1, nodes+1)
    {
        visited[i] = 0;
    }
    reverse(all(order_list));//reverseing the order list because we will start travesing from the last component of the order list
    for(auto it: order_list)
    {
        
        if (!visited[it])
        {
            scc.clear();
            transposed_dfs(it);
            cout<<"number "<<count<<" strongly Connected Component"<< endl;
            for (auto it : scc)
                cout << it << " ";
            cout<< endl;
            count++;
        }
    }
}

