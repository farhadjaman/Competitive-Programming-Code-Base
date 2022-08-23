#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(long long int i=a;i<n;i++)
#define brep(i,a)  for(long long int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define vec         vector<int>
#define vectorpair  vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         1000000007
#define MOD         1000000007
using ll = long long int;
//..............................................//
int main()
{
    Fast_Read;
    int tc;
    cin>>tc;
    for(int case1=1; case1<=tc; case1++)
    {
        int n;
        vec v1;
        stack<int>s1;
        cin>>n;
        int ara[n];
        rep(i,0,n) cin>>ara[i];
        rep(i,0,n)
        {
            if(s1.size()==0)
                v1.push_back(-1);
            else if(s1.size()>0 && s1.top()>ara[i])
            {
                v1.push_back(s1.top());
            }
            else if(s1.size()>0 && s1.top()<=ara[i])
            {
                while(s1.size()>0 && s1.top()<=ara[i])
                {
                    s1.pop();
                }
                if(s1.size()==0)
                    v1.push_back(-1);
                else v1.push_back(s1.top());
            }
            s1.push(ara[i]);

        }
        for(auto it:v1)
            cout<<it<<" ";
    }


}