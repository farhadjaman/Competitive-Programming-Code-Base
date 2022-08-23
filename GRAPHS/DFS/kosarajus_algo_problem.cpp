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
#define MAX         100001
#define MOD         1000000007
using ll = long long int;
vector<int> Edges[MAX];
vector<int> transposed[MAX];
int visited[MAX] = {0};
vec order_list;
vec scc;      
void dfs(int node)
{

    visited[node] = 1;
    for (auto it : Edges[node])
    {
        if (visited[it] == 0)
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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, x, y, count = 0;
        cin >> n;
        int ara[n];
        rep(i, 1, n + 1)
        {
            Edges[i].clear();
            transposed[i].clear();
            visited[i] = 0;
            order_list.clear();
        }
        rep(i, 0, n)
        {
            cin >> ara[i];
        }
        rep(i, 0, n)
        {
            x = i + 1;
            y = ((i + ara[i] + 1) % n) + 1;
            Edges[x].push_back(y);
            transposed[y].push_back(x);
        }

        rep(i, 1, n + 1)
        {

            if (visited[i] == 0)
                dfs(i);
        }
        rep(i, 1, n + 1)
        {
            visited[i] = 0;
        }
        reverse(all(order_list));
        for (auto it : order_list)
        {

            if (!visited[it])
            {
                scc.clear();
                transposed_dfs(it);
                if (scc.size() == 1 && scc[0] != Edges[scc[0]][0])
                    continue;
                count += scc.size();
            }
        }
        cout << count << endl;
    }
}
