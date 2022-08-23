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
vec res;
vec Edges[MAX];
int in_degree[MAX];
void showpq(priority_queue<int,vector<int>,greater<int>>gq)
{
    priority_queue<int,vector<int>,greater<int>> g = gq;
    while (!g.empty()) {
        cout << g.top()<<" ";
        g.pop();
    }
    cout << '\n';
}
bool kahns(int n)
{
    int curr;
    priority_queue<int,vector<int>,greater<int>>pq;
    rep(i,1,n+1)
    {
        if(in_degree[i]==0)
        {
            pq.push(i);
        }
    }
    while(!pq.empty())
    {
       curr=pq.top();
       pq.pop();
       res.push_back(curr);
       for(auto child : Edges[curr])
       {
          
           in_degree[child]--;
           if(in_degree[child]==0)//print priority queue before and after pushing a value
           {
               pq.push(child);
           }
              
       }
    }
     return res.size()==n;

}
int main()
{
    int x,y,n,m;
    cin>>n>>m;
    rep(i,0,m)
    {
         cin>>x>>y;
         Edges[x].push_back(y);
         in_degree[y]++;

    }

    bool result=kahns(n);
    if(result==true)
    {
        for(auto it:res)
         cout<<it<<" ";
         cout<<endl;
    }
    else
    {
        cout<<"Sandro fails."<<endl;
    }
}