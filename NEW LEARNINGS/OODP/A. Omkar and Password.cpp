
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,i,flag=0;
        cin>>n;
        int ara[n];
        rep(i,n)
        {
            cin>>ara[i];
        }
        rep(i,n-1)
        {
            if(ara[i]!=ara[i+1])
              flag=1;

        }
        if(flag==1)
            cout<<"1"<<endl;
        else
            cout<<n<<endl;



    }
}
