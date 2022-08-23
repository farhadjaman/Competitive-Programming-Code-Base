#include<iostream>
using namespace std;
void Increament(int* p)
{
   *p=*p+1;
}
int main()
{
   int a;
   a=10;
   //int *p=&a;
   Increament(&a);
   cout<<a<<endl;

}
