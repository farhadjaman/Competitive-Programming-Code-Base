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
int main()
{
    Fast_Read;
    int tc;
    cin>>tc;
    for(int case1=1; case1<=tc; case1++)
    {

        int i,j,n,flag=0,sum=0;
        cin>>n;
        int ara[n];
        vector<int>v1;

        rep(i,0,n)
        {
            cin>>ara[i];
        }
        for(i=0;i<n;i++)
        {
            sum=0;
            flag=0;
            sum+=ara[i];
            v1.push_back(ara[i]);

            for(j=i+1;j<n;j++)
            {
                v1.push_back(ara[j]+ara[i]);
                sum+=ara[j];
                if(flag==0)
                {
                    flag=1;
                    continue;
                }
                v1.push_back(sum);

            }
        }
        for(auto it:v1)
            cout<<it<<" ";

    }

}
