#include<bits/stdc++.h>
using namespace std;
int main()
{
   int tc,i,mark;
   string name;
   map<string,int>m1;


   cin>>tc;
   while(tc--)
   {
       cin>>i;
       if(i==1)
       {
           cin>>name>>mark;
           auto it=m1.find(name);
           if(it==m1.end())
            m1.insert(make_pair(name,mark));
           else
            m1[name]+=mark;
       }
       else if(i==2)
       {
           cin>>name;
           m1.erase(name);
       }

       else
       {
           cin>>name;
           cout<<m1[name]<<endl;
       }



   }

}
