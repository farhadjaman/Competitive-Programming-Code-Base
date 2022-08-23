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

void TOH(int n,int source,int helper,int dest)
{
    if(n==1)
    {
        cout<<source<<" to "<<dest<<endl;
        return;
    }
    TOH(n-1,source,dest,helper);
    cout<<source<<" to "<<dest<<endl;
    TOH(n-1,helper,dest,source);
}
int main()
{
    int n,s=1,d=3,h=2;
    cin>>n;
    TOH(n,s,h,d);

}