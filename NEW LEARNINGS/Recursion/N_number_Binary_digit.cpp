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
void paranthesis(int n,int ones,int zeros,string op,vector<string>&v1)
{
    if(n==0)
    {
        v1.push_back(op);
        return;
    }
    if(ones==zeros)
    {
       op+="1";
       paranthesis(n-1,ones+1,zeros,op,v1);
       return;
    }
    string op1,op0;
    op1=op;
    op0=op;
    op1+="1";
    op0+="0";
    paranthesis(n-1,ones+1,zeros,op1,v1);
    paranthesis(n-1,ones,zeros+1,op0,v1);

}
int main()
{
    int n;
    cin>>n;
    int ones=0;
    int zeros=0;
    string String=" ";
    vector<string>v1;
    paranthesis(n,ones,zeros,String,v1);

    for(auto it:v1)
      cout<<it<<endl;


}