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
void subset(string ip,string op)
{
    if(ip.size()==0)
    {
        cout<<op<<endl;
        return;
    }
    string op1=op;
    string op2=op;
    op1.push_back(ip[0]);
     op2.push_back(toupper(ip[0]));
    ip.erase(ip.begin()+0);
    subset(ip,op1);
    subset(ip,op2);
}
int main()
{
    string ip,op;
    cin>>ip;
    subset(ip,op);


}