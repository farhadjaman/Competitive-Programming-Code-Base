#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        int x; cin>>x; while(x--)
#define pii         pair<int,int>
#define pll         pair<long long int,long long int>
#define vec         vector<int>
#define vectorpair  vector<pair<int,int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         1000000007
#define MOD         998244353
#define endll       "\n"
using ll = long long int;
template <typename T>
void vecprint(vector<T>&v1){for(auto it:v1) cout<<it<<" ";cout<<endl;}

vec ara;

int randomindex(int s,int e)
{
   srand((unsigned)time(0));
   int range=e-s+1;
   int randInt = s+int(range*rand()/(RAND_MAX + 1.0)); 
   swap(ara[randInt],ara[e]);
}
int pivoting(int s,int e)
{
   int pivot=ara[e];
   int pindex=s;
   
   for(int i=s;i<e;i++)
   {
        if(ara[i]<=pivot)
        {
         swap(ara[pindex],ara[i]);
         pindex++;
        }

   }
   swap(ara[pindex],ara[e]);

   return pindex;
}
void quicksort(int s,int e)
{
   if(s<e)
   {
      int pindex=pivoting(s,e);
      quicksort(s,pindex-1);
      quicksort(pindex+1,e);
   }
}

int main()
{
   int n;
   cin>>n;
   ara.assign(n,0);
   rep(i,0,n)cin>>ara[i];
   //vecprint(ara);
   quicksort(0,n-1);
   //swap(ara[0],ara[1]);
   vecprint(ara);

    
}