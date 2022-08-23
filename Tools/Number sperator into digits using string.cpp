#include<iostream>
using  namespace std;
int main()
{
   long long int i,n=11111111111111111111;
 string s= to_string(n);

 cout<<s;
 int x=s.size();
for(i=0 ;i<x;i++)
{
  cout<<s[i]<<endl;
}
cout<<s;


}


