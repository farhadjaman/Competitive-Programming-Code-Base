#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(long long int i=a;i<n;i++)
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
int responsibility(int x)
{
    return x&(-x);
}
void update(int index,int value,int maximum)
{
    for(int j=index; j<=maximum; j=j+responsibility(j))
    {
        BIT[j]+=value;
        //cout<<j<<endl;
    }
}

void print(int maximum)
{
    for(int i=1; i<=maximum; i++)
        cout<<BIT[i]<<" ";
}

void difference(int index1,int index2)
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

    cout<<sum2-sum1<<endl;
}

int main()
{
    Fast_Read;
    ll i,j,n,x,index1,index2;
    cin>>n;
    int ara[n+1];

    rep(i,1,n+1)
    cin>>ara[i];

    for(int i=1; i<=n; i++)
    {
        update(i,ara[i],n);
    }
    print(n);

    //get the sum between 1 to n
    cout<<endl;
    cout<<"Input from which index to index you want the sum"<<endl;

    cin>>index1>>index2;
    index1--;
    difference(index1,index2);

}





