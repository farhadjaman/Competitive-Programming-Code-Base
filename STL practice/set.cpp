#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    set<int>s;
    cin>>tc;
    while(tc--)
    {

        int x,y;
        cin>>x>>y;
        if(x==1)
            s.insert(y);
        else if(x==2)
            s.erase(y);
        else if(x==3)
        {
            auto it=s.find(y);

            if(it != s.end())
                cout<<"Yes"<<endl;
            else
                 cout<<"No"<<endl;

        }




    }
}
