#include<iostream>
using namespace std;
class fibonacchi
{
    unsigned long int temp1,temp2,total;
public:
    fibonacchi()
    {
        temp1=0;
        temp2=1;
        total=temp1+temp2;
    }
    fibonacchi (fibonacchi &ref1)
    {
        temp1=ref1.temp1;
        temp2=ref1.temp2;
        total=ref1.total;
    }
    void series(int n)
    {
        cout<<temp1<<" "<<temp2<<" ";
        for(int i=0;i<n-2;i++)
        {
            cout<<total<<" ";
            temp1=temp2;
            temp2=total;
            total=temp1+temp2;

        }

    }
};
int main ()
{
    int n;
    cout<<"How many number you want to Print"<<endl;
    cin>>n;
    fibonacchi number;
    number.series(n);
}
