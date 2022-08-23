#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)    for(long long int i=a;i<n;i++)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define Vector      vector<long long int>
#define Vectorpair  vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
using ll = long long int;
#define MAX 2000001
//..............................................//
int BIT[MAX]= {0};
ll maximum(ll ara[],ll n)
{
    ll max1=-1000000;
    rep(i,0,n)
    {
        if(max1<ara[i])
            max1=ara[i];
    }
    return max1;
}


int responsibility(int x)
{
    return x&(-x);
}
void update(int index,int maximum)
{

    for(int j=index; j<=maximum; j=j+responsibility(j))
    {
        BIT[j]+=1;
        //cout<<j<<endl;
    }
}

void print(int maximum)
{
    for(int i=1; i<=maximum; i++)
        cout<<BIT[i]<<" ";
}

int difference(int index1,int index2)
{
    int sum1=0,sum2=0;
    while(index1>=1)
    {
        //cout<<bit[index]<<endl;
        sum1+=BIT[index1];
        index1=index1-responsibility(index1);
    }
    while(index2>=1)
    {

        sum2+=BIT[index2];
        index2=index2-responsibility(index2);
    }
    //cout<<sum2<<" "<<sum1<<endl;
    //cout<<endl;

    return sum2-sum1;
}

int main()
{
    Fast_Read;
    int i,j,x,index1,index2,total=0;
    ll n,M;
    cin>>n;
    ll ara[n+1];

    rep(i,1,n+1)
    {
        cin>>ara[i];
    }

    map<ll,int>m;
    rep(i,1,n+1)
    {
        m.insert({ ara[i], 0 });
    }
    x=1;
    for(auto &it:m)
    {
        it.second=x;
        x++;
    }

    for(auto it:m)
        cout<<it.first<<" "<<it.second<<endl;

    rep(i,1,n+1)
    {
        ara[i]=m[ara[i]];
    }

    for(auto it:ara)
        cout<<it<<" ";

    M=maximum(ara,n);


    /* for(int i=1; i<=n; i++)
     {

         //print(M);
         //cout<<endl;
         total+=difference(ara[i],M);
         update(ara[i],M);
         //print(M);
         //cout<<endl;
         //cout<<endl;
     }
     cout<<total<<endl;
     */


}
