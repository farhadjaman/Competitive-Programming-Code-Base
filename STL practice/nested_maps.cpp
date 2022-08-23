#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,value;
    string fn,ln;
    map<pair<string,string>,vector<int>>mp;
    cout<<"Input how many values you want to store"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>fn>>ln>>value;
        mp[{fn,ln}].push_back(value);
    }
    for(auto &it:mp)
    {
       auto &fullname=it.first;
       auto &list=it.second;
       cout<<fullname.first<<" "<<fullname.second<<endl;
       for(auto &element:list)
       {
           cout<<element<<" ";
       }
       cout<<endl;
    }
}

//Example code:https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE
// int main()
// {
//         map<int,multiset<string>>mp;
//            int n,x;
//            string s;
//            cin>>n;
//            rep(i,0,n)
//            {
//               cin>>s>>x;
//               mp[(-1)*x].insert(s);
//            }
//            //here if we insert the never negetively
//            //the biggest number will be the smallest number
//            //so when we will iterate over the map
//            //we will get the biggest number fast and the smallest number
//            //last
//            for(auto it:mp)
//            {
//                auto students=it.second;
//                int mark=it.first;
//                for(auto student:students)
//                {
//                    cout<<student<<" "<<mark*(-1)<<endl;

//                }
//            }
        
// }