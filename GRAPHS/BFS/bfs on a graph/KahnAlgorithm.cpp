#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(long long int i=a;i<n;i++)
#define brep(i,a)  for(long long int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<long long int>
#define stac         stack<int>
#define vectorpair  vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         10007
#define MOD         100000000
using ll = long long int;
//..............................................//
vec edges[MAX];
int inDegree[MAX];//it will store how many adjacent nodes are connect with a node

void kahn(int numNodes)
{
  queue<int>q1;
  vec result;//topolocially sorted nodes
  for(int i=1;i<=numNodes;i++)
     if(inDegree[i]==0)
         q1.push(i);
  while(q1.empty()==0)
  {
     int current=q1.front();
     q1.pop();
     result.push_back(current);
     for(auto child:edges[current])
     {
       inDegree[child]--;
       if(inDegree[child]==0)
       {
         q1.push(child);
       }
       
     }
     
  }
  cout<<"Top sort for the graph is : ";

     for(auto it:result)
       cout<<it<<" ";
}

int main()
{
  int numNodes,numEdges,a,b;
  cin>>numNodes>>numEdges;
  rep(i,0,numEdges)
  {
    cin>>a>>b;
    edges[a].push_back(b);//as it is a directed graph.
    inDegree[b]++;//how many adjacent node it directed toward node b.
  }
  kahn(numNodes);
}