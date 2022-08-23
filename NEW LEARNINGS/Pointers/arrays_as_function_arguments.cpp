#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int sum(int A[],int size)//int sum(int* A) same
{
    cout<<sizeof(A)<<endl;//print=4[32 bit];
    int i,sum=0;
    rep(i,size)
        sum+=*(A+i);//*(A+i) is A[i]

    return sum;
}
//int a[] actually means int *a,which doesn't copy the whole array
// it just copies the the address of the first eliment that why
//when we print the suzeof(a) inside sum function it prints 4
//it is calls "called by reference
int main()
{
   int a[]={1,2,3,4,5};
   cout<<sizeof(a)<<endl;//print=20
   int size=sizeof(a)/sizeof(int);
   int total=sum(a,size);
   cout<<total<<endl;
}

