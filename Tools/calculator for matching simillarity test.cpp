#include<iostream>
using namespace std;
int main()
{
   int count,flag=1,div,rem;
   cin>>count;



    while(count>0)
    {
        flag=0;
        rem=count%10;
        div=count/10;
        if(rem==7 || rem==4)
        {
            flag=0;
        }
        else
        {
        flag=1;
        break;
        }


        count=div;

    }



    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
