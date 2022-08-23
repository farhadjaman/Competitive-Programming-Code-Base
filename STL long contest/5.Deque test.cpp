#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
       int i,n,k;
       deque<int>q(k);
       cin>>n>>k;
       int ara[n];
       for(i=0;i<k;i++)
       {
           if(!q.empty()&& ara[i]>ara[q.back()])
            q.pop_back();

           q.push_back(i)
       }
       cout<<q.front()<<endl;


    }
}

