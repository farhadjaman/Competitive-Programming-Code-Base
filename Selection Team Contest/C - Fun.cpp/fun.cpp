#include<bits/stdc++.h>
using namespace std;
long long int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;

        if (arr[m] == x)
        {
            return 1;
        }


        if (arr[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }
    return 0;

}




int main()
{
    long long int j,n,m,i,count1=0,count2=0,count4=0,count3=0,I1=0,I2=0,find;
    cin>>n;
    int ara1[n],ara11[n],cnt[100001]={0};



    for(i=0; i<n; i++)
    {
        cin>>ara1[i];

        ara11[i]=ara1[i];
    }


    reverse(ara11, ara11 + n);


    cin>>m;
    int ara2[m];



    for(i=0; i<m; i++)
    {

        cin>>ara2[i];
        cnt[ara2[i]]++;
    }

    sort(ara2,ara2+m);

    for(i=0; i<n; i++)
    {
        find=ara1[i];
        I1=binarySearch(ara2,0,m-1,find);
        if(I1==1)
        {
            count1=((i+1)*cnt[ara1[i]]);
            count3=count3+count1;
        }





    }
    for(i=0; i<n; i++)
    {
        find=ara11[i];
        I2=binarySearch(ara2,0,m-1,find);
        if(I2==1)
        {
            count2=((i+1)*cnt[ara11[i]]);
            count4=count4+count2;
        }


    }



    cout<<count3<<" "<<count4<<endl;
}
