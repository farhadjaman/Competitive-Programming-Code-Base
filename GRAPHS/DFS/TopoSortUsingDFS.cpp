//Tranjan's Algo using dfs
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(long long int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<int>
#define vectorpair  vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         100000
#define MOD         1000000007
using ll = long long int;
vector <int> Edges[MAX];
int visited[MAX]={0};
int n;
int sorted[MAX]={0};

void dfs(int node)
{
    visited[node]=1;
    for(auto child:Edges[node])
    {
        
        if(!visited[child])
        {
            dfs(child);

        }
    }
    sorted[n]=node;
    n--;

}
int main()
{
    int a,b,numnodes,numedges;
    cin>>numnodes>>numedges;
    n=numnodes;
    rep(i, 1, numnodes+1)
    {
        Edges[i].clear();
        visited[i] = 0;
        sorted[i]=0;

    }
    rep(i,0,numedges)
    {
        cin>>a>>b;
        Edges[a].push_back(b);
    }
    rep(i,1,numnodes+1)
     if(!visited[i])
     {
         dfs(i);
     }

     rep(i,1,numnodes+1)
      cout<<sorted[i]<<" ";
    
    cout<<endl;

}