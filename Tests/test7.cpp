//kosajaru's algo
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define all(x)      x.begin(),x.end()
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<int>
#define vectorpair  vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         ((1<<21)-1)
using ll = long long int;


void solve() {
    ll n,k,b,s,m,temp,rest,rem;
    cin>>n>>k>>b>>s;
    m=k*b;
     
    if(n==1){
        if(s/k==b){
            cout<<s<<endl;
            return;
        }
        cout<<-1<<endl;
        return;
    }
    if(s<b*k){
        cout<<-1<<endl;
        return;
    }
    
    if(s>=m and s<m+k){
        for(int i=0;i<n-1;i++){
            cout<<0<<" ";
        }
        cout<<s<<endl;
    }
    else{
       temp=m+k-1;
       rest=s-temp;
       rem=rest%(n-1);
       if(rest<=(n-1)*(k-1)){
        cout<<temp<<" ";

        for(int i=0;i<rem;i++){
            cout<<rest/(n-1)+1<<" ";
        }
        for(int i=0;i<n-1-rem;i++){
            cout<<rest/(n-1)<<" ";
        }
        cout<<endl;
       }
       else
       {
        cout<<-1<<endl;
       }
    }
 

}
int main()
{
    w(t)
    solve();
}