#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main()
{
   int i,n,j,m;
   cin>>n;
   char s;
   int ara[n],ara1[10005]={};
   rep(i,n)
   {
       cin>>ara[i];
       ara1[ara[i]]++;
   }
   cin>>m;
   rep(i,m)
   {
       cout<<"first"<<endl;
       rep(i,3)
          cout<<ara1[i]<<" ";
          cout<<endl;

       rep(i,3)
           cin>>s>>j;

       if(s=='+')
       {
           ara1[j]++;
       }
       else
           ara1[j]--;

       cout<<"second"<<endl;
       rep(i,3)
          cout<<ara1[i]<<" ";
          cout<<endl;

   }






}
