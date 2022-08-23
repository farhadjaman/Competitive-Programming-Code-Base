#include<iostream>
using namespace std;
int Countingsbits(int i)
{
    int count1=0;
    while(i>0)
    {
        if(i&1==1)
            count1++;
        i=i>>1;
    }

    return count1;
}
int main()
{

    int tc,count1=0,i;
    cin>>tc;
    while(tc--)
    {
       int a,b;
       cin>>a>>b;
       for(i=a;i<=b;i++)
       {
           if((i&1)==0 && i<b)
           {
              count1+=2*Countingsbits(i) +1;
              i++;
              continue;
           }
           count1+=Countingsbits(i);
       }
       cout<<count1<<endl;
    }

}
