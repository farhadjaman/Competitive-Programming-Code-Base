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
//..............................................//
void Insert(vec& v1,int last_eliment)
{
    int n=v1.size();

    if(v1.size()==0 || v1[n-1]<=last_eliment)
    {
        v1.push_back(last_eliment);
        return;
    }

    int temp=v1[n-1];
    v1.pop_back();
    Insert(v1,last_eliment);
    v1.push_back(temp);
    return;

}
void Sort(vec &v1)
{
    if(v1.size()==0)
        return;

    int n=v1.size();
    int last_eliment=v1[n-1];
    v1.pop_back();
    Sort(v1);
    Insert(v1,last_eliment);



}
int main()
{
    Fast_Read;
    int tc;
    cin>>tc;
    for(int case1=1; case1<=tc; case1++)
    {
        ll n,x;
        vec v1;
        cout<<"Input vector size"<<endl;
        cin>>n;
        rep(i,0,n)
        {
            cin>>x;
            v1.push_back(x);
        }
        Sort(v1);

        for(auto it:v1)
            cout<<it<<" "<<endl;


    }


}

