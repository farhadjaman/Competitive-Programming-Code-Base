#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(long long int i=a;i<n;i++)
#define brep(i,a,n)  for(long long int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vector1     vector<long long int>
#define vectorpair  vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         100000000000
using ll = long long int;
//..............................................//
int main()
{
    int n=4;
    int ara[n]={1,2,4,5};
    bool res=binary_search(ara,ara+5,4);//if the number is in array it will be true else false
    //bool vecres=binary_search(v.begin(),v.end(),4)//if it is a vector type

    //lower_bound
    //lower bound gives the index of the asking number,if the number is not there
    //it will give the next index number

    int ind=lower_bound(ara,ara+n,4)-a;//print = 2
    int ind1=lower_bound(ara,ara+n,3)-a;//print = 2 ;it will print the next index
    int ind2=lower_bound(ara,ara+n,6)-a;//print = 4;it will print the nth index which is out of bound
    int vecres=lower_boundh(v.begin(),v.end()//if it is a vector type




}


