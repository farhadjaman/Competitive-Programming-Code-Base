#include<iostream>
using namespace std;
int main()
{
    int n,tc,div,rem;
    cin>>tc;
    while(tc--)
    {
      cin>>n;
      div=n/2;
      rem=n%2;
      cout<<"div = "<<div<<endl;
      cout<<"rem = "<<rem<<endl;
    }

}
