#include<bits/stdc++.h>
using namespace std;
#define MAX 100000 //maximum node
vector <int> edges[MAX];
int visited[MAX]= {0};
int inTime[MAX]={0}//time when we entered in a particular node
int outTime[MAX]={0}//time when we finished traveresing all the adjacency nodes of a node and returning back to its parent node;
int timer=1;
bool dfs(int v)
{
    visited[v]=1;
    inTIme[v]=timer++;//it will assign the value of timer in inTime array and Timer will increase for the next child node

    for(auto it:edges[v])
    {
        if(visited[it]==0)
        {
            checker=dfs(it);
        }


    }
    outTime[v]=timer++;//if node has no child left unvisited than we will put the timer value in outTime means the node has finished all its work
}

int main()
{
    int numNodes, numEdges;
    cin>>numNodes>>numEdges;
    int x, y;
    bool checker;
    for (int i = 1; i <= numEdges; i++)
    {


        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    checker=dfs(1,-1);

    cout<<checker<<endl;

    if(checker)
        cout<<"Graph is Cyclic"<<endl;
    else
        cout<<"Graph is not cyclic"<<endl;

    /*for(int i=0; i<numNodes; i++)
    {
        sort(edges[i].begin(),edges[i].end());//it will sort the array list
        cout<<"nodes connected with node "<<i<<endl;
        for(auto it:edges[i])
            cout<<it<<" ";
        cout<<endl;
    }*/


}


