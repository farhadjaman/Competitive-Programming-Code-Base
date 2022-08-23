#include<bits/stdc++.h>
using namespace std;
/*class graph
{
    int nodes;
    //Array of list
    list<int>*l;

public:
    graph(int nodes)
    {

        this->nodes=nodes;
        l=new list<int>[nodes];

    }
    void addedges(int x,int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void printadjlist()
    {
        for(int i=0;i<nodes;i++)
        {
            cout<<"nodes connected with node "<<i<<endl;
            for(auto it:l[i])
                cout<<it<<" ";
            cout<<endl;
        }
    }

};
int main()
{
    graph ob1(4);
    ob1.addedges(0,1);
    ob1.addedges(1,2);
    ob1.addedges(0,2);
    ob1.addedges(2,3);

    ob1.printadjlist();
}
*/
//using vector

using namespace std;
#define MAX 100000 //maximum node
vector <int> edges[MAX];
vector <int> cost[MAX];//parallel vector to store costs;



int main() {
  int numNodes, numEdges;
cin>>numNodes>>numEdges;
  for (int i = 1; i <= numEdges; i++) {
    int x, y;
    cin>>x>>y;
    edges[x].push_back(y);
    edges[y].push_back(x);
    cost[x].push_back(1);
    cost[y].push_back(1);
  }
  for(int i=0;i<100000;i++)
        {
            if(!edges[i].empty())
            {
            sort(edges[i].begin(),edges[i].end());//it will sort the array list
            cout<<"nodes connected with node "<<i<<endl;
            for(auto it:edges[i])
                cout<<it<<" ";
            cout<<endl;
            }

        }

}
