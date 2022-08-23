#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        int x; cin>>x; while(x--)
#define vec         vector<int>
#define vectorpair  vector<pair<int, int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         10007
#define MOD         1000000007
#define endl       "\n"
using ll = long long int;
template <typename T>
void vecprint(vector<T>&v1){for(auto it:v1) cout<<it<<" ";cout<<endl;}
vector<vec>mem;
int solve(int ara[],int i,int j)
{
    if(mem[i][j]!=-1) return mem[i][j];
    if(i>=j-1) return 0;
    mem[i][j]=INT_MAX;
    for(int k=i+1;k<j;k++)
    {
        int value1=solve(ara,i,k);
        int value2=solve(ara,k,j);
        int value3=ara[i]*(ara[k]*ara[j]);
        cout<<value1<<" "<<value2<<" "<<value3<<endl;
        int temp=value1+value2+value3;
        mem[i][j]=min(temp,mem[i][j]);
    }
 
    return mem[i][j];

}
int main()
{
    int n;
    cin>>n;
    mem.assign(n+2,vec(n+2,-1));
    int ara[n];
    rep(i,0,n) cin>>ara[i];
    int ans=solve(ara,0,n-1);
    cout<<ans<<endl;
    rep(i,0,n+2)
    {rep(j,0,n+2)
    {
        cout<<mem[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<endl;
}