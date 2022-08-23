#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(long long int i=a;i<n;i++)
#define brep(i,a,n)  for(long long int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vector1     vector<long long int>
#define vectorpair  vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         100000000000
using ll = long long int;
//..............................................//
int main()
{
    Fast_Read;
    int tc;
    cin>>tc;
    for(int case1=1; case1<=tc; case1++)
    {
        ll j=0,i,n,count1=0,mini,odd=0,oddmin=0,sum=0;
        cin>>n;
        ll ara[n];

        rep(i,0,n)
        {
            cin>>ara[i];
            if(ara[i]>0)
            {
                count1++;
                sum+=ara[i];
            }

        }

        if(count1==0)
        {
            mini=ara[0];

            rep(i,1,n)
            {
                mini=max(mini,ara[i]);
                cout<<"Case "<<case1<<": "<<mini<<" "<<0<<endl;
                break;
            }

        }
        else
        {
            for(i=0;i<count1;i++)
              if(ara[i]<=0)
                odd++;

            oddmin=odd;

            //cout<<oddmin<<endl;
            for(i=count1;i<n;i++)
            {
                if(ara[i]<=0)
                {
                    if(ara[j]>0)
                        odd++;

                    j++;



                }
                else
                {
                    if(ara[j]<=0)
                    {
                        odd--;

                    }
                    j++;
                    oddmin=min(oddmin,odd);

                    //cout<<odd<<endl;
                }
            }

            cout<<"Case "<<case1<<": "<<sum<<" "<<oddmin<<endl;

        }

    }

}



