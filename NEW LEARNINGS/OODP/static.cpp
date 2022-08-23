#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
void demo()
{
    static int count=0;
    cout<<count<<endl;
    //count=5;
    count++;
}
int main()
{
    rep(i,5)
        demo();
}
