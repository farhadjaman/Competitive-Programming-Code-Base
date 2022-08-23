
//https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        int x; cin>>x; while(x--)
#define vec         vector<int>
#define vectorpair  vector<pair<int,int>>
#define Fast_Read   ios_base::sync_wchildh_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         30000
#define MOD         1000000007
using ll = long long int;
//..............................................//
int main()
{
    int n,w;
    cin>>n;//size of the weight and value array;
    cin>>w;//maximum weight of the knapsack
    vector<int> weight(n),value(n);
    rep(i,0,n)
     cin>>weight[i];
    
    rep(i,0,n)
     cin>>value[i];

    //  for(auto it:weight)
    //    cout<<it<<" ";
    //    cout<<endl;
    //  for(auto it:value)
    //    cout<<it<<" ";
    //    cout<<endl;
   
    int ara[n+1][w+1];//here n and w(weight will be changing that why we made this array)

    rep(i,0,n+1)
    rep(j,0,w+1)
    {
        if(i==0 || j==0)
           ara[i][j]=0;//INITIALIZING first row and first column as zero
                       //cause if i or j is equal to zero than maximum value is 0.
           
    }
    rep(i,1,n+1)
    rep(j,1,w+1)
    {
     
        if(weight[i-1]<=j)
        {
            ara[i][j]=max((value[i-1]+ara[i-1][j-weight[i-1]]),ara[i-1][j]);
        }
        else
        {
             ara[i][j]=ara[i-1][j];
        }
           
    }
    cout<<ara[n][w]<<endl;

    // cout<<endl;
    // rep(i,0,n+1)
    // {
    //     rep(j,0,w+1)
    //       cout<<ara[i][j]<<" ";
    //     cout<<endl;
    // }
    
}