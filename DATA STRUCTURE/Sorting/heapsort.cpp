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
void maxheapify(int n,int pos){
   int large=pos;
   int left=pos*2;
   int right=pos*2+1;
   if(left<n && ara[large]<ara[left])
   {
      large=left;
   }
   if(right<n && ara[large]<ara[right])
   {
      large=right;
   }
   if(pos!=large)
   {
      swap(ara[large],ara[pos]);
   }
   else return;
   maxheapify(n,large);
   
}
void heapsort(int n)
{
   for(int i=n/2;i>0;i--)
   {
      //cout<<i<<endl;
      maxheapify(n,i);
      //cout<<"done"<<endl;
   }
   for(int i=n;i>=1;i--)
   {
      swap(ara[i],ara[1]);
      maxheapify(i,1);
   }
}
int main()
{
   int n;
   cin>>n;
   ara.assign(n+1,0);
   rep(i,1,n+1)cin>>ara[i];
   heapsort(n);
   vecprint(ara);
   
    
}