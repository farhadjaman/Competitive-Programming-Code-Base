// Given a rod of length n inches and an array of prices that 
// includes prices of all pieces of size smaller than n.
// Determine the maximum value obtainable by cutting up the
// rod and selling the pieces
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<int>
#define vectorpair  vector<pair<int, int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         1000
#define MOD         1000000007
#define endll       "\n"
using ll = long long int;
int memo[MAX+2][MAX+2];
int count1=0;  

int ubk(int price[],int length[],int maxlen,int n)
{
    count1++;
    if(n==0 || maxlen==0) return 0;
    if(memo[n][maxlen]!=-1) return memo[n][maxlen];
    if(length[n-1]<=maxlen)
    {
        memo[n][maxlen]=max((price[n-1]+ubk(price,length,maxlen-length[n-1],n)),ubk(price,length,maxlen,n-1));
    }
    else
    {
       memo[n][maxlen]=ubk(price,length,maxlen,n-1);
    }
    return memo[n][maxlen];
}
int main() {
    Fast_Read;
    int tc;
    cin>>tc;
    while(tc--)
    {
        memset(memo,-1,sizeof(memo));
        int n,maxlength;//size of the length and price array,max length of the rod
        cin>>n>>maxlength;
        int length[n];//given eligible length array that we can cut the rod
        int price[n];//prices of the pieces of n length
        rep(i,0,n)
        {
              cin>>length[i];
        }
        rep(i,0,n)
        {
              cin>>price[i];
        }
        int maxprice=ubk(price,length,maxlength,n);//it will return the maximum price
        cout<<maxprice<endl;
        // rep(i,0,n+1)
        // {
        //     rep(j,0,maxlength+1)
        //     {
        //         cout<<memo[i][j]<<" ";
        //     }                            
        //     cout<<endl;
        // }
    }
}