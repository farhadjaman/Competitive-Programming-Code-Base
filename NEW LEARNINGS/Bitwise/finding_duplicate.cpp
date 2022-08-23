#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        int x; cin>>x; while(x--)
#define pii         pair<int,int>
#define pll         pair<long long int,long long int>
#define vec         vector<int>
#define vectorpair  vector<pair<int,int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         1000000007
#define MOD         1000000007
#define endll       "\n"
using ll = long long int;
template <typename T>
void vecprint(vector<T>&v1){for(auto it:v1) cout<<it<<" ";cout<<endl;}
//..............................................//
auto start = chrono::steady_clock::now();
int main()
{
//we have an array,that's one element has an odd count,rest of the element has even count
//find it in o(n) time and o(1) space complexity
    

     for(int i=0;i<100;i++)
     {
         cout<<i<<endl;
     }
     auto end = chrono::steady_clock::now();
     auto diff = end - start;
     cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
    
}
