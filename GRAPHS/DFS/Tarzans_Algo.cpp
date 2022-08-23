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
stack<int>s1;
int on_stack[MAX]={0};
int in_time[MAX]={0};
int low_link[MAX]={0};
int timer=1;
vec scc;
int countscc=0;

void dfs(int node)
{
    visited[node]=1;
    on_stack[node]=1;
    in_time[node]=low_link[node]=timer++;
    s1.push(node);
    for(auto child:Edges[node])
    {
        
        if(visited[child]==1 && on_stack[child]==1)
        {
            low_link[node]=min(low_link[node],in_time[child]);
        }
        else
        {
            dfs(child);
            if(on_stack[child])
            low_link[node]=min(low_link[node],low_link[child]);
        }
    }
    
    if(in_time[node]==low_link[node])
    {
        countscc++;
        while(1)
        {
            cout<<s1.top()<<" ";
            scc.push_back(s1.top());
            on_stack[s1.top()]=0;
            s1.pop();
            if(s1.top()== node)
            break;
        }
        
        // for(auto it :scc)
        //  cout<<it<<" ";
        cout<<endl;
        
        scc.clear();

    }
}
int main()
{
    int a,b,numnodes,numedges;
    cin>>numnodes>>numedges;
    rep(i, 1, numnodes+1)
    {
        Edges[i].clear();
        visited[i] = 0;
        on_stack[i]=0;
        in_time[i]=0;
    }
    timer=1;
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
    cout<<countscc<<endl;
}