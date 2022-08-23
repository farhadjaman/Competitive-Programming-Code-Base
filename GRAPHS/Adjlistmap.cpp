#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)    for(long long int i=a;i<n;i++)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define Vector          vector<long long int>
#define Vectorpair      vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
using ll = long long int;
class graph
{
    public:

    unordered_map<string,list<pair<string,int>>>list1;

    void addedge(string A,string B,bool direction,int weight)
    {
        list1[A].push_back(make_pair(B,weight));
        if(direction==true)
        {
            list1[B].push_back(make_pair(A,weight));
        }
    }
    void printlist()
    {
        for(auto it:list1)
        {

            string key=it.first;
            list<pair<string,int>>nbrs=it.second;

            cout<<key<<"->";
            for(auto nbr:nbrs)
              cout<<nbr.first<<","<<nbr.second<<" ; ";

            cout<<endl;

        }

    }
};
//..............................................//
int main()
{
    Fast_Read;
    graph ob;
    ob.addedge("A","B",true,20);
    ob.addedge("A","C",false,15);
    ob.addedge("C","D",true,10);
    ob.addedge("D","A",true,5);
    ob.printlist();
}


