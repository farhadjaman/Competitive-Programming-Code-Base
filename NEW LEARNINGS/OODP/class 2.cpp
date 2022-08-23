#include<bits/stdc++.h>
using namespace std;

class myclass
{
    int a,b;
    public:
    myclass(int i,int j)
    {
        a=i;
        b=j;
    }
    int show()
    {

        cout<<a*b<<endl;
    }
};

int main()
{
    myclass ob(5,6);
    ob.show();

}
