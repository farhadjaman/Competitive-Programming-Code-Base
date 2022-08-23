#include<bits/stdc++.h>
using namespace std;
using namespace std;
#define MAX 100000 //maximum node
vector <int> edges[MAX];
int visited[MAX],Distance[MAX];//distance[]:distance of each node from source node

void bfs(int x)
{
  queue<int> queue1;
  queue1.push(x);
  visited[x]=1;
  Distance[x]=0;

  while(queue1.empty()==0)
  {
    int current=queue1.front();
    queue1.pop();
    for(auto child:edges[current])
    {
      if(visited[child]==0)
      {
        queue1.push(child);
        visited[child]=1;
        Distance[child]=Distance[current]+1;
      }
    }
  }
}

int main() {
  int numNodes, numEdges;
  cin >> numNodes >> numEdges;
  for (int i = 1; i <= numEdges; i++) {
    int x, y;
    cin >> x >> y;
    edges[x].push_back(y);
    edges[y].push_back(x);
  }
  bfs(1);

  for(int i=1;i<=numNodes;i++)
      {
         cout<<Distance[i]<<endl;     
      }
  /*for (int i = 0; i < 100000; i++) {
    if (!edges[i].empty()) {
      sort(edges[i].begin(), edges[i].end()); // it will sort the array list
      cout << "nodes connected with node " << i << endl;
      for (auto it : edges[i])
        cout << it << " ";
      cout << endl;
    }
  }*/
}
