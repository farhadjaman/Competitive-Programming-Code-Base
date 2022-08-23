#include<bits/stdc++.h>
using namespace std;

class x
{
public:
    int data;
};
int main()
{
    int *p1;
    int a=44;
    p1=&a;

    *p1=22;
    cout<<a<<endl;
    x *p=new x;
    (*p).data=22;

    cout<<(*p).data<<" "<<p->data<<endl;

}
