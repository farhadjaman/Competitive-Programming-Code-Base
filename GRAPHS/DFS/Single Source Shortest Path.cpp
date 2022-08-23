#include<bits/stdc++.h>
using namespace std;
#define MAX 100000 //maximum node
int visited[MAX]= {0};
int distanc[MAX]= {0};
vector <int> edges[MAX];
vector <int> cost[MAX]; //parallel vector to store costs;

void dfs(int v,int dist)
{
    visited[v]=1,distanc[v]=dist;

    for(auto it:edges[v])
    {

        if(visited[it]==0)
            dfs(it,dist+1);



    }
}

int main()
{
    int x, y,numNodes, numEdges,count1=0;
    cin>>numNodes>>numEdges;

    for (int i = 1; i <= numEdges; i++)
        cin>>x>>y,edges[x].push_back(y),edges[y].push_back(x);

    dfs(1,0);//shortest path from node 1

    for(int i=1; i<=numNodes; i++)
    cout<<distanc[i]<<" ";

    cout<<endl;


}




/*for(int i=0;i<numNodes;i++)
      {
          sort(edges[i].begin(),edges[i].end());//it will sort the array list
          cout<<"nodes connected with node "<<i<<endl;
          for(auto it:edges[i])
              cout<<it<<" ";
          cout<<endl;
      }*/

