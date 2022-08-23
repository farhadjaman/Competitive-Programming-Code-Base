//Permutation with lower case
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
void solve(vec v1,int k,int index,int& last_person)
{
    if(v1.size()==1)
    {
       last_person=v1[0];
       return;
    }
    index=(index+k)%v1.size();
    v1.erase(v1.begin()+index);
    solve(v1,k,index,last_person);
     

}
int main()
{
    int n,k,x,last_person,index;
    cin>>n>>k;
    vec v1;
    k--;
    rep(i,1,n+1)
    {
        v1.push_back(i);
    }
    solve(v1,k,0,last_person);

    cout<<last_person<<endl;

}