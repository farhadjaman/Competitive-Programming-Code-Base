#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(int i=a;i<n;i++)
#define brep(i,a)  for(int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<ll>
#define vectorpair  vector<pair<ll, ll>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         1000000007
#define MOD         1000000007
#define endl       "\n"
using ll = long long int;
template <typename T>
void vecprint(vector<T>&v1){for(auto it:v1) cout<<it<<" ";cout<<endl;}
vector<vec> dp;
//for single element
class compare{
    public:
        bool operator()(const int &a,const int &b)//we have to overload operator to compare between two eliments
        {
             return a>b;
        }
};
void singleelement()
{
    priority_queue<int,compare>pq;//we have to use comparator class to comapare two eliment
    pq.push(2);
    pq.push(3);
    pq.push(1);
    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
}
//for vector pair
class ascending_first{
    public:
        bool operator()(const pair<int,int>&a,const pair<int,int>&b)//we have to overload operator to compare between two eliments
        {
             return a.first>b.first;
        }
};
class descending_first{
    public:
        bool operator()(const pair<int,int>&a,const pair<int,int>&b)
        {
             return a.first<b.first;
        }
};
class ascending_second{
    public:
        bool operator()(const pair<int,int>&a,const pair<int,int>&b)
        {
             return a.second>b.second;
        }
};
class descending_second{
    public:
        bool operator()(const pair<int,int>&a,const pair<int,int>&b)
        {
             return a.second<b.second;
        }
};

void Pair()
{

     priority_queue<pair<ll,ll>,vectorpair,descending_second>pq;
      pq.push({5,10});
      pq.push({10,5});
      pq.push({14,5});
      pq.push({8,5});
      while(!pq.empty())
     {
             cout<<pq.top().first<<" "<<pq.top().second<<endl;
             pq.pop();
     }
}
int main()
{
    

}