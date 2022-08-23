#include<iostream>
using namespace std;
int main()
{
    int i,x,num1,num2=0;
    cin>>num1;
    string s=to_string(num1);
            x=s.size();
            for(i=x-1; i!=-1; i--)
            {
                s[i]=s[i]-'0';
                num2=num2*10+s[i];

            }
            cout<<num2;
}
