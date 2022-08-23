#include<bits/stdc++.h>
#include<cstdio>
#define INF -.000000001
using namespace std;
int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;

        else
        {
            int a,b,i=0,j=0,count=1;
            double m,x1,y1,x2,y2;
            vector< pair <int,int>>vect;
            vector<double>v1;
            for(i=0; i<n; i++)
            {
                cin>>a>>b;
                vect.push_back(make_pair(a,b));
            }
            for (i=0; i<vect.size(); i++)
            {
                for(j=i+1; j<vect.size(); j++)
                {
                    x1=vect[i].first;
                    y1=vect[i].second;
                    x2=vect[j].first;
                    y2=vect[j].second;
                    if((x2-x1)==0)
                           v1.push_back(INF);
                    else
                    {
                        m=((y2-y1)/(x2-x1));
                           v1.push_back(m);
                    }





                }

            }
            sort(v1.begin(),v1.end());
            for(i=1; i<v1.size(); i++)
            {
                if(v1.at(i)!=v1.at(i-1))
                    ++count;
            }

            cout<<count<<endl;



        }



    }






}
