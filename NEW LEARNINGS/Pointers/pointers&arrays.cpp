#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main()
{
    int a[5]={2,4,5,8,1};
    int *p;
    p=a;
    cout<<*p<<endl;//2
    cout<<*(p+1)<<endl;//4
    //another way to output array value
    cout<<*a<<endl;//2
    cout<<*(a+1)<<endl;//4
    cout<<a<<endl;//address of a[0]/&a[0]
    cout<<(a+1)<<endl;//address of a[1]/&a[1]
    cout<<endl<<endl;


    rep(i,5)
        cout<<*(a+i)<<endl;
        /*output
        2
        4
        5
        8
        1*/

}
