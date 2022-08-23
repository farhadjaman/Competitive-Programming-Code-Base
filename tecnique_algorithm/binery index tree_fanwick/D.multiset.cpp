#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)    for(int i=a;i<n;i++)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define Vector          vector<long long int>
#define Vectorpair      vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
using ll = long long int;
#define MAX 1000001

//..............................................//

int BIT[MAX+1]= {0},n;


int query(int i)
{
    int sum=0;
    for(;i>0;i-=i*(-i))
        sum+=BIT[i];

    return sum;
}
int FIND(int k)
{
    int l=1,r=n,mid,ans;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(query(mid)>=k)
        {
           ans=mid;
            r=mid-1;
        }
        else
            l=mid+1;



    }
    return ans;
}

void update(int x,int value)
{
    int i;
    for(i=x; i<=n; i+=i&(-i))
    {
        BIT[i]+=value;
    }
}
void print()
{
    rep(i,1,n+1)
    cout<<BIT[i]<<" ";
}

int main()
{
    Fast_Read;

    int i,j,x,q;
    cin>>n>>q;

    rep(i,0,n)
    {
        cin>>x;
        update(x,n);
    }

    //print(n);
    rep(i,0,q)
    {
        cin>>x;
        if(x>0)
           update(x,1);
        else
            update(FIND(x),-1);

    }

    if(query(n)==0)
        cout<<0<<endl;
    else cout<<FIND(1)<<endl;

}


