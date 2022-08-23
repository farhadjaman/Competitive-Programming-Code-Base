#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<ll>
#define vectorpair  vector<pair<ll, ll>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MOD         100000007
#define endll       "\n"
using ll = long long int;
int main()
{
    w(x)
    {
        ll sum = 0, count1 = 0, y;
        double n, m, x;
        cin >> n>>m;
        vec ara(n);
        vectorpair vp1;
        map<ll, ll> mp,mp1;
        rep(i, 0, n)
        {
            cin >> ara[i];
            if(mp1[ara[i]]!=0)
            mp1[ara[i]]=i+1;
        }
        sort(all(ara));
            rep(i, 0, n)
            {
                if(mp[m - ara[i]]!=0)
                {
                    cout<<mp1[m-ara[i]]--<<" "<<i<<endl;
                }
                mp[ara[i]]++;
            }
            
        
    }
}