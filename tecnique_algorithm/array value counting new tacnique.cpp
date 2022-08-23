#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int ara[n],cnt[100001]={0};
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        cnt[ara[i]]++;

    }


    for(i=0;i<=100000;i++)
    {
        if(cnt[i]!=0)
        cout<<i<<"="<<cnt[i]<<endl;
    }



}
