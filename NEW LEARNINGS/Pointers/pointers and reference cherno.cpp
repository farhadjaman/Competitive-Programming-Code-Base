/*pointer is just a nmber which holds the address of sum value
the type we put when intialinz a pointer
is just the type of data we put in that address*/

/*reference is just something that
refer to the address of a variable*/

//code
#include<iostream>
using namespace std;
#define output(x) cout<<x<<endl;

/*void increment(int& data)
{
    data++;//when we do it it acually increment
           // the value of data variable
}
int main()
{
    int value=5;
    int& ref=value;//taking the address of the value

    increment(value);

    output(value);



}*/

//if we do the same thing using pointer it will be much lengthy
//for example


void increment(int* data)
{
    (*data)++;
}
int main()
{
    int a=5;
    increment(&a);
    output(a);
    //same thing
    //bekar khatni,chude chatni :)

}
