#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        long long int n,i,j;
        long long int count1=1,sum;
        cin>>n;
        if(n==0)
            break;
        else
        {
            for(i=n,j=1;i>1;i--,j++)
            {
                sum=pow(i,j);

                count1=count1*sum;
            }
            long long int m=count1;
            count1=1;
            for(i=1;i<=m/2;i++)
            {
                if(m%i==0)
                    count1++;

            }
            cout<<count1<<endl;
        }
    }
}
