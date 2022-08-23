#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001 //maximum node
vector <int> edges[MAX];
int visited[MAX],Distance[MAX],level[MAX];//distance[]:distance of each node from source node
int count1=0;
void bfs(int x)
{
  queue<int> queue1;
  queue1.push(x);
  visited[x]=1;
  Distance[x]=0;
  level[Distance[x]]++;
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
        level[Distance[child]]++;
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
  int queries,x,dist;
  cin>>queries;
  while(queries--)
  {
    cin>>x>>dist;
    bfs(x);
    cout<<level[dist]<<endl;
    for (int i =0; i <=numNodes; i++) {
         visited[i]=0,Distance[i]=0,level[i]=0;
    }


  }



}
