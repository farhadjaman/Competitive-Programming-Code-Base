#include<iostream>
#include <algorithm>
using namespace std;

int binery_search(int ara[],int n,int key)
{
    int left=0,right=n-1,mid;
    while(left<=right)
    {
        mid=left+((right-left)/2);
        if(ara[mid]==key)
            return mid;
        else if(ara[mid]>key)
            right=mid-1;
        else
            left=mid+1;
    }
    return -1;
}



int main()
{
    int i,n,find,Index;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    cout<<"Which number you want to find"<<endl;
    cin>>find;
    sort(ara,ara+n);
    Index=binery_search(ara,n,find);
    cout<<Index;

}
