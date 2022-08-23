#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(long long int i=a;i<n;i++)
#define brep(i,a)  for(long long int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<long long int>
#define vectorpair  vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         1000000007
#define MOD         1000000007
using ll = long long int;
int main()
{
    int x,sum=0,n,TotalSubArrays=0;
    cin>>n;
    vec v1,suffixArray,CountingArray;
    v1.resize(n);
    suffixArray.resize(n);
    CountingArray.resize(10000);

    rep(i,0,n)
     {
         cin>>x;
         sum+=x;
         v1[i]=x;
         suffixArray[i]=sum%n;
         CountingArray[suffixArray[i]]++;

     }
     for (auto it : v1)
         cout << it << " ";
     cout << endl;
     for (auto it : suffixArray)
         cout << it << " ";
     cout << endl;
     for (auto it : CountingArray)
         if(it>0)
            TotalSubArrays+=(it*(it-1))/2;  //
     
}