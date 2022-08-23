//to get the longest path we have to first make all the edges negative
//than we will get all the longest path from source node by multpying -1
//with them at the end

#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<ll>
#define vectorpair  vector<pair<int, int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MOD         1000000007
#define endll       "\n"
using ll = long long int;
//template <typename T>
const ll MAX = 1e17;
const ll NMAX = 1e17*(-1);
class triplet{
    public:
    ll parent;
    ll child;
    ll dist;

};
vec dist;
vector<triplet>edges;
void bellman(int v,int src)//v->number of vertices
{
     dist[src]=0;
     //relax all edges v-1 times
     for(int i=1;i<=v-1;i++)
     {

           for(auto it:edges)
           {
                 
                 ll p=it.parent;
                 ll c=it.child;
                 ll d=it.dist;
                 if(dist[p]!=MAX)
                 {
                     dist[c]=min(dist[c],d+dist[p]);
                     dist[c]=max(NMAX,dist[c]);
                 }
           }
           
     }
     

     for(int i=1;i<=v-1;i++)
     {

           for(auto it:edges)
           {
                 
                 ll p=it.parent;
                 ll c=it.child;
                 ll d=it.dist;
                 if(dist[p]!=MAX)
                 {
                     dist[c]=max(NMAX,dist[c]);
                     if(dist[c]>d+dist[p])//as we already performed this process v-1 times in the above for loop yet we can reduce
                                          //child distance so it means it will reduce untill child distance value is infinity
                     {
                          dist[c]=NMAX;
                     }
                    
                 }
           }
     }

}

    int main()
    {
            Fast_Read;
            ll n, m,x,y,d;
            cin >> n >> m;
            dist.resize(n + 1,MAX);
            edges.resize(m);
            rep(i, 0, m)
            {
                    cin >> x >> y >> d;
                    edges.push_back({x,y,(-1)*d});
            }
            bellman(n,1);
            (dist[n]==NMAX)?cout<<-1<<endl:cout<<dist[n]*(-1)<<endl;
           
    }