#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)    for(long long int i=a;i<n;i++)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define Vector          vector<long long int>
#define Vectorpair      vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
using ll = long long int;
template<typename T>
//..............................................//
class GRAPH{
    map<T,list<T>>l;
public:
    void addEdge(int x,int y)
    {

        l[x].push_back(y);
        l[y].push_back(x);
    }
    void BFS(T src)
    {

        map<T,bool>visited;
        queue<T>q;
        q.push(src);
        visited[src]=true;
        while(!q.empty())
        {
           T node=q.front();
           q.pop();
           cout<<node<<" ";
           for(int neigbour:l[node])
           {
               if(!visited[neigbour])
               {
                   q.push(neigbour);
                   visited[neigbour]=true;//mark neighbour as true
               }
           }

        }

    }
};
int main()
{
    GRAPH<int>g;
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.BFS(0);

}
