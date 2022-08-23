#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main()
{
    //int y,z,x,count1=0;
    x=5;
    cout<<(~x)<<endl;;
    y=1;//=00001
    y=y<<4;//=10000=16 bit shifted in left for 4 bits
    z=16;//=10000
    z=z>>4;//=00001 bit shifted for 4 bit in right side
    cout<<y<<endl;
    cout<<z<<endl;

    /*cout<<(x&1)<<endl;

    rep(i,30)
     {
         if((x&(1LL<<i))!=0)//1 with long long so id i is a
                            //long long value there should be any overflow
                            //(x&(1LL<<i))==(x>>i)&1
            cout<<i<<endl;
     }*/
     /*even or odd
     we use modulus operator to check if the number is
     even or odd but it's time complexity is too large O(n^3)
     that's why we use bitwise operator & to check it faster

     x=4;
     if(x&1==1)
        cout<<"it's a odd number"<<endl;
     else cout<<"it's a even number"<<endl;*/
     /*
     here 4=100
          1=001
          so And=0
          so we can observe that in odd numbers the first bit is 1
          so if we & it with 1 we get 1
     */
     /*count the number of 1 in a bit
     x=5;//101
     while(x>0)
     {
         if(x&1==1)
            count1++;

            x=x>>1;
     }
     cout<<count1<<endl;*/

     /*Converting a into b(a<b
     int a=10,b=13;

     //a=a+(a^b); //a^b=|a-b|
     cout<<a+(a^b)<<endl;*/

     /*Removing the last set bit
     x=13;//x=1101->1100
     x=x&(x-1);
     cout<<x<<endl;//1100 last setbit is removed
                   //1101 & 1100=1100
     x=x&(x-1);
     cout<<x<<endl;//1000(after removing the last bit

     */
     /*Swwapping(XOR Swapping)
    //normal swapping using a variable temp can be lengthy
    //memory consumption is high
    //one charecteristics of xor is that it cuts same numbers
    //x^X=0

    int a,b;
    a=13;
    b=8;
    a=(a^b);
    b=a^b; //as a=a^b so b=a^b^b
    //now b=a;
    a=a^b;//as b=a so =(a^b)^b=a^b^a
    //after swapping a=8 b=13
    cout<<a<<" "<<b<<endl;*/


    /*Extracting the i-th bit
      //position
            // 3210
             //||||
    int a=13;//1101
    //so we want to change the second bit(0)
    //Now we have to create a bitmask
    int bitmask=(1<<2);//0100,2th bitmask
    int Extracted_value=a&bitmask;
    cout<<Extracted_value<<endl;//0100
    //in shortcut n=n&(1<<ith bit)*/


   /*changing the ith bit 0->1 or 1->0
   Changed bit=(n^(1<<ith))
   */


   /*counting 1's in a number

   we can use built in function of gcc to count 1's in a number
   so
   cout<<__builtin_popcountll(4)<<endl;//output 1;
   __builtin_popcount = int
   __builtin_popcountl = long int
   __builtin_popcountll = long long
   */







}

