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
#define MAX         10007
#define MOD         1000000007
#define endl       "\n"
using ll = long long int;
vector<vec>L;
int re=0;
int lcs_rec(string &s, string &t, int i, int j){
    
    if(i <= 0 || j <= 0){
        L[i][j] = 0;
        return 0;
    }
    if(L[i][j]!=-1) return L[i][j];
    if(s[i-1] == t[j-1]){
        
        L[i][j] =1+lcs_rec(s,t,i-1,j-1);
        re=max(re,L[i][j]);
    }
    else{
        L[i][j]=0;
        lcs_rec(s,t,i,j-1);
        lcs_rec(s,t,i-1,j);
        
    }
}

int main()
{
    int n,m;
    string s1,s2;
    cin>>s1>>s2;
    n=s1.size(),m=s2.size();
    L.assign(n+1,vec(m+1,-1));
    lcs_rec(s1,s2,n,m);
    cout<<re<<endl;

}