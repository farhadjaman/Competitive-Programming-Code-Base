#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<int>
#define vectorpair  vector<pair<ll, ll>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MOD         100000007
#define endll       "\n"
using ll = long long int;
double eps=1e-2;
int main()
{
    double x;
    cin>>x;
    double low=1,high=x,mid;//binery search range will be from 1 to x

    while(high-low>eps)
    {
        mid=(high+low)/2;
        if(mid*mid>=x)//to get the nth root we just have to multiply mid nth times
        {
            high=mid;
        }
        else
        {
            low=mid;
        }
        cout<<high<<" "<<low<<endl;
    }
     cout<<setprecision(2)<<low<<endl;
    
}
//time complexcity
//if we want precision for dth number
//the complexcity from i_th number to (i+1)th number will be
//10^d
//so for 1 to nth number the time complexity will be log(N*10^d)
//so for multiplication of mid inside while loop will be
// if we are getting the pth root of number n than the time complexity will
//be p times
//so the total time complexity will be O(p*log(N*10^d))