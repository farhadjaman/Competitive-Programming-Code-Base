#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int* p=&a;
    //pointer arithmatic;
    cout<<p<<endl;  //if p is 2002
    cout<<p+1<<endl;//p+1 is 2006 because p is an integer pointer incrementing
                    //one unit takes us to the address of next integer bcz
                    //the size of an integer is four bytes to go the next integer
                    //address we need to skip 4 bytes
    cout<<"value at adress p is "<<*p<<endl;
    cout<<"value at adress p+1 is "<<*(p+1)<<endl;//garbage value

}
