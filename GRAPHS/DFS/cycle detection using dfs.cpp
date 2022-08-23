#include<bits/stdc++.h>
using namespace std;
#define MAX 100000 //maximum node
vector <int> edges[MAX];
int visited[MAX]= {0};
bool checker;
bool dfs(int v,int parent)
{
    visited[v]=1;
    for(auto it:edges[v])
    {
        if(visited[it]==0)
        {
            checker=dfs(it,v);
            if(checker==true)
                return true;
        }
        else
        {
            cout<<it<<" "<<parent<<endl;
            if(it!=parent)
                return true;
        }


    }
    return false;
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

