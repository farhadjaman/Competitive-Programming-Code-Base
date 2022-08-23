#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        int x; cin>>x; while(x--)
#define pii         pair<int,int>
#define pll         pair<ll,ll>
#define vec         vector<int>
#define vectorpair  vector<pll>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         1000000007
#define MOD         1000000007
#define endll       "\n"
using ll = long long int;
template <typename T>
void vecprint(vector<T>&v1) {for (auto it : v1) cout << it << " "; cout << endl;}
//------------------------------------------------------------//

void marge(vec& ara,int l,int r)
{

   int mid=((r+l)/2);
   int n=mid-l+1,m=r-mid;
   vec ara1(n),ara2(m);
   for(int i=l,j=0;i<n;i++,j++)
   {
    ara1[j]=ara[i];
   }
   for(int i=mid+1,j=0;j<m;i++,j++)
   {
    ara2[j]=ara[i];
   }
   cout<<l<<" "<<mid<<" "<<r<<endl;

   int i=0,j=0,k=l;

   while(i<n && j<m)
   {
    if(ara1[i]<=ara2[j])
    {
      ara[k]=ara1[i];
      i++;
    }
    else{
      ara[k]=ara2[j];
      j++;
    }
    k++;
   
  }
   while(i<n)
   {
      ara[k]=ara1[i];
      i++;
      k++;
   }
   while(j<m)
   {
      ara[k]=ara1[i];
      j++;
      k++;
   }


   return;

}

void margeSort(vec& ara,int l,int r)
{
  if(l>=r)return;
  int mid=(r+l)/2;
  margeSort(ara,l,mid);
  margeSort(ara,mid+1,r);
  //cout<<l<<" "<<r<<endl;
  marge(ara,l,r);
}
int32_t main()
{
  Fast_Read;
  int n;
  cin>>n;
  vec ara(n);
  rep(i,0,n)cin>>ara[i];
  marge(ara,0,n-1);
  vecprint(ara);
}