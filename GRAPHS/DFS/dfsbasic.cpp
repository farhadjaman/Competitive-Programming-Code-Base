
#include<bits/stdc++.h>
using namespace std;
#define MAX 100000 //maximum node
vector <int> edges[MAX];
//vector <int> cost[MAX]; //parallel vector to store costs;
int visited[MAX]= {0};

void dfs(int v)
{
    visited[v]=1;//
    for(int i=0;i<edges[v].size();i++)
    {
        if(visited[edges[v][i]]==0)
        {
            dfs(edges[v][i]]);
        }
    }
    // for(auto it:edges[v])
    // {
    //     if(!visited[it])
    //         dfs(v);
    // }
}

int main()
{
    int numNodes, numEdges,x, y;
    cin>>numNodes>>numEdges;
    for (int i = 1; i <= numEdges; i++)
    {

        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
        // cost[x].push_back(1);
        // cost[y].push_back(1);
    }


    for(int i=1; i<=numNodes; i++)
    {
        //sort(edges[i].begin(),edges[i].end());//it will sort the array list
        cout<<"nodes connected with node "<<i<<endl;
        for(auto it:edges[i])
            cout<<it<<" ";
        cout<<endl;
    }


}
