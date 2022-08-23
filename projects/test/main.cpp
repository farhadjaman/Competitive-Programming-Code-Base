#include<bits/stdc++.h>
using namespace std;
int binery_sarch(int ara[],int n,int key)
{
    if(key<=ara[0])
        return -1;
    else
    {
        int mid,ans;
        int left=0,right=n-1;
        while(left<=right)
        {
            mid=left+(right-left)/2;
            if(ara[mid]<key)
            {
                ans=mid;
                left=mid+1;
            }
            else
                right=mid-1;
        }
        return ans;
    }


}
int main()
{
    int i,j,n,m,x,y,sum;
    int ara[n],ara1[n];
    pair<int,int>m1[m];
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    copy(ara,ara+n,ara1);
    sort(ara1,ara1+n);
    for(i=0; i<m; i++)
    {
        cin>>m1[i].first>>m1[i].second;
    }

    for(i=0; i<n; i++)
    {
        y=binery_sarch(ara1,n,ara[i]);
        sum=y+1;
        for(j=0; j<m; j++)
        {
            if((i+1)==m1[j].first)
            {
                if(ara[(m1[j].first)]>ara[(m1[j].second)])
                {
                    sum--;
                    break;
                }

            }
        }
        for(j=0; j<m; i++)
        {
            if((i+1)==m1[j].second)
            {
                cout<<i+1<<endl;
                if(ara[(m1[j].first)]<ara[(m1[j].second)])
                {
                    sum--;
                    break;
                }

            }
        }

       cout<<sum<<endl;
       sum=0;

    }

}
