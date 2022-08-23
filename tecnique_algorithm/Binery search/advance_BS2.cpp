//https://www.spoj.com/problems/AGGRCOW/
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<ll>
#define vectorpair  vector<pair<int, int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MOD         100000007
#define endll       "\n"
using ll = long long int;
vec ara;
int n,m;
bool is_distance(int dist)
{
    int count1=1;
    int i=0;
    int j=1;
    while(j<n)
    {

        if(ara[j]-ara[i]>=dist)
        {
            i=j;
            j++;
            count1++;
        }
        else
        {
            j++;
        }
    }
    return count1>=m;
}
int main()
{
w(x)
{
    
    int left,right,mid;
    cin>>n>>m;
    ara.assign(n,0);
    rep(i,0,n)
    {
        cin>>ara[i];
    }
    sort(all(ara));
    left=1,right=1e9;
    while(right-left>1)
    {
        mid=left+((right-left)/2);
        if(is_distance(mid))
        {
            left=mid;
        }
        else
        {
            right=mid-1;
        }
    }
    if(is_distance(right))
    {
        cout<<right<<endl;
    }
    else cout<<left<<endl;



}
}