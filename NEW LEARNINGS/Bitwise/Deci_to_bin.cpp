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
void printbit1(int num)
{
    string s1;
     while (num > 0)
    {
        
        s1 += to_string(num & 1);
        num = num >> 1;
    }
    reverse(all(s1));
    cout<<stoi(s1)<<endl;
}
int main()
{
    int n;
    cin >> n;
    printbit1(n);
    
}
