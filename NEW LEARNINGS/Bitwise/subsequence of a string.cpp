#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)
int main()
{
    int i,n,j,a;
    string s;
    vector<char>v1;
    //v1.push_back(5);
    cin>>s;
    int length=(1<<s.size())-1;
   for(i=1;i<=length;i++)
    {
        for(j=i,a=0;j>0;a++ )
        {

           //cout<<j<<endl;
            if((j&1)==1)
            {
                //cout<<a<<endl;
               v1.push_back(s[a]);
              // cout<<s[a];

            }
            j=j>>1;

        }

        for(j=0;j<v1.size();j++)
           cout<<v1[j];
        v1.clear();
        cout<<endl;

    }

}

