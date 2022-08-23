#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
/*void print(char* c)
{
    int i=0;
    c=
    while(*(c+i)!='\0')
    {
        cout<<*(c+i)<<endl;
        i++;
    }
}
int main()
{
    char c[20]="Hello";
    print(c);
}*/
//we can write the code like this

void print(char* c)
{
    *c='A'; //we can change it here but
            //in main function we can not do it if we use pointer
    while(*c!='\0')
    {
        cout<<*c<<endl;
        c++;
    }
}
int main()
{
    char c[20]="Hello";//string gets stored in the space for array
    //or we can write like this
    //char *c="Hello"//work same as c[20] but it is constant
    //so we cannot make any change in the string "hello" but we can change it in print function because another pointer is pointing to the a particular array.
    //string gets stored as compile time constant
    print(c);
}
/*we can do the next process bcz c is an charecter type pointer
and when we are incrementing c(c++) it's going to the next
address of the array and when we are outputting *c,it dereferencing the value of
of address putted in c*/

