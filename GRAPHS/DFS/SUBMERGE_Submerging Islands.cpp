#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(long long int i=a;i<n;i++)
#define brep(i,a)   for(long long int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<long long int>
#define vectorpair  vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         100001
#define MOD         1000000007
using ll =          long long int;

//..............................................//
int visited[MAX];
set<int> s1;
vec edges[MAX];
int InTime[MAX];
int LowTime[MAX];
int timer = 0;
void DFS(int node, int parent)
{
  visited[node] = 1;
  timer++;
  InTime[node] = LowTime[node] = timer;
  int totalchild = 0; //total child of source node
  for (auto child : edges[node])
  {
    if (child == parent)
      continue;
    if (visited[child]==0)
    {
      DFS(child, node);
      LowTime[node] = min(LowTime[node], LowTime[child]);
      if (LowTime[child] >= InTime[node] && parent != -1)
      s1.insert(node); //it's a cutpoint means if we reove this node we will get more than one cutpoint.
      totalchild++;
    }
    else
    {
      LowTime[node] = min(InTime[child], LowTime[node]);
    }
  }
  if (parent == -1 && totalchild > 1)
    s1.insert(node);
}
void find_Articulation_point(int numNodes, int numEdges)
{
  int a, b;
  rep(i, 0, numEdges)
  {
    cin >> a >> b;
    edges[a].push_back(b);
    edges[b].push_back(a);
  }

  for (int i = 1; i <= numNodes; i++)
  {
    if (!visited[i])
    {
      DFS(i, -1); //source node parent is always -1
    }
  }
  cout << s1.size() << endl;
  
}
int main()
{
  int numNodes, numEdges, a, b;

  while (1)
  {
    timer=0;
    s1.clear();
    for (int i = 1; i <= MAX; i++)
    {
      edges[i].clear();
      visited[i] = 0;
      InTime[i] = 0;
      LowTime[i] = 0;
    }
    cin >> numNodes >> numEdges;
    if (numNodes == 0 && numEdges == 0)
      break;
    else
      find_Articulation_point(numNodes, numEdges);
  }
}