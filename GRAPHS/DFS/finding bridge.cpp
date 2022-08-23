#include<bits/stdc++.h>
using namespace std;
#define MAX 100000 //maximum node
vector <int> edges[MAX];
int visited[MAX]= {0};
int in_time[MAX]={0},low[MAX]={0};//in_time is the time when we are visiting a nodes
                                      //low o a node is the minimum between in_time of the parent or in_time of the anscestor(not parent)

int timer=0;//it will set the intime and low

void dfs(int node,int parent)
{
    visited[node]=1;
    in_time[node]=timer;
    low[node]=timer;
    timer++;
    for(auto child:edges[node])
    {
       if(child==parent) continue;
        if(visited[child]==1)
        {
          //node to child is a back edge(back edge is kind of extra edge that connect two nodes those are ancestor(not parent node) and child)

          low[node]=min(low[node],in_time[child]);
        }
        else
        {
          dfs(child,node);
          //node to child is a forward edge that means child has been never visited before and this edge is the only edge that connects node and child
          if(low[child]>in_time[node])
            cout<<node<<" to "<<child<<"edge is a bridge\n";
          low[node]=min(low[node],low[child]);//node low will take the minimum low from its adjacent nodes,


        }

    }
}

int main()
{
    int numNodes, numEdges,x, y;;
    cin>>numNodes>>numEdges;
    for (int i = 1; i <= numEdges; i++)
    {

        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);

    }
    dfs(1,-1);

    /*for(int i=1; i<=numNodes; i++)
    {
        //sort(edges[i].begin(),edges[i].end());//it will sort the array list
        cout<<"nodes connected with node "<<i<<endl;
        for(auto it:edges[i])
            cout<<it<<" ";
        cout<<endl;
    }*/
    timer=0;
    for(int i=0;i<MAX;i++)
       edges[i].clear(),visited[i]=0;



}
