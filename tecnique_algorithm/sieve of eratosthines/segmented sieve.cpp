#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)    for(long long int i=a;i<n;i++)
#define all(x)        x.begin(),x.end()
#define allara(x,n)   x,x+n
#define w(x)          long long int x; cin>>x; while(x--)
#define Vector        vector<long long int>
#define Vectorpair    vector<pair<long long int,long long int>>
#define Fast_Read     ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX 32000
using ll = long long int;

//..............................................//
Vector primes;
int ara[100000000]={0};

void sieve()
{
    int i,j;

    int ara[MAX]= {0}; //let assume every value in this array is a prime,0 indicates ara[i] is aprime number
    int root=sqrt(MAX);

    for(i=3; i<=root+2; i++)
    {
        for(j=i*i; j<=MAX; j+=i)
            ara[j]=1;
    }

    primes.push_back(2);

    for(i=3; i<=MAX; i=i+2)
    {
        if(ara[i]==0)
        {
            primes.push_back(i);
        }
    }



}

void segmentedseive(ll l,ll r)
{
    int currentprime,base,j,i,n;
    n=r-l+1;//total number in the segmented sieve

     //let assume all the number between l to r are primes and 0 denotes that the number is a prime.

    // now we will non prime all the 2's dividans like 10 12


    for(i=0; primes[i]*primes[i]<=r+1; i++)//we will check a prime number up to square of r.same as seiev o.e.
    {
        currentprime=primes[i];

        base=(l/currentprime)*currentprime;//where we will start our itteration

        if(base<l)
        base+=currentprime;//if(base is less than l that means we have to go one step forward by adding the currentprime.

        for(j=base; j<=r; j+=currentprime)
            ara[j-l]=1;//j-l will give the index of j

        if(base==currentprime)
            ara[base-l]=0;

    }
    for(i=0;i<n;i++)
    {
        if(ara[i]==0)
        {
            cout<<l+i<<" ";
            break;
        }
    }



}
int main()
{
    Fast_Read;
    int tc;
    cin>>tc;
    for(int case1=1; case1<=tc; case1++)
    {

        ll i,j,l,x,r,div;
        sieve();
        cin>>l>>r;
        segmentedseive(l,r);


    }

}

