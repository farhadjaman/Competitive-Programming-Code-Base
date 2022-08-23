//Bitset is a array of set which only contains 0 or 1
//its best to initialize vaue in bitset as a string
//bitset<int_value>var(string("bitstring"))
#include<bits/stdc++.h>
using namespace std;

int main()
{
//bitset structure
  /* bitset<2>ara1;
   ara1[0]=1;
   ara1[1]=0;
   cout<<ara1<<endl;*/

   /*//convert a decimal number into a binary number
   bitset<5>int1(8);
   cout<<int1<<endl;
   */
   /*
   //convert a bitset into integer
   int n=(int)int1.to_ulong();//to a long integer
   cout<<n<<endl;
    */
    /*
   //convert a string to a bitset
   string str1="0111011111";//only a string of 0 and 1 will work
   bitset<10>str(str1);
   cout<<str;
   //converting bitset to a string_
   string str2=str.to_string();
   */

   /*
   //count the number of ones in a bitset
   bitset<10>str{1001101000};
   cout<<str.count()<<endl;
   */
    /*
   //Basic operations
   bitset<4>a{1101};
   bitset<4>b{0001};
   cout<<(a&b)<<endl;
   cout<<(a|b)<<endl;
   cout<<(a^b)<<endl;
   cout<<(~a)<<endl;//negation
   cout<<(a<<1)<<endl;//left shift
   cout<<(b>>1)<<endl;//right shift
   */
   /*
   //putting a particular part of bit string into a bitset
   string str1="1011011110";
   istringstream farhad(str1);
   bitset<2>s1;//creating a bitset to put first 2 value of the string into bitset
   bitset<6>s2;//to put the next 6 value of the string;
   farhad>>s1;
   farhad>>s2;
   cout<<s1<<endl;
   cout<<s2<<endl;
   */
   /*
   //check set have any bit inside
   bitset<4>a{1101};
   bitset<4>b{0001};
   bitset<4>c(string("1111"));
   cout<<a.any()<<endl;//true(1)
   cout<<b.any()<<endl;//true(1)

   //check set have no bit inside
   cout<<a.none()<<endl;//false(0)
   cout<<b.none()<<endl;//false(0)

   //check all bits of a set is 1
   cout<<c.all()<<endl;
   */
   /*
   //flip all or any perticular bit
   bitset<4>a(string("0101"));
   cout<<a.flip()<<endl;//fliped all the bits
   cout<<a.flip(0)<<endl;//fliped the second bit from right
   */
   /*
   //reset particular or all bits(1->0)
   bitset<4>a(string("1111"));
   cout<<a.reset(1)<<endl;//reset the second bit from right
   cout<<a.reset()<<endl;//reset all the bits
   */
   /*
   //set particular or all bits(0->1)
   bitset<4>a(string("0000"));
   cout<<a.set(1)<<endl;//set the second bit from right
   cout<<a.set()<<endl;//reset all the bits
   */








}
