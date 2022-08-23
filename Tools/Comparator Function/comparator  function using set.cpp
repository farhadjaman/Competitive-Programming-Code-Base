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
class compare{
    public:
        bool operator()(const int &a,const int &b)//we have to overload operator to compare between two eliments
        {
             return a>b;
        }
};

int main()
{
    set<int,compare>s1;//we have to use comparator class to comapare two eliment
    s1.insert(2);
    s1.insert(3);
    s1.insert(1);
    for(auto it:s1)
        cout<<it<<endl;

}
//rest is same as vector comaprison