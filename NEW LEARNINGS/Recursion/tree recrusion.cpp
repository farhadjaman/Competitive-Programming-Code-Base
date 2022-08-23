#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)    for(long long int i=a;i<n;i++)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vector1          vector<long long int>
#define vectorpair      vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
using ll = long long int;
//..............................................//
vector<int> v;
void F( int ci,vector<int>ss,int cssi){
    if(ci>=v.size()){
           rep(i,0,cssi)
              cout<<ss[i]<<" ";

              cout<<endl;
        return;
    }

    F(ci+1,ss,cssi);
    ss.push_back(v[ci]);
    F(ci+1,ss,cssi+1);
    return;
}
void solve(){
    int i,n,x; cin>>n;
     for(i=1;i<=n;i++)
     {
         cin>>x;
         v.push_back(x);
     }
    vector<int> ss;
    F(0,ss,0);

}
int main()
{
    Fast_Read;
    int tc;
    cin>>tc;
    for(int case1=1; case1<=tc; case1++)
    {
        solve();

    }

}

