#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main()
{

    int i,j,n,m,k=0,count1=0,flag=0,sum=0,position,position1;
    string s;
    char s1;
    cin>>n;
    cin>>s;
    cin>>m;
    for(j=0;j<m;j++)
    {
        flag=0;
        count1=0;
        cin>>s1;
        rep(i,n)
        {
            if(s[i]==s1)
            {
                if(flag==0)
                {
                    position=i;
                    flag=1;
                }
                count1++;
            }

        }
        if(count1==0)
        {
            cout<<"-1"<<" "<<"-1"<<endl;
        }
        else
        {
           for(i=n-1;i>=position;i--)
           {
               if(s[i]==s1)
               {
                   position1=i;
                    break;
               }


           }
           cout<<position<<" "<<position1<<endl;

        }

    }






}

