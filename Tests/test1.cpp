//kosajaru's algo
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define all(x)      x.begin(),x.end()
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<int>
#define vectorpair  vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         9007
using ll = long long int;
vector <ll> Edges[MAX];
ll visited[MAX] = {0};
vector<pair<ll, ll>> order_list;
ll count1 = 0;


bool compare(const pair<ll,ll>& a,const pair<ll,ll>& b)
  {
      if(a.second==b.second)
           return a.first>b.second;
      return a.second>b.second;
  }


void dfs(ll node)
{
  count1++;
  visited[node] = 1;
  for (auto it : Edges[node])
  {
    if (visited[it] == 0)
      dfs(it);
  }
}

void solve(){
  ll nodes, numEdges, x, y;
  cin >> nodes >> numEdges;

  for (ll i = 0; i <= nodes; i++)
  {
    Edges[i].clear();
    visited[i] = 0;
  }

  rep(i, 0, numEdges)
  {
    cin >> x >> y;
    Edges[y].push_back(x);
  }


  for (ll i = 1; i <= nodes; i++) {
    dfs(i);
    order_list.push_back({i,count1});

    count1 = 0;
    for (ll j = 1; j <= nodes; j++) {
      visited[j] = 0;
    }
  }
  sort(order_list.begin(), order_list.end(),compare);
  ll i = 0;
  while (1)
  {
    cout << order_list[i].first << " ";

    if (order_list[i].second == order_list[i + 1].second && i + 1 < order_list.size())
      i++;
    else
      break;
  }
  order_list.clear();
  cout<<endl;
}
int main()
{
  Fast_Read;
  w(x)
  solve();


}

