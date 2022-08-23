#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int i,n,k,temp=0,count=0,sum=0;
        cin>>n>>k;
        int a1[n],a2[n];
        for(i=0;i<n;i++)
        {
            cin>>a1[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>a2[i];
        }
        sort(a1,a1+n);
        sort(a2,a2+n,greater<int>());
        for(i=0;i<n;i++)
        {
             if(count==k)
            {
                break;
            }
            if(a1[i]<a2[i])
            {
                temp=a1[i];
                a1[i]=a2[i];
                a2[i]=temp;

                temp=0;
                count++;
            }


        }
        for(i=0;i<n;i++)
        {
            sum=sum+a1[i];
        }
        cout<<sum<<endl;




    }
}
