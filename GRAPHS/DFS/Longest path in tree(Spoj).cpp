#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(long long int i=a;i<n;i++)
#define brep(i,a)  for(long long int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<long long int>
#define vectorpair  vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         1000000007
#define MOD         1000000007
using ll = long long int;
//..............................................//
vec v1[10007];
vec vis;
int max1=-1;
int node;
int search_deepest_node(int root,int dist)
{
    //cout<<dist<<endl;
    if(dist>max1)
    {
        max1=dist;
        node=root;
    }
    vis[root]=1;
    for(auto it:v1[root])
    {
        if(!vis[it])
        search_deepest_node(it,dist+1);
    }

    return node;
}

int main()
{
    Fast_Read;

    ll x,y,n,maximum,ans;
    cin>>n;
    vis.resize(n+1,0);
    rep(i,0,n-1)
    {
        cin>>x>>y;
        v1[x].push_back(y);
        v1[y].push_back(x);
    }


    maximum=search_deepest_node(1,0);
    //cout<<endl;
    max1=-1;
    rep(i,0,n+1) vis[i]=0;
    ans=search_deepest_node(maximum,0);
    //cout<<maximum<<endl;
    cout<<max1<<endl;





}

//cout<<"Case "<<case1<<": "<<s<<endl;

