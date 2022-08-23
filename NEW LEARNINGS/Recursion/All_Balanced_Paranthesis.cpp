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
void paranthesis(string op,int open,int close,vector<string>&v1)
{
    if(open==0 & close==0)
    {
        //cout<<op<<endl;
        v1.push_back(op);
        return;
    }
    if(open==close)
    {
       op+="(";
       paranthesis(op,open-1,close,v1);
       return;
    }
    if(open==0)
    {
        op+=")";
        paranthesis(op,open,close-1,v1);
        return;
    }
    string op1,op2;
    op1=op;
    op2=op;
    op1+="(";
    op2+=")";
    paranthesis(op1,open-1,close,v1);
    paranthesis(op2,open,close-1,v1);

}
int main()
{
    int n;
    cin>>n;
    int open=n;
    int close=n;
    string String=" ";
    vector<string>v1;
    paranthesis(String,open,close,v1);

    for(auto it:v1)
      cout<<it<<endl;


}