//bismillahir rahmanir rahim
//welcome to the core of programming:BIt
#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
void print(int n)
{
    cout<<n<<endl;
}

int main()
{
    cout<<"Number of elements in the array"<<endl;
    int n,flag1=0,flag2=0;
    int sum=0,sum_compliment=0,sum1=0,sum2=0;
    cin>>n;
    int ara[n];
    cout<<"Input you array"<<endl;
    rep(i,n)
    cin>>ara[i];
    sum=ara[0];
    for(int i=1; i<n; i++)
        sum^=ara[i];

    sum_compliment=(sum^1)+1;
    sum=sum & sum_compliment;

    rep(i,n)
    {
        if(sum&ara[i]==0 && flag1==0)
        {
            sum1=ara[i];
            flag1=1;
        }
        else if(sum&ara[i]==0)
        {
            sum1^=ara[i];
        }
        if(sum&ara[i]==1 && flag2==0)
        {
            sum2=ara[i];
            flag2=1;
        }
        else if(sum&ara[i]==0)
        {
            sum2^=ara[i];
        }

    }
    print(sum1);
    print(sum2);



}
