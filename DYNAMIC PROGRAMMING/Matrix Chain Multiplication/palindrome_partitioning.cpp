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
int solve(string s,int i,int j)
{
    if(mem[i][j]!=-1) return mem[i][j];
    if(i>=j) return 0;
    int flag=0;
    for(int x=i,y=j;x<=( (j-i)/2+i);x++,y--)
    {
         if(s[x]!=s[y])
         {
             flag=1;
         }
    }
    
    if(flag==0) return 0;
    int temp=0;
    mem[i][j]=INT_MAX;
    for(int k=i;k<j;k++)
    {   
        int value1;
        if(mem[i][k]==-1)
        {
            value1=solve(s,i,k);
            mem[i][k]=value1;
        }
        else
        {
            value1=mem[i][k];
        }

        int value2;
        if(mem[k+1][j]==-1)
        {
            value2=solve(s,k+1,j);
            mem[k+1][j]=value2;
        }
        else
        {
            value2=mem[k+1][j];
        }
        temp=value1+value2+1;
        mem[i][j]=min(temp,mem[i][j]);
    }
    return mem[i][j];

}
int main()
{
    int n;
    string s;
    cin>>s;
    n=s.size();
    mem.assign(n+2,vec(n+2,-1));
    int ans=solve(s,0,n-1);
    cout<<ans<<endl;
    
}