#include<bits/stdc++.h>
using namespace std;
#define mx 100007
#define rep(i,a,n)  for(int i=a;i<n;i++)
using ll = long long int;
vector<ll> ara;
class info
{
public:
    int val=0;
    bool marked=false;
};
int n,v[MX];
info seg[4*MX];
void push(int node)
{
    if(seg[node].marked)
    {
        seg[2*node].val=seg[node].val;
        seg[2*node].marked=true;
        seg[2*node+1].val=seg[node].val;
        seg[2*node+1].marked=true;

        seg[node].marked=false;
    }
}
void build(int node,int s,int e)
{
    if(s==e) seg[node].val=v[s];
    else
    {
        int mid=(s+e)/2;
        build(2*node,s,mid);
        build(2*node+1,mid+1,e);
        seg[node].val=seg[2*node].val+seg[2*node+1].val;
    }
}
void update(int node,int s,int e,int lft,int rgt,int value)
{
    if(lft>e || rgt<s) return;
    if(lft<=s && e<=rgt)
    {
        seg[node].val=value;
        seg[node].marked=true;
        return;
    }
    push(node);
    int mid=(s+e)/2;
    update(2*node,s,mid,lft,rgt,value);
    update(2*node+1,mid+1,e,lft,rgt,value);
}
int query(int node,int s,int e,int pos)
{
    if(s==e) return seg[node].val;
    else
    {
        push(node);
        int mid=(s+e)/2;
        if(pos<=mid) query(2*node,s,mid,pos);
        else query(2*node+1,mid+1,e,pos);
    }
}
int main()
{
    Fast_Read;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>v[i];

    build(1,1,n);

    int q;
    cin>>q;
    while(q--)
    {
        int t,x,y,val,pos;
        cin>>t;
        if(t==1)
        {
            cin>>x>>y>>val;
            update(1,1,n,x,y,val);
        }
        else{
            cin>>pos;
            cout<<query(1,1,n,pos)<<endl;
        }
    }

