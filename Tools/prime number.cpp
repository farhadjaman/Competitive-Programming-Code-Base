#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,num,flag=0;
    cin>>num;
    if(num==2)
        cout<<"YEAH!!!It's a prime number"<<endl;
    else if(num>2 && num%2==0)
        cout<<"NO:( It's not a prime number"<<endl;
    else
    {
        for(i=3; i<=sqrt(num); i=i+2)
        {
            if(num%i==0)
            {
              flag=1;
              break;
            }

        }
        if(flag==0)
            cout<<"YEAH!!!It's a prime number"<<endl;
        else
            cout<<"NO:( It's not a prime number"<<endl;
    }



}
