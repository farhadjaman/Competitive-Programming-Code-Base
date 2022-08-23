//kosajaru's algo
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define all(x)      x.begin(),x.end()
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<int>
#define vectorpair  vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         2097151
using ll = long long int;

int n,m;
int ara[21][21];
int mem[21][(1<<21)-1];

int dp(int p,int mask)
{
    //cout<<p<<" "<<mask<<endl;
    if(p>=n)return 0;
    if(mem[p][mask]!=-1)return mem[p][mask];
    int cost=INT_MAX;
    for(int j=0;j<n;j++)
    {
        if(mask&(1<<j))
        {
            cost=min(cost,ara[j][p]+dp(p+1,mask^(1<<j)));

           
        }


    }
    return mem[p][mask]=cost;
}

void solve(int t) {
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            cin>>ara[i][j];
            mem[i][j]=-1;
        }

    //cout<<(1<<n)<<endl;
    cout<<dp(0,(1<<n)-1)<<endl;

}
int main()
{
    Fast_Read;
    solve(1);
}