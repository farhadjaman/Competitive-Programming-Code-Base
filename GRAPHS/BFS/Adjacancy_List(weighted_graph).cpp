#include<bits/stdc++.h>
using namespace std;
class edge
{
    private:
    int node,weight;
    public:
    edges(int id,int wt)
    {
        this->node=id;
        this->weight=wt;
    }
    int getnode()
    {
        return node;
    }
    int getweight()
    {
        return weight;
    }
};
int main()
{
    int totalnode,node1,node2,weight;
    ifstream input("test.txt");
    //we can set condition to check if the file is loaded or not
    input>>totalnode;
    vector<list<edge>>edges(totalnode);
    while(input>>node1>>node2>>weight)
    {
        edges[node1-1].push_back(edge(node2,weight));//stat from node zero thats why 1 --
        
    }
    for(int i=0;i<edges.size();i++)
    {
        cout<<i+1<<" ";//start from node 1 (+1 because we subtract -1 before)
        list<edge>li=edges[i];
        list<edge>::iterator list_it;
        for(list_it=li.begin();list_it<li.end();list_it++)
        {
            cout<<(*list_it).getnode()<<" "<<(*list_it).getweight()<<endl;
        }
        cout<<endl;
    }
    return 0;
}