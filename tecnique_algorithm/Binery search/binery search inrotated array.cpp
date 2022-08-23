#include<bits/stdc++.h>
using namespace std;
int binerysearch(int ara[],int n)
{
    int left,right,mid;
    left=0;
    right=n-1;
    if(ara[left]<ara[right])
        return ara[left];
    else
    {
        while(true)
        {
            mid=left+((right-left)/2);
            if(ara[mid]>ara[left])
            {
                left=mid+1;
            }
            else
            {
                if(ara[mid]<ara[mid-1]&& ara[mid]<ara[mid+1])
                    return ara[mid];
                else
                    right=mid-1;
            }
        }
    }

}

int main()
{
    int n=6;
    int ara[]= {6,7,8,1,2,3};
    int min1=binerysearch(ara,n);
    cout<<min1<<endl;

}
