#include<iostream>
using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)
class copy1
{
    int var,fact;
public:
    copy1() {} //no perameter in object
    copy1(int temp)//one perameter while creating object
    {
        var=temp;
        cout<<"constructor called"<<endl;
    }
    double calculate()
    {
        fact=1;
        rep(i,var)
        fact=fact*i;

        return fact;
    }


};
int main()
{
    int m;
    cout<<"Enter the Number:"<<endl;
    cin>>m;
    copy1 obj(m);
    copy1 cpy=obj;//copying obj object in cpy(constructor will not be called while copying obj)
    cout<<endl<<m<<"Factorial is:"<<cpy.calculate();

}
