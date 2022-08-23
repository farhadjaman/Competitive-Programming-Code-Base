#include<bits/stdc++.h>
using namespace std;
#define MAX 100000 //maximum node
int visited[MAX]= {0};
vector <int> edges[MAX];
vector <int> cost[MAX]; //parallel vector to store costs;

void dfs(int v)
{
    visited[v]=1;
    for(auto it:edges[v])
    {

        if(visited[it]==0)
            dfs(it);



    }
}

int main()
{
    int x, y,numNodes, numEdges,count1=0;
    cin>>numNodes>>numEdges;

    for (int i = 1; i <= numEdges; i++)
        cin>>x>>y,edges[x].push_back(y),edges[y].push_back(x);

    for(int i=1; i<=numNodes; i++)
    {
        if(visited[i]==0)
        {
            count1++;
            dfs(i);

        }

    }
    //for(int i=1; i<=numNodes; i++)
        //cout<<visited[i]<<" ";
        //cout<<endl;

        cout<<count1<<endl;


    /*for(int i=0;i<numNodes;i++)
          {
              sort(edges[i].begin(),edges[i].end());//it will sort the array list
              cout<<"nodes connected with node "<<i<<endl;
              for(auto it:edges[i])
                  cout<<it<<" ";
              cout<<endl;
          }*/


}

