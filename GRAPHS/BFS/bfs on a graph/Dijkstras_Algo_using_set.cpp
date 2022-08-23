#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<ll>
#define vectorpair  vector<pair<int, int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         10007
#define MOD         1000000007
#define endll       "\n"
using ll = long long int;
//template <typename T>
const ll MAXD = 1e17;
vector<vector<pair<ll,ll>>> edges;
vec dist;
vec dijkstra()
{

        set<pair<ll, ll>> s;
        dist[1] = 0;
        s.insert({0, 1});
        while (!s.empty())
        {
                auto it = s.begin();
                ll p = it->second;
                ll pdist = it->first;//parent_distance
                s.erase(it);
                if (dist[p] < pdist)
                        continue;
                for (auto child : edges[p])
                {

                        ll cnode = child.second;//cnode->child_node
                        ll cdist = child.first;//cdist->child_distance
                        if (pdist + cdist < dist[cnode])
                        {
                                auto f = s.find({dist[cnode], cnode});
                                if (f != s.end())
                                s.erase(f);
                                dist[cnode] = pdist + cdist;
                                s.insert({dist[cnode], cnode});
                        }
                }
        }
        return dist;
}

    int main()
    {
            Fast_Read;
            ll n, m,x,y,d;
            cin >> n >> m;
            edges.resize(n + 1);
            dist.resize(n + 1,MAXD);
            rep(i, 0, m)
            {
                    cin >> x >> y >> d;
                    edges[x].push_back({d, y});
            }
            
            dijkstra();
            for (int i = 1; i <= n; i++)
            {
                    cout << dist[i] << " ";
            }
            cout << endl;
    }