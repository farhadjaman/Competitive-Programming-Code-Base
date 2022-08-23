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
void Countingsort(int n,int pos){
   vec count1(9,0),output(n,0);
   int x;
   for(int i=0;i<n;i++)
   {
      count1[(ara[i]/pos)%10]++;
   }
   for(int i=1;i<9;i++)
   {
       count1[i]+=count1[i-1];
   }
   for(int i=n-1;i>=0;i--)
   {
       x=(ara[i]/pos)%10;
       count1[x]--;
       output[count1[x]]=ara[i];
   }
   vecprint(output);
   for(int i=0;i<n;i++)
   {
      ara[i]=output[i];
   }
}
void Redixsort(int n)
{
   int max1=0;
   for(int i=0;i<n;i++)
   {
      max1=max(max1,ara[i]);
   }
   max1;
   int pos=1;
   while(max1/pos>0)
  { 
   Countingsort(n,pos);
   pos=pos*10;
   }
}
int main()
{
   int n;
   cin>>n;
   ara.assign(n,0);
   rep(i,0,n)cin>>ara[i];
   Redixsort(n);
   vecprint(ara);
   
    
}