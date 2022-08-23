#include<iostream>
using namespace std;
int main()
{
    int a=1025;
    int *p;
    p=&a;
    cout<<"size of integer is %d bytes "<<sizeof(int)<<endl;
    cout<<"Address ="<<p<<"value ="<<*p<<endl;//address=204 value=1025
    cout<<"Address ="<<p+1<<"value ="<<*(p+1)<<endl;//address=208 value=garbage
    char *pt;
    pt=(char*)p;//typecasting
    cout<<"size of integer is %d bytes"<<sizeof(char)<<endl;
    cout<<"Address = "<<pt<<" value = "<<*pt<<endl;//adress 204 value 1
    //because 1025=00000000 00000000 00000100 00000001
    //and it will out only the list byte that is 00000001
    //cout<<"Address = "<<p0+1<<" value = "<<*(p0+1)<<endl;

    void *p0;//(just to point the address no dereferencing)
    p0=p;
    cout<<"Address of p0"<<p0;
    cout<<"value of p0"<<*p0;//compilation error




}
