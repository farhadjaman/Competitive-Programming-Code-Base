#include<bits/stdc++.h>
using namespace std;
using ScoreMap = map<string,int>;//a shortcut for map intialization

int main()
{

    ScoreMap map1;
    map1["Farhad"]=5;
    map1["Jaman"]=6;

    for(ScoreMap::const_iterator it=map1.begin();it!=map1.end();it++)
        //const iterator means we can't change the value while iterating over it
    {
        auto& key=it->first;
        auto& value=it->second;
        cout<<key<<" = "<<value<<endl;
    }
    //same thing but in a short way
    cout<<endl;
    for(auto fj: map1)
    {
        auto& key=fj.first;
        auto& value=fj.second;
        cout<<key<<" = "<<value<<endl;

    }
    cout<<endl;
    //even cleaner
    for(auto [key,value]: map1)
        cout<<key<<" = "<<value<<endl;

}
