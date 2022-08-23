#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
void print(int n)
{
    cout<<n<<endl;
}
int main()
{
    int n,l,sum=0,p;
    cin>>n;
    string s;
    s=to_string(n);
    l=s.size();
    p=1<<l;
    sum+=p-1;
    reverse(s.begin(),s.begin()+l);
    rep(i,l)
    if(s[i]=='7')
        sum+=1<<i;

    print(sum);



}
