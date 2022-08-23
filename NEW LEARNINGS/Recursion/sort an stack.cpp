#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,n)  for(long long int i=a;i<n;i++)
#define brep(i,a)  for(long long int i=a;i>=0;i--)
#define all(x)      x.begin(),x.end()
#define allara(x,n) x,x+n
#define w(x)        long long int x; cin>>x; while(x--)
#define vec         vector<long long int>
#define stac         stack<int>
#define vectorpair  vector<pair<long long int,long long int>>
#define Fast_Read   ios_base::sync_with_stdio(false); cin.tie(nullptr);  cout.tie(nullptr);
#define MAX         1000000007
#define MOD         100000000
using ll = long long int;
//..............................................//
void Insert1(stack<int>& v1,int last_eliment)
{
    int n=v1.size();

    if(n==0 || v1.top()<=last_eliment)
    {
        v1.push(last_eliment);
        return;
    }

    int temp=v1.top();
    v1.pop();
    Insert1(v1,last_eliment);
    v1.push(temp);
    return;

}
void Sort1(stack<int> &v1)
{
    if(v1.size()==0)
        return;

    int n=v1.size();
    int last_eliment=v1.top();
    v1.pop();
    Sort1(v1);
    Insert1(v1,last_eliment);



}
void Insert_for_reverse(stac& s1,int temp)
{
  if(s1.size()==0)
  {
    s1.push(temp);
    return;
  }
  int temp1=s1.top();
  s1.pop();
  Insert_for_reverse(s1,temp);
  s1.push(temp1);//this is the element of this stack,we will push this temp1 after inserting temp
}
void reverse1(stac& s1)
{
  if(s1.size()==0)
  {
    return;
  }
  int temp=s1.top();
  s1.pop();
  reverse1(s1);
  Insert_for_reverse(s1,temp);
}
int main()
{
    Fast_Read;
    int tc;
    cin>>tc;
    for(int case1=1; case1<=tc; case1++)
    {
        ll n,x;
        stack<int> v1;
        cout<<"Input Stack size"<<endl;
        cin>>n;
        rep(i,0,n)
        {
            cin>>x;
            v1.push(x);
        }
        Sort1(v1);
        reverse1(v1);
         while(v1.size())
         {
           cout<<v1.top()<<" ";
           v1.pop();
         }


    }


}

