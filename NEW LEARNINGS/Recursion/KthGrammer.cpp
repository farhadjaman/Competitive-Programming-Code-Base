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

int kthGrammer(int N,int K)
{
    if(N==1)
        return 0;
    int parent=kthGrammer(N-1,(K/2+K+2));
     if(parent==0)
     {
         if(K%2==0)
           return 1;
        else
           return 0;
     }
     else if(parent==1)
     {
         if(K%2==0)
           return 0;
        else
           return 1;
     }
}
int main()
{
    int n,k;
    cin>>n>>k;
    int value=kthGrammer(n,k);

    cout<<value<<endl;

}