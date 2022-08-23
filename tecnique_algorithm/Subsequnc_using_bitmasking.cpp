#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>getsubsets(vector<int>num)
{
    int i,j,Size,subsetNum,x;
    vector<vector<int>>AllSubset;//(for all subset)
    Size=num.size();//size=3 num={1,2,3}
    subsetNum=1<<Size;
    for(i=0; i<subsetNum; i++)
    {
        vector<int>subset;

        for(j=0; j<Size; j++)
        {
            if((i&(1<<j)))
                subset.push_back(num[j]);
        }

        AllSubset.push_back(subset);
    }
    return AllSubset;


}
int main()
{

    int i,x,n;
    vector<vector<int>>allset;
    cin>>n;

    vector<int>num;

    for(i=0; i<n; i++)
    {
        cin>>x;
        num.push_back(x);
    }
    allset=getsubsets(num);

    for(vector<int>subset:allset)
    {
        for(int it:subset)
            cout<<it<<" ";
        cout<<endl;
    }


}
