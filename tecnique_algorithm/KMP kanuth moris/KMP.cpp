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
string str;

vector<int>lpsarray;
void LPS()
{
    int i,leng=0,CurrentPosition=2,stringlength;
    lpsarray.resize(str.size(),0);
    stringlength=str.size();
    while(CurrentPosition<stringlength)
    {
        if(str[CurrentPosition]==str[leng+1])
        {
            leng++;
            lpsarray[CurrentPosition]=leng;
            CurrentPosition++;
        }
        else
        {
            if(leng>0)
            {
                leng=lpsarray[leng];
            }
            else
            {
                CurrentPosition++;
            }
        }
    }








}
int main()
{
    Fast_Read;
    string string1,pattern;
    cout<<"Please input the pattern you want to search"<<endl;
    cin>>pattern;
    cout<<"Please input the string you want to search the pattern"<<endl;
    cin>>string1;
    str+="#";
    str+=pattern;
    str+="#";
    str+=string1;

    LPS();
    for(auto it:str)
            cout<<it<<" ";
    cout<<endl;

     for(auto it:lpsarray)
            cout<<it<<" ";
    cout<<endl;


    for(auto it:lpsarray)
            if(it==pattern.size())
            {
                cout<<"YES the patter is found in the string"<<endl;
                break;
            }

}

//cout<<"Case "<<case1<<": "<<s<<endl;

