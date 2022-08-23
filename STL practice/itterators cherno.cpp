#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
   using scoremap = unordered_map<string,int>;
   scoremap map1;
   map1["Farhad"]=5;
   map1["Jaman"]=6;
   scoremap::const_iterator it;

   for(it=map1.begin();it!=map1.end();it++)
   {
       auto& key=it->first;
       auto& value=it->second;
       cout<<key<<"="<<value<<endl;



   }
   //another way
   cout<<endl;

   for(auto kv:map1)
   {
       auto& key=kv.first;
       auto& value=kv.second;
       cout<<key<<"="<<value<<endl;
   }
   //another way
   cout<<endl;

   for(auto[key,value]:map1)
       cout<<key<<"="<<value<<endl;




}


